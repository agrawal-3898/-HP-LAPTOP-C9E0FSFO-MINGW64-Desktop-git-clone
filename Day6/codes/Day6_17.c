#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 = 30; 
    int * const ptr = &num;  
    //ptr is a constant pointer pointing to non-constant integer variable     
    
    printf("%d ",*ptr); //10 
    *ptr = 20; 
    printf("%d ",*ptr); //20 
    printf("%d ",num); //20  

    //ptr = &num2; // NOT OK 
    
    return 0; 
}