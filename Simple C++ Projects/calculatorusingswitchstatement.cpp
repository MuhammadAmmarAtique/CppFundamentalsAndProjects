//Calculator using switch statement (conditional statement)

#include <iostream>
using namespace std;
int main ()

{
cout<<""<<endl;
cout<<"Welcome"<<endl;

int a,b,number;
cout<<"Enter 1st number"<<endl;
cin>>a;
cout<<"Enter 2nd number"<<endl;
cin>>b;
cout<<"Enter 1 for addition, 2 for substraction, 3 for multiplication, 4 for division"<<endl;
cin>>number;

switch (number)
{
case 1:
cout<<"Addition of two entered number is:"<<a+b<<endl;
    break;

case 2:
cout<<"Substraction of two entered number is:"<<a-b<<endl;
    break;

case 3:
cout<<"Multiplication of two entered number is:"<<a*b<<endl;
    break;

case 4:
if (b==0)
{cout<<"We cannot divide any number by zero.";}
else
{cout<<"Substraction of two entered number is:"<<(float)a/b<<endl;}
    break;

default:
cout<<"Sorry wrong entry"<<endl;
    break;
}



    return 0;
}