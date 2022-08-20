#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <limits.h>
#include <cfloat>
using namespace std;

int main (){

    vector <double> Serie;
    vector <double> Difference;
    double size = 0;
    double sum = 0;

    cout << "Enter the number of elements to sum" << endl;
    cin >> size;
    cout << "Enter the series of numbers" << endl;
    string number = " ";
    while (cin >> number && number != "|")
    {
        try{
            Serie.emplace_back(stod(number));
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
        for (double i: Serie)
        {
            
            if(sum > 0 && i > DBL_MAX - sum){
                cout << "The sum cannot be represent as a double" << endl;
                return -1;
            }
            else{
                sum += i;
            }

        }
        cout << "The sum of " << size << " elements is " << sum << endl;    

        if(Serie.size() > 1){
            for(int i = 0; i < (Serie.size() - 1); i++)
            {
                Difference.emplace_back(Serie[i] - Serie[i +1]);
            }
        }else{
            cout << "Is not possible to perform the Difference" << endl;
        }
        
        cout << "Vector of differences" << endl;
        for (double i: Difference)
        {
            cout << i << endl;
        }

    }
    return 0;
}