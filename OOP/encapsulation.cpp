#include <iostream>
using namespace std;

class Employee
{private:
string Name;
string Company;     //Encapsulated
int Age;

public:
void setName(string name)
{Name=name;};                   //Setters & Getters
string getName()
{return Name;};

void setCompany(string company)
{Company=company;};
string getCompany()
{return Company;};

void setAge(int age)
{Age=age;};
int getAge()
{return Age;};

};

int main ()
{

Employee employee1;

 employee1.setName("Ammar");
 employee1.setAge(21);
 employee1.setCompany("Google");
 cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old & He works in "<<employee1.getCompany();

    return 0;
}