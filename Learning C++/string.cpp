#include <iostream>
#include <string>      //TO use functions of string

using namespace std;

int main()

{
string a="Ammar";    //Must use inverted commas during initilization.


cout<<"My name is"<<a<<endl;
cout<<"Length of my name is: "<<a.length()<<endl;   //length function

cout<<"Using substring function: "<<a.substr(0,5)<<endl;  //substring function (index starts from zero)
cout<<"Using 2nd substring function: "<<a.substr(2,4)<<endl; 

return 0;

}