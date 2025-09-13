//*  فكرة البرنامج:
//* المستخدم بيكتب نص (مثلاً: HELLO)

//* البرنامج بيشفّر كل حرف بإنه يزوده بمفتاح التشفير +2
//* فـ H تبقى J, و E تبقى G، وهكذا

//* بعدين، البرنامج يفك التشفير تاني -2، ويرجع للنص الأصلي


#include <iostream>
using namespace std;

string ReadText(){
    string Text;
    cout << "Please enter a text: ";
    getline(cin, Text); // Use getline to read the entire line including spaces
    
    return Text;
}

string EncryptText(string Text, short EncryptionKey) {
    string EncryptedText = "";
    
    for (int i = 0; i < Text.length(); i++) {

        Text[i] = char((int)Text[i] + EncryptionKey);

    }
    
    return Text;
}

string DecryptText(string Text, short EncryptionKey) {
    string DecryptedText = "";
    
    for (int i = 0; i < Text.length(); i++) {

        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    
    return Text;
}


int main() {
    const short EncryptionKey = 2; 

    string Text = ReadText();
    string TextAfterEncryption, TextAfterDecryption;

    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\ntext befor encryption: " << Text << endl;
    cout << "text after encryption: " << TextAfterEncryption << endl;
    cout << "text after decryption: " << TextAfterDecryption << endl;


    return 0;
}