#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <limits.h>
using namespace std;

int main (){

    vector <int> Serie;
    int size = 0;
    int sum = 0;

    cout << "Enter the number of elements to sum" << endl;
    cin >> size;
    cout << "Enter the series of numbers" << endl;
    string number = " ";
    while (cin >> number && number != "|")
    {
        try{
            Serie.emplace_back(stoi(number));
        }
        catch(std::out_of_range& e){
            cerr << e.what() << endl;
            return -1;
        }

    }
    if(size != Serie.size())
    {
        cout << "The sum includes a lower or a bigger number of input elements to sum" << endl;
        return 0;
    }
    else
    {
        for (int i: Serie)
        {
            
            if(sum > 0 && i > INT_MAX - sum){
                cout << "The sum cannot be represent as an integer" << endl;
                return -1;
            }
            else{
                sum += i;
            }

        }
        cout << "The sum of " << size << " elements is " << sum << endl;    
    }
    return 0;
}