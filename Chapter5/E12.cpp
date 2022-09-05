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
    cout << endl << endl << "Enter 4 digits separated by a space" << endl;
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

void GetCowsBulls(const vector<int> &UserNumber, const vector<int> &RandVector, int &bulls, int &cows)
{
	if(UserNumber.size() != RandVector.size())
		throw std::invalid_argument("The size of the Vectors must be the same");

	bulls = 0;
	cows = 0;
	for(int i = 0; i < UserNumber.size(); i++)
	{
		auto result = std::find(RandVector.begin(), RandVector.end(), UserNumber[i]);
		if(result != RandVector.end())
		{
			int index = result - RandVector.begin();
			if(i == index) bulls += 1;
			else cows += 1;
		}
		else 
		{
		}
	}
}

int main (){
	int bulls = 0;
    int cows = 0;
    vector <int> RandVector;
    vector <int> UserNumber;
    try{
        RandVector = getRandVector();
        while(true){
            UserNumber = getUserNumber();
            GetCowsBulls(UserNumber, RandVector, bulls, cows); 
            cout << "Bulls " << bulls << ", Cows " << cows << endl;
            if(bulls == 4) {
                cout << "Great you catch the number" << endl;
                RandVector = getRandVector();
            }
            else continue;
        }
	}
	catch (exception& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
	cout << "Bulls: " << bulls << endl;
	cout << "Cows: " << cows << endl;
    return 0;
}
