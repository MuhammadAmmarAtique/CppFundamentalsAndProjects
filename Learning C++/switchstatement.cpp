#include <iostream>
using namespace std;
int main()

{
    int age;
    cout << "Enter your age:";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "you are 18 years old";
        break; // Here using "break" is necessary otherwise,All other programs will execute too

    case 30:
        cout << "you are 30 years old";
        break;

    default:
        cout << "You are neither 18 nor 30 year old";
        break;
    }
}