#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main (){
    double c = 0;
    double k = 0;
    while ((cin >> c) && c > -273.15){
        k = ctok(c);
        cout << k << '\n';
    };

    cout << "Wrong Input" << endl;
    
    
    
}