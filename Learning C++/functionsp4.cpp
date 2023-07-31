#include <iostream>
using namespace std;

void abc(void)                          //first function
{
    cout<<"Hello from abc function"<<endl;
}

void xyz(void)                         //second function
{
    cout<<"Hello from xyz function"<<endl;
    abc();                             //calling 1st function in second function
}

int main ()

{
     
    xyz();                          //calling second function in main function

    return 0;
}

