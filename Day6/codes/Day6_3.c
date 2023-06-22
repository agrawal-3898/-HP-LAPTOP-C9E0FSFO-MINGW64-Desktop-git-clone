#include<stdio.h> 
//int arr[5]; //0 
int main()
{
    //int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
     int arr[5] = {1,2,3,4,5}; //1D array ( init list )
   
    /*  
            array index starts from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4] 
            100  104  108  112  116 

            arr[0] => 1 
            arr[3] => 4 
            arr[2] => 3 
    */
    
     int index; 
    //arr[0] = 111; 
    //printf("%d ",arr[0]); //111  
    
    //printf("%d ",arr[1-1]); //arr[0]=> 1  
    //printf("%d ",arr[1.5]);// NOT OK  

    //printf("%d ",0[arr]);  // arr[0] => 1  

    printf("%d ",arr[ arr[1] ]);  // arr[0] => 1
    //           arr[    2     ]
    //                  3          
    return 0;
}
