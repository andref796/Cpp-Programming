#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main (){
    string operation = " ";
    double val1 = 0.0;
    double val2 = 0.0;
    while (cin >> operation >> val1 >> val2){
        if(operation == "+")
            cout << "Add : " << val1 + val2 << '\n';
        else if(operation == "-")
            cout << "Substract : " << val1 - val2 << '\n';
        else if(operation == "*")
            cout << "Multiply : " << val1 * val2 << '\n';
        else if(operation == "/")
            cout << "Ratio : " << val1 / val2 << '\n';
        else
            cout << "I can't process the instruction\n";    
    }
    return 0;
}