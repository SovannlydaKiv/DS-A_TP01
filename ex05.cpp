#include <iostream>
using namespace std;
int main(){
    int min;
    cout << "Enter the minute you want to convert: ";
    cin >> min;
    
    int hour = min / 60;
    int remainMin = min % 60;
    int sec = remainMin * 60;
    
    cout << endl;
    cout << min << " minute(s) is equal to " << hour << ": " << remainMin << ": " << sec << endl;
}