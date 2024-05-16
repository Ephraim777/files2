#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    

    Counter temp1;
    cout << "Do you want to set a seed for the counter? Yes or no?\n";
    string answer;
    cin >> answer;
    if (answer == "Yes" || answer == "yes" || answer == "YES") {
        cout << "Enter the starting value for the counter: ";
        int num;
        cin >> num;
        Counter temp(num);
        temp1 = temp;
    }
    else {

        Counter temp;
        temp1 = temp;
    }
    Helper(temp1);
}