#include<stdio.h> 
int main( )
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr; // pointer to pointer   
//pptr is a pointer which is storing address of int pointer 
//pptr is a pointer which is storing address of pointer to integer     
    
    //printf("%u ",&ptr); // 500 
    //printf("%u ",pptr); // 500 
    
    //printf("%u ",**pptr); //10 
    /*
            **pptr 
            valueat(valueat(pptr))
            valueat(valueat(500))
            valueat(100)
            10 
    */ 
    **pptr = 50;  
    printf("%d ",num); //50  
    printf("%d ",**pptr);//50  
    return 0; 
}
/*
        int a = 1; 
        int *p = &a; 
        int **pp = &p; 
        int ***ppp = &pp; 
*/