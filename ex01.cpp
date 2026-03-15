#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    string major;
    string gender;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;
    cout << "Enter your major: ";
    cin >> major;
    cout << endl;

    if (gender == "F" || gender == "f"){
        cout << "Hi, Mrs. " << name << "!, you are " << age << " years old and you are majoring in " << major << endl;
    } 
    else if (gender == "M" || gender == "m"){
        cout << "Hi, Mr. " << name << "!, you are " << age << " years old and you learn " << major << endl;
    }
 
    if (age < 18){
        cout << "You cannot vote" << endl;
    } 
    else {
        cout << "You can vote" << endl;
    }
}