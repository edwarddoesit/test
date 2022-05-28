#include<iostream>
#include<ctime>
using namespace std;

int main(){
		//1,3,5,1,1,5,4,5,5,5,5,5,5,5,5,4,2
		//0,2,4,0,0,4,3,4,4,4,4,4,4,4,4,3,2
	while (1){
		/*
		int A=4;
		int B=3;
		int C=2;
		int D=1;
		int F=0;
		*/
		int i, count, sum, inputArray[500];
		float average;

		cout << "Enter number of elements\n\n";
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

