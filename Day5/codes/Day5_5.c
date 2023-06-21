#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; //referencing operation 
//ptr is a pointer to integer 
//ptr is a pointer storing address of a integer      
    //printf("%d ",num); //10 
    //printf("&num = %u\n",&num);//100 
    //printf("ptr = %u\n",ptr);//100  
    //printf("&ptr = %u",&ptr); //500 
    
    printf("*ptr = %d",*ptr); //10 //dereferencing 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            10 
    */ 
    return 0;
}
//It is not compatible with unsigned int
// int *ptr = 100; // NOT OK 