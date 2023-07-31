#include <iostream>
using namespace std;
int main ()

{
   int randomnumber =12;

cout<<"Welcome to Number guessing game :)"<<endl;
cout<<"You can enter a number between 1 to 100 & sysytem will give you hint to guess that number."<<endl;
cout<<"Now enter number:";

int a;
cin>>a;

if (a<1 || a>100)
{
    cout<<"Sorry Invalid entry."<<endl;
}
else if (a==randomnumber)
{
    cout<<"Congrats you found that number."<<endl;
}
else
{
while (a<randomnumber)
{
    cout<<"Your guess is lower than actual number,try again."<<endl;
    break;
}

while (a>randomnumber)
{
    cout<<"Your guess is higher than actual number,try again."<<endl;
    break;
}
}




    return 0;
}