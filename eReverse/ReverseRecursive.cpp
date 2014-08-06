#include <iostream>
#include <string>
using namespace std;

// function prototype
void Reverse(string text);

int main()
{
    string txt1="Hello C++!";
    cout <<"";
    Reverse(txt1);
    cout<<endl;
    return 0;
}
void Reverse(string text)
{
    if(text == "") // the base case
    {
        return;
    }
    else // the recursive step
    {
        Reverse(text.substr(1));
        cout<<text.at(0);
    }
}