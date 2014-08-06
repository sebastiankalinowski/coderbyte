#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // declare variable
    string text="Hello C++";
    
    // built in C++ function to reverse an std::string
    reverse(text.begin(), text.end());
    
    cout <<text << endl;
    
    return 0;
}