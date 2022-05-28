#include <iostream>
#include <string>

using namespace std;

/*
 int myNum = 9;                 integer, whole number
 float myFloatNum = 5.99;       floating point number
 double myDoubleNum = 8.99;     floating point number
 char myLetter = 'A';           character
bool myBool = false;            boolean
 string myText = "Hello World"; string
 */

int main() { //function
    cout << "Hello World! \n"; /* multiple line comment
    even down here
    and here
    */
    // << "I am learning cpp\n\n";
    //cout << "I love my hunny bunny!\n\n";
    //cout << "Let's see if this worked.\n";//cout is an object used with operator such as <<
    //return 0; //return 0; ends main function //every cpp statement ends ith
 /* int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
*/
int myAge = 28;
    //cout << "I am " << myAge << " years old.\n";
/*
int x;
cout <<  "How old are you?";
cin >> x;
cout << "You are " << x << " years old."; */

/*
string hi = "hi";
string greeting = "Hello";
if (cin)"hi";
else (cin); "hi";
*/

string greeting = "Hello";
cout << greeting << "\n";


cout << "A bit of math \n";
int sum1 = 50+38;
int sum2 = 22+31;
int sum3 = 33+31;
cout << sum1 << "\n";
cout << sum1+sum2 << "\n";

string firstName = "Edward";
string lastName = "Davis";
string fullName = firstName+ " " +lastName;//firstName.append(lastName);
cout << fullName << "\n";
cout << "The length of the full name is: " << fullName.length()-1 << "\n";

string myString = "Hello";
cout << myString[0] << "\n";

string fullName = "Edward Davis";
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;





/*
int x,y;
int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x+y;
    cout << "Sum is: " << sum;

/*int x = 5;
int y =6;
int sum = x + y;
cout << sum;
*/

return 0;
}
