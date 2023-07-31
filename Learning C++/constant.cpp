#include <iostream>

using namespace std;

int main()

{
   int a=5;
   int b=4;

   a=3;         //Reassigning variable value
   cout<<a<<endl;     //now answer will be 3 not 5;


   int const t=10; 

  // t=11; //Here we cannot change the value of t because it is a "Constant"
   cout<<t;

return 0;

}