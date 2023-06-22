#include<stdio.h> 
//int arr[5]; //0 

// arr[i] ==========> *(arr + i)
int main()
{
    //int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
     int arr[5] = {10,20,30,40,50}; //1D array ( init list )
   
    /*  
            array index starts from 0 to n-1 
        arr 

             10   20   30   40   50  
            [0]  [1]  [2]  [3]  [4] 
            100  104  108  112  116 

            arr[0] => 1 
            arr[3] => 4 
            arr[2] => 3 
    */
    int *ptr = arr;  
    
    //printf("%d ",*ptr); //10  
    printf("%d ",++*ptr); //11 
    //printf("%d ",arr[0]); //11  

    printf("%d ",*++ptr); //20 

    printf("%d ",*ptr++); //20 
    printf("%d ",*ptr); // 30 
    return 0;

}
// ++*ptr++
