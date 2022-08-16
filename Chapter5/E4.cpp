#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;

double ctok(double c)
{
    if (c < -273.15)
        throw std::invalid_argument("Input value must be greater than -273.15");
    double k = c + 273.15;
    return k;
}

int main (){
    try {
        double c = 0;
        double k = 0;
        cin >> c;
        k = ctok(c);
        cout << k << '\n';
    }
    catch(std::invalid_argument& e){
        cerr << e.what() << endl;
        return -1;
    }
    return 0;
}