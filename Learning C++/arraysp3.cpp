// 1 Dimensional Array (Storing marks of 5 students & then printing it out).

//1D Array (It is used to represent a list)

#include <iostream>
using namespace std;
int main()

{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of the " << i << "th student:" << endl;
        cin >> marks[i]; // Here Array will store the marks 0f 5 students & using it is better then using all
    }                    // index from 0 to 4 i.e marks[0].....marks[4].

    for (int i = 0; i < 5; i++)
    {
        cout << "Marks of the " << i << "th student:" << marks[i] << endl;
    }
    return 0;
}