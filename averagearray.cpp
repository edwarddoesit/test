#include<iostream>
#include<ctime>
using namespace std;
int main(){

	while (1){
	
		int i, count, sum, inputArray[500];
		float average;

		cout << "Enter number of elements: ";
		cin >> count;
		cout << "Enter " << count << " elements\n\n";

		for(i = 0; i < count; i++){
			cin >> inputArray[i];
		}

		sum = 0;

		for(i = 0; i < count; i++){
			sum += inputArray[i];
		}

		average = (float)sum / count;
		cout << "Average = " << average << "\n\n";
		cout << "Press A to average again, or Q to quit: " << "\n\n";

        string response;
        cin >> response;

        if (response != "a" && response != "a"){
            return 0;
		}
    }
}