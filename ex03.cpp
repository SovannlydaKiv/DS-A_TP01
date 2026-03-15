#include <iostream>
#include <string>
using namespace std;
int main (){
    string name;
    string gender;
    int salary;

    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    cout << "Gender: ";
    cin >> gender;
    cout << endl;
    cout << "Enter your salary: ";  
    cin >> salary;
    cout << endl;

    if (gender == "female" || gender == "f"){
        if (salary < 300){
            cout << "No need to pay tax!" << endl;
        }
        else if (salary >= 300 && salary < 500){
            cout << "You have to pay 3.5% tax" << endl;
            cout << "Your tax is: " << salary * 0.035 << endl;
        }
        else if (salary >= 500 && salary < 1000){
            cout << "You need to pay 6.5% tax!" << endl;
            cout << "Your tax is: " << salary * 0.065 << endl;
        }
        else if (salary >= 1000){
            cout << "You need to pay 8% tax!" << endl;
            cout << "Your tax is: " << salary * 0.08 << endl;
        }
    }

    if (gender == "male" || gender == "m"){
        if (salary < 300){
            cout << "No need to pay tax!" << endl;
        }
        else if (salary >= 300 && salary < 500){
            cout << "You have to pay 5% tax" << endl;
            cout << "Your tax is: " << salary * 0.05 << endl;
        }
        else if (salary >= 500 && salary < 1000){
            cout << "You need to pay 7% tax!" << endl;
            cout << "Your tax is: " << salary * 0.07 << endl;
        }
        else if (salary >= 1000){
            cout << "You need to pay 9.5% tax!" << endl;
            cout << "Your tax is: " << salary * 0.095 << endl;
        }
    }
}