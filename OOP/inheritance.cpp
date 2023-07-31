#include <iostream>
using namespace std;

class Employee     //Parent class
{
public:
    string Name;
    string Company;
    int Salary;


void introduceyouself()
{
 cout << "Hi my name is " << Name << " I work in " << Company << " & My current salary is " << Salary << endl;
    };

Employee (string name, string company, int salary) 
{
Name=name;
Company=company;
Salary=salary;
} 
   
};

class Developer: public Employee    //1st child class // (Using public kw here will help us accessing all
{                                                     //  methods of parent class by using developer's object)
                          //OR (Inheritance above is private by defualt we will make it public)
public:
string FavPL;
void coding()
{
cout<<"Hi my name is " << Name << " I work in " << Company << " & My current salary is " << Salary<<endl<<
    " & I love doing coding everytime and my favourite PL is "<<FavPL <<"."<< endl;;
};
Developer (string name, string company, int salary,string favPL):Employee(name,company,salary)
   {FavPL=favPL;}

}; 

class Doctor : public Employee        //2nd child class
{
public:
string FavSubject;
void study()
{
cout<<"Hi my name is " << Name << " I work in " << Company << " & My current salary is " << Salary<<endl<<
" Bty I am a surgeon and my favourite subject for studies till now is "<<FavSubject <<"."<<  endl;;
};
Doctor (string name, string company, int salary,string favsubject):Employee(name,company,salary)  //Constructor 
{FavSubject=favsubject;} 

};

int main()

{
Developer dev=Developer("Ammar","google",122222,"C++"); //successfully constructed dev object
Doctor doc=Doctor("Moiz","Hospital",1231233,"Anatomy"); //successfully constructed doc object
dev.coding();
doc.study();

  
}