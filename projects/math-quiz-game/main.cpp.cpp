#include <iostream>  
#include <cmath> 
#include <cstdlib> 
#include <ctime>   
using namespace std;

enum enQuestionsLevel { EasyLevel1 = 1, MedLevel1 = 2, HardLevel1 = 3, Mix = 4 };

enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add: 
            return "+";
        case enOperationType::Sub: 
            return "-";
        case enOperationType::Mult: 
            return "*";
        case enOperationType::Div: 
            return "/";
        default: 
            return "Mix";
    }
}

string GetQuestionsLevelText(enQuestionsLevel QuestionsLevel)
{
    string arrQuestionLevelText[4] = { "Easy", "Med", "Hard", "Mix"};
    return arrQuestionLevelText[QuestionsLevel - 1];
}

int RandomNumber(int From, int To){
    int random = rand() % (To - From + 1) + From;

    return random;
}

void SetScreenColor(bool Right){

    if (Right)
    
        system("color 2F");
    else
    {
        system("color 4F");
        cout << "\a";
    }
  
}

short ReadHowManyQuestions()
{
    short NumberOfQuestions;

    do
    {
        cout << "How Many Questions Do you want to answer?";
        cin >> NumberOfQuestions;

    } while (NumberOfQuestions < 1 || NumberOfQuestions > 10);

    return NumberOfQuestions;
}

enQuestionsLevel ReadQuestionsLevel()
{
    short QuestionLevel = 0;

    do
    {
        cout << "Enter Questions Level: [1]:Easy, [2]:Medium, [3]:Hard, [4]:Mix ? ";
        cin >> QuestionLevel;

    } while (QuestionLevel < 1 || QuestionLevel > 4);
    
    return (enQuestionsLevel)QuestionLevel;
}

enOperationType ReadOpType()
{
    short OpType;

    do
    {
        cout << "Enter Operation Type: [1]:Add, [2]:Sub, [3]:Mult, [4]:Div, [5]:Mix ?\n";
        cin >> OpType;

    } while (OpType < 1 || OpType > 5);
    
    return (enOperationType)OpType;
}

struct stQuestion 
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

struct stQuiz
{
    stQuestion QuestionList[100]; // مصفوفة لتخزين الأسئلة
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool IsPass = false;
};

int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add: return Number1 + Number2;
        case enOperationType::Sub: return Number1 - Number2;
        case enOperationType::Mult: return Number1 * Number2;
        case enOperationType::Div: return Number1 / Number2;
    
        default: return Number1 + Number2;
    }
}

enOperationType GetRandomOperationType()
{
    return (enOperationType)RandomNumber(1, 4); // اختيار عشوائي من 1 إلى 4
}

stQuestion GenerateQuestion(enQuestionsLevel QuestionsLevel, enOperationType OpType)//!
{
    stQuestion Question;
    if (QuestionsLevel == enQuestionsLevel::Mix)
    {
        QuestionsLevel = (enQuestionsLevel)RandomNumber(1, 3); // اختيار عشوائي من المستويات
    }
    if (OpType == enOperationType::MixOp)
    {
        OpType = GetRandomOperationType();
    }

    Question.OperationType = OpType;
    
    switch (QuestionsLevel)
    {
        case enQuestionsLevel::EasyLevel1:
            Question.Number1 = RandomNumber(1, 10);
            Question.Number2 = RandomNumber(1, 10);

            Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
            Question.QuestionLevel = QuestionsLevel;
            return Question;

        case enQuestionsLevel::MedLevel1:
            Question.Number1 = RandomNumber(10, 50);
            Question.Number2 = RandomNumber(10, 50);

            Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
            Question.QuestionLevel = QuestionsLevel;
            return Question;
            
        case enQuestionsLevel::HardLevel1:
            Question.Number1 = RandomNumber(50, 100);
            Question.Number2 = RandomNumber(50, 100);
            
            Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
            Question.QuestionLevel = QuestionsLevel;
            return Question;
        }

        return Question;

}

