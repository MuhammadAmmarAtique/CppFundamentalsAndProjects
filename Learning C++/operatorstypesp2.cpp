//Pre increment vs Post increment + Pre decrement vs Post decrement

#include <iostream>
using namespace std;


int main ()

{
 int a,b;
 a=2;
 b=++a;   //Pre increment (a=3,b=3)

 cout<<"Now the values of a & b after using pre increment operator is:"<<endl;
 cout<<a<<endl<<b<<endl;

 a=7;
 b=a++;  //Post increment (a=8,b=7)

 cout<<"Now the values of a & b after using post increment operator is:"<<endl;
 cout<<a<<endl<<b<<endl;

 a=10;
 b=--a;  //Pre decrement(a=9,b=9)

 cout<<"Now the values of a & b after using pre decrement operator is:"<<endl;
 cout<<a<<endl<<b<<endl;

 a=8;
 b=a--;  //Post increment (a=7,b=8)

 cout<<"Now the values of a & b after using post decrement operator is:"<<endl;
 cout<<a<<endl<<b<<endl;

    return 0;
}