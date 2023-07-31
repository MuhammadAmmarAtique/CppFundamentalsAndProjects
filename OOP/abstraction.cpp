#include <iostream>
using namespace std;

class AbstractEmployee         //Abstract class or a Contrarct
{
virtual void askforpromotion()=0;    //pure virtual function/ Abstract function (***Complex part***)
                                     //Which ever class signs this contract he must has to use this function.
};

class Employee:AbstractEmployee     //Employee class is signing that contract
{

public:
string name;
string company;
int age;

void introduceyourself ()
{cout<<"Hello my Name is "<<name<<endl;}

void askforpromotion()      //Using or Calling that method because its a rule.
{
if (age>30)
cout<<name<<"congratulations you are promorted"<<endl;
else 
cout<<name<<" we are sorry"<<endl;
};

} ;

int main ()
{
Employee employee1;
employee1.name="Ammar";
employee1.company="Google"; 
employee1.age=35;              

Employee employee2;
employee2.name="Rafeh";
employee2.company="Microsoft"; 
employee2.age=21;              

employee1.askforpromotion();     //Here askforpromotion is (***Simple part***) that will be used by another 
employee2.askforpromotion();     //programmer when we give him access to our code.
}
