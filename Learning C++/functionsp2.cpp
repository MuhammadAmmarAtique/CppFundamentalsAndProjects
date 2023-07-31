#include <iostream>
using namespace std;

float difference (float a,float b);      //function declaration (user defined function)

int main () //main funtion
{
float a,b;

cout<<"Enter 1st no."<<endl;
cin>>a;
cout<<"Enter 2nd no."<<endl;
cin>>b;

cout<< difference(a,b);                     //function call (so that user defined function can work)
return 0;

}
float difference (float a,float b)         //function definition (what will function do ?)
{
float c; 
c=a-b;                              //Body of function definition
return c;
} 