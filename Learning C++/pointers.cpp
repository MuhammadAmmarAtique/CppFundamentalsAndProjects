#include <iostream>

using namespace std;

int main()

{
int a=34;
int * ptra;                //ptra is a pointer.
ptra= &a;                  //&a means "address of a", Here pointer will store address of a.

cout<<"The value of a is: "<<a<<endl;
cout<<"The value of a is: "<<* ptra<<endl;    //* ptra means values stores at adress of a. 
cout<<"The address of a is: "<<ptra<<endl;
cout<<"The address of a is: "<<&a<<endl;

float b=89.5;
float * ptrb;
ptrb=&b;

cout<<"The value of b is: "<<b<<endl;
cout<<"The value of b is: "<<* ptrb<<endl;
cout<<"The value of b is: "<<ptrb<<endl;
cout<<"The value of b is: "<<&b<<endl;

return 0;

}