#include<stdio.h> 
//int arr[5]; //0 
int main()
{
    //int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4 , num5 = 5;  
     int arr[5] = {1,2,3,4,5}; //1D array ( init list )
     //printf("%d ",sizeof(arr));// 5 * 4 => 20 
     //printf("%d ",sizeof(arr[0])); // 4 * 1 => 4  
     //printf("%d ",sizeof(arr[-1])); // 4 * 1 => 4  
    //int arr[5] = {1,2,3}; //partial init 
    //int arr[5] = {1}; //partial init 
    //int arr[5]; //Garbage  
    //int arr[];  // NOT OK  
    //int arr[] = {1,2,3,4,5}; //OK 
    //int arr[5] = {1,2,3,4,5,6,7,8};  

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
    // printf("%d ",arr[0]); //1 
    // printf("%d ",arr[3]); //4
    // printf("%d ",arr[2]); //3  
    
    // int index; 
    // for( index = 0 ; index < 5 ; index++)
    //         printf("%d ",arr[index]); 
    
    return 0;
}
