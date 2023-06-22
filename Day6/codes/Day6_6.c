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
    
    //printf("%d ",arr[-1]); //garbage 
    /*
            arr[-1]
            *(arr + -1)
            *(arr - 1)
            *(100 - 1)
            *(100 - 1 * 4)
            *(100  - 4 )
            *(96)
            valueat(96)
            garbage 

    */
    //printf("%d ",*arr + 10); //1 + 10 => 11 
    /*
            *arr
            valueat(arr)
            valueat(100)
            1 
    */
    //printf("%d ",arr[0]++);//1  
    //printf("%d ",arr[0]);//2   

    printf("%d ",++arr[0]);//2
    printf("%d ",arr[0]);//2 
    return 0;

}
