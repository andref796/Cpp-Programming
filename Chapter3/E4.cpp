#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*Convert Miles to Kilometers*/
int main (){
    cout << "Please enter two real values\n";
    double val1 = 0.0;
    double val2 = 0.0;
    while (cin >> val1 >> val2){
        // Operations
        if (val1 > val2)
            cout << "Value " << val1 << " is greather than Value " << val2 << '\n';
        else
            cout << "Value " << val1 << " is lower than Value " << val2 << '\n';
        cout << "Add: " << val1 + val2 << '\n' ;
        cout << "Substract: " << val1 - val2 << '\n';
        cout << "Product: " << val1 * val2 << '\n';
        cout << "Ratio: " << val1 / val2 << '\n';
    }
    return 0;
}