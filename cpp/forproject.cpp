#include<iostream>
using namespace std;

int main()
{
    //make the following cin a number (i <= 10) //accept an input
    //break; stops a loop
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
    
    
    //skips number 4
    for (int i = 0; i < 10; i++){
        if (i == 4){
            continue;
        }
        cout << i << "\n";
    }
}