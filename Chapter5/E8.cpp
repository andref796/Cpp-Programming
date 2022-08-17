#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
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
        Serie.emplace_back(stoi(number));
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
            sum += Serie[i];
        }
        cout << "The sum of " << size << " elements is " << sum << endl;    
    }
    return 0;
}