//Calculator using if else statement (conditional statement)
//To use one operation at one time we can use conditional statements i.e (if-else or switch)

#include <iostream>
using namespace std;
int main ()

{
cout<<""<<endl;    
cout<<"Welcome :)"<<endl;

int a,b,number;
cout<<"Enter 1st no:"<<endl;
cin>>a;
cout<<"Enter 2nd no:"<<endl;
cin>>b;

cout<<"Now enter 1 for addition, 2 for substraction, 3 for multiplication & 4 for division."<<endl;
cin>>number;

if (number<1 || number>4)
{cout<<"Sorry invalid entry";}    //We have to use comparison operator "==" not assingment operator "="
                                //Otherwise it will assign next value to variable "number".
else if (number==1)     
{cout<<"Addition of two entered number is:"<<a+b;}

else if (number==2)
{cout<<"Substraction of two entered number is:"<<a-b;}

else if (number==3)
{cout<<"Multiplication of two entered number is:"<<a*b;}

else if (number==4)
{
if (b==0)
{cout<<"We cannot divide any number by zero.";}
else
{cout<<"Substraction of two entered number is:"<<(float)a/b<<endl;} }


return 0;
}