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
        cout << "Please enter a score and we will output the Names that match with this score" << endl;
        cin >> score;
        int i = 0;
        auto element = find(Score.begin(), Score.end(), score);
        while (element != Score.end()){
            i++;
            auto index = element - Score.begin();
            cout << Names[index] << '\t' << Score[index] << endl;
            element = find(element + 1, Score.end(), score);
        }
        if(i <= 0){
            cout << "Score not found" << endl;
        }     
    }
}