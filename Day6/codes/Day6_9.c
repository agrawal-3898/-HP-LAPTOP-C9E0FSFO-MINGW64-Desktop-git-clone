#include<stdio.h> 
//int arr[5]; //0 

// arr[i] ==========> *(arr + i)
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

    //int *ptr1 = &arr[4];// 116  
    //int *ptr2 = &arr[0];// 100 
    //int res = ptr1 - ptr2;  
    /*
            ptr1 – ptr2 =>
                     (ptr1 – ptr2) / scale factor of ptr1
                     (116 – 100) / 4
                       16 / 4 
                         4 



    */
    //printf("\n %d ",res); 
    printf("\n"); 
    printf("arr = %u ",arr); // 100 
    //printf("%u ",arr+1); // 104
    printf("&arr + 1 = %u ",&arr + 1); //120 
    /*
            &arr + 1 
            100 + 1
            100 + 1 * 20 
            100 + 20 
            120 
    */
    return 0;

}
/*
    &num1 = 104;  
    &num2 = 100; 
    int num1 = 1; 
    int num2 = 2; 
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 
    int res = ptr1 - ptr2; 

        ptr1  - ptr2 
                =>  (ptr1  - ptr2) / scale factor of ptr1
                =>  ( 104 - 100 ) / 4 
                =>   4/4 
                =>   1    



*/