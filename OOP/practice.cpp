#include <iostream>
using namespace std;

class Employee
{
public:
string name;
string company;
int age;

// public:

// void setname(string na)
// {name=na;};
// string getname()
// {return name;};

// void setcompany(string ca)
// {company=ca;};
// string getcompany()
// {return company;};

// void setage(int aa)   
// {age=aa;};
// int getage()
// {return age;};


void introduceyourself()
{
    cout<<"Hi my name is "<<name<<",I work in "<<company<<" & my age is "<<age<<"."<<endl;
}

Employee(string n,string c,int a)
{
name=n;
company=c;
age=a;
};

void askforpromotion()
{if(age<25)
cout<<name<<"congrats you are promoted";
else
cout<<name<<"sorry";
};

void Hi()
{cout<<"HI I AM EMPLOYEE"<<endl ;}

};


class Teacher:public Employee
{
    public:
    string favsubject;
    void teaching()
    {cout<<name<<company<<age<<"Teacher loves teaching."<<endl;};

    Teacher(string n,string c,int a,string fs):Employee(n,c,a)
     {favsubject=fs;};


void Hi()
{cout<<"HI I AM teacher"<<endl ;}
};

class Programmer: public Employee
{
    public:
string favPL;
void coding()
{cout<<"Hi"<<name<<company<<age<<favPL;}

Programmer(string n,string c,int a,string pl):Employee(n,c,a)
{favPL=pl;};
void Hi()
{cout<<"HI I AM programmer"<<endl ;}

};

int main ()

{
Employee e1=Employee("employee","rr",251);
// e1.introduceyourself();
// e1.askforpromotion();

// Employee e2=Employee("Rafeh","Amazon",27);
// e2.introduceyourself();
// e2.askforpromotion();

Teacher t=Teacher("Rafeh","Amazon",27,"science");
// t.teaching();
// t.introduceyourself();
// t.askforpromotion();

Programmer pa=Programmer("Ammar","Google",21,"python");
// pa.coding();

e1.Hi();
t.Hi();
pa.Hi();

// Employee E1;
// E1.setname("Hamza");
// E1.setcompany("Qarshi");
// E1.setage(23);

// cout<<"Hi my name is "<<E1.getname()<<",I work in "<<E1.getcompany()<<" & my age is "<<E1.getage();

    return 0;
}