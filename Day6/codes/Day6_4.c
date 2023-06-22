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
    for( index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]); 
    
    //The array name is treated as address of 0th element in any runtime expression
    //name of array represents the base address 

    printf("\n\n"); 
    //printf("%u ",&arr[0]); //100 
    //printf("%u ",&arr); //100 
    //printf("%u ",arr); //100 
    
    //printf("%u ",arr+0); //100 

    //printf("%u ",arr + 1);//104 
    /*
            100 + 1 
            100 + 1 * 4 
            100 + 4 
            104 

    */
    //printf("%u ",arr + 2); //108 
    /*
            arr + 2
            100 + 2 * 4
            100 + 8 
            108      
    */

    //printf("%d ",*(arr + 0) ); //1 
    /*
            *(arr + 0 )
            *(100 + 0)
            *(100 + 0 * 4)
            *(100)
            valueat(100)
            1 
    */ 
     //printf("%d ",*(arr + 1) ); //2 
     /*
            *(arr + 1 )
            *(100 + 1 * 4)
            *(100 + 4 )
            *(104)
            valueat(104)
            2 
     */
     printf("%d ",*(0 + arr) ); //1
     printf("%d ",*(1 + arr) ); //2 

    return 0;

}
