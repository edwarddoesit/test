#include <iostream>
#include <cmath>
using namespace std;

int main() {
/*
abs(x) 	Returns the absolute value of x
acos(x) 	Returns the arccosine of x
asin(x) 	Returns the arcsine of x
atan(x) 	Returns the arctangent of x
cbrt(x) 	Returns the cube root of x
ceil(x) 	Returns the value of x rounded up to its nearest integer
cos(x) 	Returns the cosine of x
cosh(x) 	Returns the hyperbolic cosine of x
exp(x) 	Returns the value of Ex
expm1(x) 	Returns ex -1
fabs(x) 	Returns the absolute value of a floating x
fdim(x, y) 	Returns the positive difference between x and y
floor(x) 	Returns the value of x rounded down to its nearest integer
hypot(x, y) 	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z) 	Returns x*y+z without losing precision
fmax(x, y) 	Returns the highest value of a floating x and y
fmin(x, y) 	Returns the lowest value of a floating x and y
fmod(x, y) 	Returns the floating point remainder of x/y
pow(x, y) 	Returns the value of x to the power of y
sin(x) 	Returns the sine of x (x is in radians)
sinh(x) 	Returns the hyperbolic sine of a double value
tan(x) 	Returns the tangent of an angle
tanh(x) 	Returns the hyperbolic tangent of a double value
*/

//int x=10;
//int y=20;
//int z=x+y; //z will be 30

string x="10";
string y="20";
string z=x+y; //z will be 1020
cout << z << endl;

cout << abs (5) << endl;
cout << hypot(366,231) << endl;
cout << pow (144,3) << endl;
//int x = 10;
//int y = 9;
cout << (x > y) << endl;
cout << (7 > 9) << endl;
cout << (x > y);


return 0;
}
