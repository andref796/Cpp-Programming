#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main (){
    int number;
    int result;
    while(cin >> number){
        result = abs(number) % 2;
        if (result > 0)
            cout << "The number " << number << " is even\n";
        else
            cout << "The number " << number << " is odd\n";

    }
    return 0;
}