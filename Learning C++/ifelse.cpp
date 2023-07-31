#include <iostream>
using namespace std;
int main()

{
int number;

cout<<"Enter yours marks:";   //Suppose total marks are hundered.
cin>>number;

if (number>100 || number<1)    //using OR operator in b/w two conditions
{cout<<"Invalid number, Kindly Enter agian.";} 

else if (number>=80)
{cout<<"Congratulations,You are Pass.";}

else{ cout<<"Sorry,You are fail.";}

return 0;
}