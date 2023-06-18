#include<stdio.h> 

int main()
{
    //logical opr
    // && , || , ! => 0 or 1 
 //all non-zero values are considered as true (-ve)
 // 0 => false 

   // && ( logical AND)   
    // printf("%d ",22 && 11); //1 
    // //          T  &&  T => T 

    // printf("%d ",0 && 11); // 0 
    // //          F && T => F 

    // printf("%d ",33 && 0); // 0
    // //          T  && F => F  

    // printf("%d ",0 && 0); // 0
    // //          F && F => 0 
    
    // // Logical OR ( || )
    // printf("%d ",22 || 11); //1 
    // //           T  ||  T => T 

    // printf("%d ",0 || 11); // 1 
    // //          F  || T => T 

    // printf("%d ",33 || 0); // 1
    // //           T  || F =>T  

    // printf("%d ",0 || 0); // 0
    // //          F && F => 0 
    
    //!(logical NOT)
    //printf("%d ",!10); // 10=>T => !T=>F=>0 
    //printf("%d ",!-10); // 10=>T => !T=>F=>0 
    //printf("%d ",!!10); //!!T => !T=>F=>!F=>T=> 1 
    printf("%d ",!0); // F=>!F=>T=>1  
    return 0; 
}