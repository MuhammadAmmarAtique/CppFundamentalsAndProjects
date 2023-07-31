// 2 Dimensional Array (Definning 2D array & Accessing it's element).

#include <iostream>
using namespace std;
int main()

{                                                          //    0,1,2 [3 columns]
    int arr2d[2][3]={ {7,8,9},                             // 0 {7,8,9},  
                      {0,1,2}};                            // 1 {0,1,2}        //[2 rows]
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)                           //Nested loop
        {
            cout<<"Value at "<<i<<","<<j<<" is:"<<arr2d[i][j]<<endl; 
            
                                                          //arr2d[i][j] represents the element of 
                                                          //the two-dimensional array arr2d at row i and column j.
        }
       
        
    }
    
    return 0;
}