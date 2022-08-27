#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;

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
    int bulls;
	int cows; 
	vector<int> UserNumber = {1,2,3,4};
    vector<int> RandVector = {1,2,5,4};
	try{
    	GetCowsBulls(UserNumber, RandVector, bulls, cows); 
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
