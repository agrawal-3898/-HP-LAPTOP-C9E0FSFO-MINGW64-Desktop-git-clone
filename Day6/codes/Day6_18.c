#include<stdio.h> 

int main( )
{
    const int num1 = 10;
    const int num2 = 30; 
    const int * const ptr = &num1;
    //const int const * const ptr = &num1;
//ptr is a constant pointer pointing to constant integer variable      
    printf("%d",num1); //10
    printf("%d",*ptr); //10

    //num1 = 20; // NOT OK 
    //ptr = &num2; // NOT OK 
    return 0; 
}