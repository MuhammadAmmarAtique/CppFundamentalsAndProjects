#include <iostream>

using namespace std;

int main()

{
int a,b,c;
a=5,b=1,c=71;

a=(b>c)?b:c;      //Conditional operator
cout<<a<<endl;



int d=3;
if (d<5)
{
    cout<<"yes d is less then five i.e: "<<!false<<" and 1 means correct."<<endl;    //Not operator
}



int f,i;
cout<<"Enter value of f:";
cin>>f;

cout<<"Enter value of i:";
cin>>i;

if (f!=i)             //Not equal to operator
    {
        cout<<"not equal"<<endl;
    }
else{cout<<"equal";}    


int g,h;
cout<<"enter g value"<<endl;
cin>>g;
cout<<"enter h value"<<endl;
cin>>h;

if (g==h)     //Equal to operator (does comparison on both sides)
{
   cout<<"both are same"<<endl;
}
else 
{
    cout<<"not same";
}
   




return 0;

}