//Temperature Converter (C' to F' & vice versa) using Conditional statement

#include <iostream>
using namespace std;
int main ()

{
cout<<""<<endl;    
cout<<"Welcome to Temperature converter Tool:"<<endl;
cout<<"Press 1 to Convert C' to F' OR Press 2 to Convert F' to C':";

int a;
cin>>a;

int x,y;
if (a==1)
{cout<<"Enter C' value:"<<endl;
 cin>>x;}

if (a==2)
{cout<<"Enter F' value:"<<endl;
 cin>>y;}

if (a<1 || a>2)
{
    cout<<"Sorry wrong entry."<<endl;
}

else if (a==1)
{   
    cout<<"Now temperatue in F' is:";
    cout<<(float)x*1.8+32<<endl;
}

else if (a==2)

{
    cout<<"Now temperatue in C' is:";
    cout<<(float)(y-32)*5/9<<endl;  
}

cout<<"Thanks for using our tool"<<endl;
cout<<""<<endl; 

    return 0;
}