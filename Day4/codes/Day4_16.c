#include<stdio.h> 
//register int x1; // NOT OK 
int main( )
{
    register int a;   // cpu memory  ( fast accessible )(if not init it will contain garbage)
    int x; // RAM => process => stack 
    {
        register int x = 100; 
        printf("%d ",x); //100 
    } 
    int y; // local variable 
    //printf("\n %u ",&y); // OK 
    register int z; 
    //printf("\n %u ",&z); // NOT OK 
    
    //int m;
    //register int *ptr = &m;  
    
    //register int  p; 
    //int *ptr1 = &p; // NOT OK  
    return 0; 
}