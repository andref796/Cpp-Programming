#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    
    vector<double> distances;
    double total_sum = 0;
    double mean = 0;
    for(double distance; cin >> distance;)
        distances.push_back(distance);

    for(int i = 0; i < distances.size(); i++)
        total_sum += distances[i];

    mean = total_sum / distances.size();

    cout << "The total distance is: " << total_sum << '\n';

    sort(distances.begin(), distances.end());
    
    cout << "The great distance is: " << distances[distances.size()-1] << "\n The low distance is: " << distances[0] << "\n"; 
    cout << "The mean is: " << mean << '\n';

    return 0;
}