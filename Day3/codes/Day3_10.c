#include<stdio.h> 

int main( )
{
    //for loop 
    // int i; 
    // for(i = 1 ; i<=5 ; i++)
    //     printf("%d",i); //1 2 3 4 5    
    // printf("outside the loop %d\n",i); // 6 

    /*
            for(step1 ; step2 ; step4 )
                   step3
            step1 is exexuted only once        
    */  
    // int i=1; 
    // for( ; i<=5 ; i++)
    //     printf("%d",i); //1 2 3 4 5    
    // printf("\n outside the loop %d\n",i); // 6   

    // int i=1; 
    // for( ; i<=5 ; )
    //     printf("%d",i++); //1 2 3 4 5    
    // printf("\n outside the loop %d\n",i); // 6   
    
    // int i=1; 
    // for( ;  ; )
    //     printf("%d",i++); 
    // printf("\n outside the loop %d\n",i); 

    int i; 
    for(i=1;i<10;i++); 
    printf("%d",i); 
    
    return 0; 
}