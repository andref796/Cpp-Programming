#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){

    /* Numeros primos entre 1 y 100 */



    vector <int> numbers;
    vector <int> primes;

    numbers.clear();
    primes.clear();

    int max = 0;


    cin >> max;

    for(int i = 2; i <= max; i++){
        numbers.push_back(i);
    }   

    for(int m = 2; m <= max; m++){

        for(int i = 0; i < numbers.size(); i++){
            cout << "Number: " << numbers[i] << "\n";
            cout << "Module: " << numbers[i] % 2 << "\n";
            if ((numbers[i] % m) != 0 || numbers[i] == m){
                primes.push_back(numbers[i]);
            }
        }
        numbers.clear();
        numbers = primes;
        primes.clear();


        for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << ", ";
        }
        cout << "\n";
    
    }
    
    return 0;
}