#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    
    int response = 0;
    int compare = 0;
    vector <int> curr_numbers;
    vector <int> new_numbers;

    for (int i = 1; i <= 100; i++)
        curr_numbers.push_back(i);
    // 
    for (int i = 0; i < 7; i++){

        if (curr_numbers.size() == 2){
            cout << "Final Question " << i + 1 << '\n';
            cout << "Your Number is: " << curr_numbers[0] << "?\n";               
            cin >> response;
            if(response)
                cout << "We find your number: " << curr_numbers[0] << "!!!!\n";
            else
                cout << "We find your number: " << curr_numbers[1] << "!!!!\n";
            break;
        }
        
        if (curr_numbers.size() == 1){
            cout << "Your Number is: " << curr_numbers[0] << "!!!\n";               
            break;
        }
        
        cout << "Question " << i + 1 << '\n';
        compare = curr_numbers.size()/2 ;
        cout << "Greather than " << curr_numbers[compare - 1] << "?\n";
        cin >> response;

        if (response == 1)
            new_numbers = {curr_numbers.begin() + compare , curr_numbers.end()};
        else
            new_numbers = {curr_numbers.begin(), curr_numbers.begin() + compare};

        curr_numbers.clear();
        curr_numbers = new_numbers;
        new_numbers.clear();
    }

    return 0;
}