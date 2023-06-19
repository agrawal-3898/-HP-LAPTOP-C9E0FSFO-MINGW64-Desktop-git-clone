#include<stdio.h> 
int main( )
{
    //goto 
    int rank; 

    start:
    printf("Enter the rank "); 
    scanf("%d",&rank); 

    if(rank>=1 && rank<=5)
          goto label;    
    else 
          goto start;  
    
    label: 
    printf("Excellent rank all the best!!!"); 







    return 0; 
}
