//Temperature converter using switch statement
#include <iostream>
using namespace std;
int main ()

{
cout<<""<<endl;
cout<<"Welcome to Temperature Converter Tool:"<<endl;
cout<<"Press 1 to Convert C' to F' OR Press 2 to Convert F' to C':";

int a;
cin>>a;

int celcius,franheit;

switch (a)
{
case 1:
    cout<<"Enter 'C temperature:";
    cin>>celcius;
    cout<<"Now temperature in franheit is "<<(float)celcius*1.8+32;
    break;

case 2:
    cout<<"Enter 'F temperature:";
    cin>>franheit;
    cout<<"Now temperature in celcius is "<<(float)(franheit-32)*5/9;
    break;

default:
    cout<<"Sorry wrong entry.";
    break;
}










cout<<""<<endl;
    return 0;
}