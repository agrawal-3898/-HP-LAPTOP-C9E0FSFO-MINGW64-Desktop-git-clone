#include<stdio.h> 

int main( )
{
    int a = 1; 
    // comma operator( , )
    //a = 1,2,3,44,55; //1 
    //a = (1,2,3); //3 

    a = ( (1,2,3),11); 
    //  (  3 ,11);
    //      11  
    
    printf("%d",a); 
    return 0; 
}