//Calculator using operators and simple statements.
//Drawback is that we cannot perform one operation at one time.

#include <iostream>
using namespace std;
int main ()

{
cout<<"Welcome :) "<<endl;

int a,b;
cout<<"Enter 1st number:"<<endl;
cin>>a;
cout<<"Enter 2nd number:"<<endl;
cin>>b;

cout<<"Addition of two entered number is:";
cout<<a+b<<endl;

cout<<"Substraction of two entered number is:";
cout<<a-b<<endl;

cout<<"Multiplication of two entered number is:";
cout<<a*b<<endl;

cout<<"Divison of two entered number is:";
cout<<(float)a/b<<endl;

return 0;
}