#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*Convert Miles to Kilometers*/
int main (){
    cout << "Please enter the measure in Miles and I will retrieve to you the measure in Kilometers\n";
    double miles = 0.0;
    double kilometers = 0.0;
    while (cin >> miles){
        kilometers = 1.609 * miles;
        cout << "Miles :" << miles << "\t Kilometers: " << kilometers << "\n";
    }
    return 0;
}