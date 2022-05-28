#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    /*
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::
    */

// Current date/time based on current system
time_t now = time(0);

tm* localtm = localtime(&now);

cout << asctime(localtm);

if (asctime(localtm)) < {
}
//cout << "The local date and time is: " << asctime(localtm) << endl;





/*
// Convert now to tm struct for UTC
tm* gmtm = gmtime(&now);
if (gmtm != NULL) {
cout << "The UTC date and time is: " << asctime(gmtm) << endl;
}
else {
cerr << "Failed to get the UTC date and time" << endl;
return EXIT_FAILURE;
}
*/
}
