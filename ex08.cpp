#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int choice;

    cout << "Choose the function you would like to use: " << endl;
    cout << "1. Convert temperature from Celsius to Fahrenheit" << endl;
    cout << "2. Convert temperature from Fahrenheit to Celsius" << endl;
    cout << "3. Find the root of a quadratic equation ax² + bx + c = 0" << endl;
    cout << "4. Compute the BMI and determine whether the person's weight status" << endl;
    cout << "5. Calculate the sum from 1 to n except those that are divisible by 3" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        float celTemp1;
        cout << "Enter the temperature in Celsius: ";
        cin >> celTemp1;
        cout << endl;
        float fahTemp1 = (celTemp1 * 9.0/5.0) + 32;
        cout << celTemp1 << " °C in Fahrenheit is: " << fahTemp1 << " °F" << endl;
    }
    else if (choice == 2 ){
        float fahTemp2;
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahTemp2;
        cout << endl;
        float celTemp2 = (fahTemp2 - 32) * 5.0/9.0;
        cout << fahTemp2 << " °F in Celsius is: " << celTemp2 << " °C" << endl;
    }

    else if (choice == 3){
        int a, b, c;
        cout << "Enter the value of a, b and c into the quadratic equation: " << endl;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;

        float discriminant = b*b - 4*a*c;

        if (discriminant > 0) {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The roots are real and different: " << root1 << " and " << root2 << endl;
        }
        else if (discriminant == 0) {
            float root = -b / (2 * a);
            cout << "The roots are real and equal: " << root << endl;
        }
        else {
            cout << "The roots are complex and different" << endl;
        }
    }
    else if (choice == 4 ){
        float weight, height;
        cout << "Enter your weight (in kilograms): ";
        cin >> weight;
        cout << "Enter your height (in meters): ";
        cin >> height;

        float bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;
        
        if (bmi < 18.5){
            cout << "You are underweight, you should eat more" << endl;
        }
        else if (bmi < 25){
            cout << "Your weight is the standard normal weight!" << endl;
        }
        else if (bmi < 30){
            cout << "You are overweight, you need to get some exercise in" << endl;
        }
        else {
            cout << "You are obese, that's concerning" << endl;
        }
    }
    else if (choice == 5 ){
        int n;
        cout << "Enter a positive integer n: ";
        cin >> n;

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 3 != 0) {
                sum += i;
            }
        }
        cout << "The sum from 1 to " << n << " except those that are divisible by 3 is: " << sum << endl;
    }
    else if (choice == 6 ){
        cout << "Exiting the program. Goodbye!" << endl;
    }
    else {
        cout << "Invalid choice. Please choose a number between 1 and 6." << endl;
    }


}   
