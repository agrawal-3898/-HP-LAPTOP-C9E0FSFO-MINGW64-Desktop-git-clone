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

    printf("\n\n"); 
    
    int *ptr = arr; // pointer to 1D array 
    // pointer notation 
    // printf("%u ",ptr + 0); // 100 
    // printf("%u ",*(ptr + 0) ); // 1
    // printf("%u ",*(0 + ptr) ); // 1
    // printf("%u ",*(ptr + 1 - 1) ); // 1 
    
    //array notation 
    // printf("%d ",ptr[0]);
    // printf("%d ",0[ptr]);
    // printf("%d ",ptr[1-1]);

    /*
        array notation                 pointer notation 
            ptr[0]          =====>    *(ptr + 0 )
            ptr[1]          =====>    *(ptr + 1 ) 
    */
    //printf("%d ",*ptr + 10); //1 + 10 => 11 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            1 
            
    */
    printf("%d ",ptr[-1]); // Garbage 
    /*  
                ptr[-1]
                *(ptr + -1);
                *(ptr - 1); 
                *(100 - 1)
                *(100 - 1 * 4)
                *(100 - 4)
                valueat(96)
                Garbage 
    */
    return 0;

}
