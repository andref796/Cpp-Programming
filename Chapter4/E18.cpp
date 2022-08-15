#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    
    double a = 0;
    double b = 0;
    double c = 0;
    double radicant = 0;
    double root1 = 0;
    double root2 = 0;
    
    
    cout << "This program resolves the a quadratic ecuation " << endl
         << "The form is ax^2 + bx + c = 0" << endl
         << "Please input the value of a, b and c separated by a space" << endl;

    cin >> a >> b >> c;    

    cout << "The equation is: \t" << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;

    radicant = pow(b,2) - 4*a*c;

    if (radicant >= 0){
        root1 = (-b + sqrt(radicant)) / (2*a);
        root2 = (-b - sqrt(radicant)) / (2*a);

        cout << "x1 is: \t" << root1 << endl;
        cout << "x2 is: \t" << root2 << endl;
    }
    else{
        root1 = (-b + sqrt(abs(radicant))) / (2*a);
        root2 = (-b - sqrt(abs(radicant))) / (2*a);

        cout << "x1 is: \t" << root1 << "i" << endl;
        cout << "x2 is: \t" << root2 << "i" << endl;
    }
}