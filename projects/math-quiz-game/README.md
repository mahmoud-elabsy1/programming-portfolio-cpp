# Math Quiz Game (C++)

A console-based Math Quiz Game written in C++.  
The game generates random math questions based on the selected **level** and **operation type**, and the player has to answer them correctly.

After each answer, the program provides immediate feedback and updates the score.  

✅ Beginner-friendly C++ project to practice programming fundamentals, loops, enums, and structures.


## 🚀 Features:

- Select the number of questions (1–10).  
- Choose question difficulty: **Easy**, **Medium**, **Hard**, or **Mix**.  
- Choose operation type: **Add**, **Sub**, **Multiply**, **Divide**, or **Mix**.  
- Random number generation for each question.  
- Immediate feedback for correct/incorrect answers.  
- Score tracking with pass/fail result.  
- Option to play multiple rounds.


## 📂 Project Structure:

Math-Quiz-Game/
┣ main.cpp # Source code of the game
┣ README.md # Project documentation
┗ images/ # Screenshots of the game output


## 🛠️ Technologies Used:

- **Language:** C++  
- **Libraries:**  
  - `<iostream>` for input/output  
  - `<cmath>` for math operations  
  - `<cstdlib>` and `<ctime>` for random numbers and seeding  


## ▶️ How to Run:

1. Clone the repository or copy the `main.cpp` file.  
2. Compile the code using any C++ compiler:

```bash
g++ main.cpp -o math_quiz

Run the program:

./math_quiz


🎮 Example Output:


Example interaction:

How Many Questions Do you want to answer? 3
Enter Questions Level: [1]:Easy, [2]:Medium, [3]:Hard, [4]:Mix ? 2
Enter Operation Type: [1]:Add, [2]:Sub, [3]:Mult, [4]:Div, [5]:Mix ? 1

Question [1/3]
12 + 37
_____________________
Enter your answer: 49
Right answer :-)

Question [2/3]
45 + 10
_____________________
Enter your answer: 55
Right answer :-)

Question [3/3]
18 + 22
_____________________
Enter your answer: 39
Wrong Answer :-(
The right answer is: 40

Final Results: Fail :-(
Number Of Questions: 3
Questions Level: Medium
OpType: +
Number Of Right Answers: 2
Number Of Wrong Answers: 1

💡 Future Improvements:

Add time limits per question.
Introduce more advanced operations (power, modulo).
Add scoring system with levels and rewards.
Save player high scores to a file.

👨‍💻 Author
Developed with ❤️ by Mahmoud Elabsy.