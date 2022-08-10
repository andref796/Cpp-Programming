#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    
    
    double val1 = 0;
    double val2 = 0;
    string operation = " ";

    while(cin >> val1 >> val2 >> operation){
        if(operation == "+")
            cout << val1 + val2 << '\n';
        else if(operation == "-")
            cout << val1 - val2 << '\n';
        else if(operation == "*")
            cout << val1 * val2 << '\n';
        else if(operation == "/")
            cout << val1 / val2 << '\n';
        else
            cout << "I don't understand your input!\n";
    }


    return 0;
}