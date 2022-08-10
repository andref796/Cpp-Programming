#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    double grain = 1;
    double grain_sum = 1;
    for (int i = 2; i <= 64; i++){
        grain *= 2;
        grain_sum += grain;
        cout << "------------------\n";
        cout << "Squares " << i << "\n";
        cout << "Rice " << grain << "\n";
        cout << "Sum " << grain_sum << "\n";
    }
    return 0;
}