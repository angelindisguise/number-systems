//used for third party libraries to execute statements that use keywords
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//main function(entry point of a C++ program, executes statements within it in order)
int main()
{
    int number1 = 15; //decimal
    int number2 = 017; //octal
    int number3 = 0x0f; //hexadecimal
    int number4 = 0b00001111; //binary
    string name;

    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    cout << "number3: " << number3 << endl;
    cout << "number4: " << number4 << endl;

    cout << "Whats your name? ";
    //cin >> name;
    getline (cin, name);
    cout << "Hello " << name << ", welcome to my C++ github repo";
    
    return 0;
}