void GenerateQuizQuestions(stQuiz& Quiz)
{
    for (short Question = 0; Question < Quiz.NumberOfQuestions; Question++)
    {
        Quiz.QuestionList[Question] = GenerateQuestion(Quiz.QuestionsLevel, Quiz.OpType);
    }
}

int ReadQuestionsAnswer()
{
    int Answer = 0;
    cin >> Answer;
    return Answer;
}

void PrintTheQuestion(stQuiz& Quiz, short QuestionNumber)
{
    cout << "\nQuestion [" << QuestionNumber  + 1 << "/" << Quiz.NumberOfQuestions << "]\n" << endl;
    cout << Quiz.QuestionList[QuestionNumber].Number1 << " "
     << GetOpTypeSymbol(Quiz.QuestionList[QuestionNumber].OperationType) << " "
     << Quiz.QuestionList[QuestionNumber].Number2 << endl;
    cout << "_____________________\n";

}

void CorrectTheQuestionAnswer(stQuiz& Quiz, short QuestionNumber)
{
    if(Quiz.QuestionList[QuestionNumber].PlayerAnswer != Quiz.QuestionList[QuestionNumber].CorrectAnswer)
    {
        Quiz.QuestionList[QuestionNumber].AnswerResult = false;
        Quiz.NumberOfWrongAnswers++;
        
        cout << "Wrong Answer :-( \n";
        cout << "The right answer is: ";
        cout << Quiz.QuestionList[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else 
    {
        Quiz.QuestionList[QuestionNumber].AnswerResult = true;
        Quiz.NumberOfRightAnswers++;

        cout << "Right answer :-)\n";
    }
    cout << endl;

    SetScreenColor(Quiz.QuestionList[QuestionNumber].AnswerResult);
}

void AskAndCorrectQuestionListAnswer(stQuiz& Quiz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quiz.NumberOfQuestions; QuestionNumber++){
        PrintTheQuestion(Quiz, QuestionNumber);
        Quiz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionsAnswer();
        CorrectTheQuestionAnswer(Quiz, QuestionNumber);
    }

    Quiz.IsPass = (Quiz.NumberOfRightAnswers >= Quiz.NumberOfWrongAnswers);
}

string GetFinalResultsText(bool Pass){

    if(Pass)
        return "Pass :-)";
    else
        return "Fail :-(";
}

void PrintQuizResults(stQuiz Quiz){

    cout << "\n_____________________________________________\n\n";
    cout << "Final Results is " << GetFinalResultsText(Quiz.IsPass);
    cout << "\n_____________________________________________\n\n";

    cout << "Number Of Questions: " << Quiz.NumberOfQuestions << endl;
    cout << "Questions Level    : " << GetQuestionsLevelText(Quiz.QuestionsLevel) << endl;
    cout << "OpType             : " << GetOpTypeSymbol(Quiz.OpType) << endl;
    cout << "Number Of Right Answers: " << Quiz.NumberOfRightAnswers << endl;
    cout << "Number Of Wrong Answers: " << Quiz.NumberOfWrongAnswers << endl;
    cout << "_______________________________\n";

}

void PlayMathGame()
{
    stQuiz Quiz;
    Quiz.NumberOfQuestions = ReadHowManyQuestions();
    Quiz.QuestionsLevel = ReadQuestionsLevel();
    Quiz.OpType = ReadOpType();

    GenerateQuizQuestions(Quiz);
    AskAndCorrectQuestionListAnswer(Quiz);
    PrintQuizResults(Quiz);
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame(){
    char PlayAgain = 'Y';

    do
    {
        ResetScreen();
        PlayMathGame();

        cout << endl << "Do You Want to Play again? (Y/N): ";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
    
}

int main(){

    srand((unsigned)time(NULL));

    StartGame();

    return 0;
}
