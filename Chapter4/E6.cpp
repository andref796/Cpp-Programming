#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    vector <string> spell = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eigth", "nine"};
    vector <string> number = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string input = " ";
    int value = 0;
    while(cin >> input){
        for(int i = 0; i < 10; i++){
            if (input == spell[i]){
                value = stoi(number[i]);
                cout << value << '\n';
                break;
            }
            else if (input == number[i]){
                cout << spell[i] << '\n';
                break;
            }
        }
    }
    return 0;
}