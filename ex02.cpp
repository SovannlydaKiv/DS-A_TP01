#include <iostream>
#include <string>
using namespace std;
int main (){
    char c;
    int ascii; 
    cout << "Enter a character: ";
    cin >> c;   
    ascii = (int)c;
    
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) {
        if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 ||
            ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117)
        {
            cout << c << " is a vowel." << endl;
        } 
        else {
            cout << c << " is a consonant." << endl;
        }
    }
}