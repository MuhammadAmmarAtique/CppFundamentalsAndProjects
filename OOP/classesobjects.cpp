#include <iostream>
using namespace std;

class Employee {
    public:
   string Name;
   string company;             // Data Members/Attributes
   int Age;

   void introduceyourself()      // Member Functions/Behaviour
   {
    cout<<"Hello my name is "<<Name<<endl;
    cout<<"Hello my company is "<<company<<endl;
    cout<<"Hello my Age is "<<Age<<endl<<endl;
   };
   
};
int main ()

{
   
   Employee employee1;                        //OR Employee employee1={"Ammar","Google",25};
   employee1.Name="Ammar";
   employee1.company="Google";           
   employee1.Age=25; 
   employee1.introduceyourself();

   Employee employee2;
   employee2.Name="Rafeh";
   employee2.company="Google";
   employee2.Age=27; 
   employee2.introduceyourself();

    return 0;
}