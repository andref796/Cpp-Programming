#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main (){
    
    int i = 1;
    int k = 0;
    string list[3] = {" "};
    int n = 3;
    string cur_list[n] = {" "};
    string new_list[n] = {" "};
    
    cout << "Ingrese tres apellidos\n";
    cin >> list[0] >> list[1] >> list[2];
    new_list[0] = list[0];
    cur_list[0] = list[0];
    
    while(i < n){
        if (list[i] >= cur_list[k]){
            std::copy(cur_list, cur_list + k, new_list);
            new_list[k] = list[i];
            std::copy(cur_list + k, cur_list + n, new_list + k + 1);
            std::copy(new_list, new_list + n, cur_list);
            k = 0;
            i++;
        }else{
            k++;
        }
    }
    cout << "La lista ordenada es: \n";
    cout << new_list[0] << " ," << new_list[1] << " ," << new_list[2] << '\n';
    return 0;
}