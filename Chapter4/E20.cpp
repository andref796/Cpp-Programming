#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){

    vector <string> Names;
    vector <int> Score;

    string name = "";
    int score = 1;

    cout << "Enter a name and a score separated with a space" << endl;

    while (name != "NoName" && score != 0){
        cin >> name >> score;
        Names.emplace_back(name);
        Score.emplace_back(score);
    }

    vector <string> NamesOrder = Names;
    sort(NamesOrder.begin(), NamesOrder.end());
    auto it = std::unique (NamesOrder.begin(), NamesOrder.end());
    
    if (!(it == NamesOrder.end())){
        cout << "There is a Duplicate Register" << endl;
        return 0;
    }
    
    while(true){
        cout << "Please enter a Name and we will output the score" << endl;
        cin >> name;
        auto element = find(Names.begin(), Names.end(), name);
        if(element != Names.end()){
            auto index = element - Names.begin();
            cout << Names[index] << '\t' << Score[index] << endl;
        }else{
            cout << "Name not found" << endl;
        }     
    }
}