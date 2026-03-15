#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a number that is greater than 50: ";
    cin >> n; 
    
    if (n <= 50 ){
        cout << "Invalid number, enter one that is greater than 50" << endl;
        return 0;
    }
    for (int i = 1; i <=n ; i++){
        if (i == 10 || i == 30){
            continue;
        }
        sum += i;  
    }
    cout << "The sum of the numbers from 1 to " << n << " is: " << sum << endl;

}
        


