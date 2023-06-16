#include<stdio.h> 
int main(  )
{
    printf("Program started ...\n");
    int ans;
    ans = 5 / 0; //runtime error (divide by zero )
    printf("ans = %d\n",ans); 
    printf("Program end...");   
    return 0;
}
/*
        Compiler Error 
        1.Program Compile => NO 
        2.Program Execution => NO 
        3.Success => NO  

        runtime Error 
        1.Program Compile=> Yes 
        2.Program Execution => Yes 
        3.Sucess => NO   



*/
