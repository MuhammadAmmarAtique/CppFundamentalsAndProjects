#include <iostream>
using namespace std;
int main ()

{//Check if you are pass or not
//Total marks 100.

int a;
cout<<"Enter your marks:"<<endl;
cin>>a;

if (a<1 || a>100)
{cout<<"sorry, invalid entry."<<endl;}

else if (a>=50)
{cout<<"congrats you are pass."<<endl;}

else if (a<50)
{cout<<"sorry,you are fail."<<endl;}





    return 0;
}