
                     //* تاخد اسم من المستخدم وتطبعه */

#include <iostream>
#include <iostream>

using namespace std;

    string read_Name()
    {
        string Name;
        cout << "Enter your name: ";
        getline(cin, Name);

        return Name;
    }
    void print_Name(string Name){
        cout << "Hello, " << Name << endl;
    }

int main()
{

    print_Name(read_Name());





}