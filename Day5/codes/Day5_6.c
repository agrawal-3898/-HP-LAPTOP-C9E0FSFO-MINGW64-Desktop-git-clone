#include<stdio.h> 

int main( ) 
{
    int num = 10; 
    int *ptr = &num;
    num = 20; 

    //printf("%d ",num ); //20  
    //printf("%d ",*ptr); //20 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            20 

    */
    *ptr = 50; 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
                    ==> 50 
    */
    //printf("%d ",num); // 50 
    //printf("%d ",*ptr);// 50  
    // *ptr => valueat(ptr) => valueat(100) => 50 

    *ptr = 200; 
    //printf("%d ",num); // 200 
    //printf("%d ",*ptr);//  200   
    
    return 0; 
}
/*
    int *ptr;
    int num = 10; 
    ptr = &num;     
*/