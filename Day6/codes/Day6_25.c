#include<stdio.h> 

int main( )
{
    //int a = 10 , b = 20; 
    //printf("%d %d",a,b); //10 20 
    
    int num = 10; 
    int *ptr = &num; 
    printf("%d %d",num,++*ptr);
    //              11  11 
    // calling convention 
    // CDECL 
    return 0; 
}
// compiler dependent question 
// printf("%d %d %d %d",i,i++,++i,i++);
// i = i++; 
// i++ + i++ + ++i