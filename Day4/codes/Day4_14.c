#include<stdio.h>
int num2 = 30;  // program scope  
static int num1 = 20;// file scope  
int main()
{
    //block scope 
    static int num = 10; // data section ( before main is called ) 
    return 0;
}

void fun( )
{
    //printf("%d ",num); // NOT OK  
    printf("%d ",num1); // OK 
}

/*

   int num1; //prog scope
   static int num2;//file scope 
    main.c                          f1.c                    f2.c 

*/