
                    //*           جدول الضرب من 1 إلى 10

#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\t\t\t Multiplication Table From 1 To 10\n\n";
    
    cout << "\t";
    
    for (int i =1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    
    cout << "\n _________________________________________________________________________________\n";
}

string ColumSeparator(int i)  //* لتجميل الشكل النهائي للجدول
{

    if (i < 10)
    {
        return "    |"; 
    }
    
    else 
    {
        return "   |";
    }
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (int i = 1; i <= 10; i++) //* اول عمود
    {
        cout << " " << i << ColumSeparator(i) << "\t";

        for (int j = 1;  j<= 10; j++) //* نفس i اللي فوق الهيدر
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main ()
{
    PrintMultiplicationTable();
    
    return 0;
}