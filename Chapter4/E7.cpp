#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    
    
    int dig1 = 0;
    int dig2 = 0;
    string val1 = " ";
    string val2 = " ";
    string operation = " ";

    vector <string> spell = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eigth", "nine"};
    vector <string> number = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};


    while(cin >> val1 >> val2 >> operation){
        for(int i = 0; i < 10; i++){
            if (val1 == spell[i]){
                dig1 = stoi(number[i]);
                break;
            }
            else if (val1 == number[i]){
                dig1 = stoi(number[i]);
                break;
            }
        }

        for(int i = 0; i < 10; i++){
            if (val2 == spell[i]){
                dig2 = stoi(number[i]);
                break;
            }
            else if (val2 == number[i]){
                dig2 = stoi(number[i]);
                break;
            }
        }

        if(operation == "+")
            cout << dig1 + dig2 << '\n';
        else if(operation == "-")
            cout << dig1 - dig2 << '\n';
        else if(operation == "*")
            cout << dig1 * dig2 << '\n';
        else if(operation == "/")
            cout << dig1 / dig2 << '\n';
        else
            cout << "I don't understand your input!\n";
    }


    return 0;
}