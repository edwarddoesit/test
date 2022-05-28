#include<iostream>
using namespace std;

int main()
{
    time_t now = time(0);
    int hour = localtime(&now)->tm_hour;

    if (hour < 12) {
        cout << "Good morning!" << endl <<endl;
    }
    
    else if (hour > 12 && hour < 17) {
        cout << "Good afternoon!" << endl <<endl;
    }

    else {
        cout << "Good evening!" << endl <<endl;
    }
    return 0;
}