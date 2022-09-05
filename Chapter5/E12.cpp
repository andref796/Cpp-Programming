#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;
vector<int> getRandVector(){
    vector <int> RandVector;
    int num = 0;
    srand(time(0));
    
    for(;RandVector.size() != 4;){
        num = rand() % 9;
        if(std::find(RandVector.begin(), RandVector.end(), num) == RandVector.end()){
            RandVector.emplace_back(num);
        }
        else
            continue;
    }
    return RandVector;
}

vector<int> getUserNumber(){
    vector <int> UserNumber;
    int num;
    cout << "Enter 4 digits separated by a space" << endl;
    for(;UserNumber.size() != 4;)
    {
        cin >> num;
        if(cin.fail()){
            cout << "Enter a valid integer" << endl;
            cin.clear();
            cin.ignore(256,'\n');   // ignore the line change
            continue;
        }
        if(num < 0 || num > 9){
            cout << "Enter a number between 0 and 9" << endl;
            continue;
        }
        if(std::find(UserNumber.begin(), UserNumber.end(), num) == UserNumber.end()){
            UserNumber.emplace_back(num);
        }
        else
        {
            cout << "Please type a different number" << endl;
            continue;
        }
            
    }
    return UserNumber;
}

bool compareVectors(vector<int> &UserNumber, vector<int> &RandVector){
    return true;
}

int main (){
    getRandVector();
    getUserNumber();
    
    return 0;
}