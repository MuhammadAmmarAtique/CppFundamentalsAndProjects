#include <iostream>
using namespace std;

class Employee {
public:
   string Name;
   string Company;             // Data Members/Attributes
   int Age;

void introduceyourself()      // Member Functions/Behaviour
   {
    cout<<"Hello my name is "<<Name<<endl;
    cout<<"Hello my company is "<<Company<<endl;
    cout<<"Hello my age is "<<Age<<endl<<endl;
   };
   
Employee (string name, string company, int age) //Defining our own constructor
{
Name=name;
Company=company;
Age=age;
} 
   
};
int main ()

{
   
   Employee employee1=Employee("Ammar","Google",25);   //Successfuly constructed employee1 object
   employee1.introduceyourself();

   Employee employee2=Employee("Rafeh","Google",27);   //Successfuly constructed employee2 object
   employee2.introduceyourself();

    return 0;
}