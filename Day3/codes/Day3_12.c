#include<stdio.h> 
int main( )
{
    // nested loop 
    int i =1 , j=1; 
    for(i = 1 ; i<=5 ; i++)//i=1,2,3
    {
        printf("for each i:%d",i); 
        for(j=1; j<=5 ; j++)//j=1 2 ... 5  
        {
            printf("        j:%d",j); 
        }
        printf("\n"); 
    }
    return 0; 
}
// there are 4 jump statments available in C 
// break , continue , goto , return 