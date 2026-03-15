#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
    srand(time(0));  

    int userChoice, computerChoice;

    cout << "Let's play rock, paper, scissors! " << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Choose a number from 1-3" << endl;
        return 0;
    }

    computerChoice = (rand() % 3) + 1;

    string choices[] = {"", "Rock", "Paper", "Scissors"};
    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie, GG" << endl;
    }
    else if ((userChoice == 1 && computerChoice == 3) || 
             (userChoice == 2 && computerChoice == 1) ||  
             (userChoice == 3 && computerChoice == 2)) {  
        cout << "You won! YAY" << endl;
    }
    else {
        cout << "I WIN! HAHA " << endl;
    }

    return 0;
}