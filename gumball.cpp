#include<iostream>
#include<ctime>
using namespace std;

int main(void){
    
        int iGumballs;
        int iUserguess;
        int iGuesses = 0;

        time_t now = time(0);
	    int hour = localtime(&now)->tm_hour;

	    if (hour < 12) {
		    cout << "Good morning!\n\n";
	    }

	    else if (hour > 12 && hour < 17) {
		    cout << "Good afternoon!\n\n";
	    }

	    else {
		    cout << "Good evening!\n\n";
	    }

        while (1){
        
        iGuesses = 0;

        srand(static_cast<unsigned int>(time(0)));
        iGumballs = rand()%10+1;
        cout << "\n\n" << "How many gumballs are in the jar?\n";
        do{
            cout << "\n" << "Enter your guess: ";
            cin >> iUserguess;

            if(iUserguess > iGumballs)
            {
                cout << "Too high!\n";
            }
            if(iUserguess < iGumballs)
            {
                cout << "Too low!" << "\n";
            }

            iGuesses ++;
        }
        
        while(iUserguess > iGumballs || iUserguess < iGumballs);
            cout << "\n" << "You guessed the right amount of gumballs!\n";
            cout << "You guessed " << iGuesses << " times!" << "\n\n";
            //while(cin.get() != '\n');
            cout << "Enter P to play again, or any key to quit: ";
            string response;
            cin >> response;

            if (response != "p" && response != "p"){
                return 0;
            }
    }
}