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

void work()      //This function will behave differently in different situations & i.e called as Polymorphism.
{cout<<Name<<" is doing its work with full potential"<<endl;};    
 
};

class Developer: public Employee    //1st child class
{
public:
string FavPL;
void coding()
{
cout<<"Hi my name is " << Name << " I work in " << Company << " & My current salary is " << Salary<<endl<<
    " & I love doing coding everytime and my favourite PL is "<<FavPL <<"."<< endl;;
};
Developer (string name, string company, int salary,string favPL):Employee(name,company,salary)
   {FavPL=favPL;}

void work()
{cout<<Name<<" is writting its code with full potential"<<endl;};    


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
Doctor (string name, string company, int salary,string favsubject):Employee(name,company,salary)   
{FavSubject=favsubject;} 

void work()
{cout<<Name<<" is doing its surgery with full potential"<<endl;};  
};

int main()

{

Developer dev=Developer("Ammar","google",122222,"C++"); //successfully constructed dev object
Doctor doc=Doctor("Moiz","Hospital",1231233,"Anatomy"); //successfully constructed doc object

dev.work();
doc.work();

}