#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main (){
    string number;
    int result;
    cout << "Please enter a number: \n";
    while(cin >> number){
        if(number == "zero")
            cout << "The number is 0\n";
        else if (number == "one")
            cout << "The number is 1\n";
        else if (number == "two")
            cout << "The number is 2\n";
        else if (number == "three")
            cout << "The number is 3\n";
        else if (number == "four")
            cout << "The number is 4\n";
        else
            cout << "I can't understand your input\n";
    }
    return 0;
}