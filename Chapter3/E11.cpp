#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){
    int pennies = 0; //1 cent
    int nickels = 0; //5 cent
    int dimes = 0; //10 cent
    int quarters = 0; //25 cent
    int half_dolars = 0; //50 cent
    int one_dolars = 0; //100 cent
    double total = 0;
    string identifier = " ";

    cout << "How Many pennies do you have?'\n";
    cin >> pennies;
    cout << "How Many nickels do you have?'\n";
    cin >> nickels;
    cout << "How Many dimes do you have?'\n";
    cin >> dimes;
    cout << "How Many quarters do you have?'\n";
    cin >> quarters;
    cout << "How Many half dolars do you have?'\n";
    cin >> half_dolars;
    cout << "How Many one dolars do you have?'\n";
    cin >> one_dolars;
    
    if(pennies > 1)
        identifier = "pennies";
    else
        identifier = "penny";
    cout << "You have " << pennies << " " + identifier << '\n';


    if(nickels > 1)
        identifier = "nickels";
    else
        identifier = "nickel";
    cout << "You have " << nickels << " " +  identifier << '\n';


    if(dimes > 1)
        identifier = "dimes";
    else
        identifier = "dime";
    cout << "You have " << dimes << " " +  identifier << '\n';


    if(quarters > 1)
        identifier = "quarters";
    else
        identifier = "quarter";
    cout << "You have " << quarters << " " +  identifier << '\n';


    if(half_dolars > 1)
        identifier = "half dolars";
    else
        identifier = "half dolar";
    cout << "You have " << half_dolars << " " +  identifier << '\n';


    if(one_dolars > 1)
        identifier = "one dolars";
    else
        identifier = "one dolar";
    cout << "You have " << one_dolars << " " +  identifier << '\n';

    total = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + half_dolars * 50 + one_dolars * 100;

    total /= 100;

    cout << "The value of all of your coins is $" << total << '\n'; 



    return 0;
}