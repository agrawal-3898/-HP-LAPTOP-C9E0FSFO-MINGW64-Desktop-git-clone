#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 20; 
    int res; 

    int *ptr1 = &num1; 
    int *ptr2 = &num2; 

    // res = ptr1 + ptr2; // NOT OK 
    // res = ptr1 * ptr2; // NOT OK
    // res = ptr1 / ptr2; // NOT OK
    // res = ptr1 % ptr2; // NOT OK     
       
    //res = ptr1 - ptr2; // OK 

    res = *ptr1 + *ptr2; // OK 
    //      10  +  20 
    printf("%d ",res); //30 
    return 0;
}
