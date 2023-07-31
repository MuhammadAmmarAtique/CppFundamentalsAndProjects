#include <iostream>
using namespace std;

int sum (int a,int b);   //function declaration (user defined function)

int main()               //main funtion(system defined function)
{
    int a,b;

cout<<"Enter 1st value:";    
cin>>a;
cout<<"Enter 2nd value:";  
cin>>b;

cout<<sum(a,b);           //function call (so that user defined function can work)

    return 0;
}

int sum (int a,int b)    //function definition (what will function do ?)
{
    int c;
    c=a+b;               //Body of function definition
    return c;
}