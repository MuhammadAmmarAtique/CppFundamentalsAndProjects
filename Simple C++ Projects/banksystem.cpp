//Simple Bank System using Structure

#include <iostream>
using namespace std;

struct banksystem       //Using structure i.e user defined datatype
{   
    int Balance;
    int deposit;
    int withdraw;
};

int main ()

{
cout<<""<<endl;    
cout<<"Welcome to Ammar's bank :)"<<endl;

banksystem bs;     //bs is a variables whose datatype is banksystem (structure)
bs.Balance=500;   //When we open our bank account,its bank policy that we should have minimum balance of 500.

int a;
cout<<"To check your available balance press 1,For cash deposit press 2, For cash withdraw press 3:";
cin>>a;

if(a<1 || a>3)
{cout<<"Sorry wrong entry."<<endl;}

else if (a==1)
{
    cout<<"Your Available balance is:-"<<bs.Balance;
}
else if (a==2)
{   
    cout<<"Enter amount you want to deposit:";
    cin>>bs.deposit;
    bs.Balance=bs.Balance+bs.deposit;
    cout<<"Now your balance is:"<<bs.Balance<<endl;
}
else if(a==3)
{
    cout<<"Enter amount you want to withdraw:";
    cin>>bs.withdraw;
    if (bs.withdraw>bs.Balance)
    {
        cout<<"Sorry you don't have enough cash"<<endl;
    }
    else
    {bs.withdraw=bs.Balance-bs.withdraw;
    cout<<"Now your balance is:"<<bs.withdraw<<endl;}
}

{cout<<"Thanks for using Ammar's Bank :)";

    return 0;
}
}