#include<stdio.h> 
int main()
{
    // pointer arithmatic 

    int num = 10; 
    int *ptr = &num; 

    printf("%u ",ptr); //100 
    ptr = ptr + 1; 
    // ptr = ptr * 1; // NOT OK  
    // ptr = ptr / 1; // NOT OK 
    // ptr = ptr % 1; // NOT OK
    //ptr = ptr + 1.5; // NOT OK   
    /*
            ptr + n ===>  ptr + n * scale factor of ptr
            ptr + 1 
            ptr + 1 * scale factor of ptr 
            100 + 1 * 4
            100 + 4 
            104  
    */
    printf("%u ",ptr); //104
    ptr--; 
    /*
            ptr = ptr - 1 
                = 104 - 1 
                = 104 - 1 * 4
                = 104 - 4 
                = 100  

    */
    printf("\n %u ",ptr); //100 
    printf("%u ",*ptr); //10 
    return 0;
}
/*

        int *ptr 
        ptr + 10;
        ptr + 10 * 4; 
        ptr + 40 

        char *cptr; 
        cptr + 10; 
        cptr + 10 * 1 
        cptr + 10 

        float *fptr 
        fptr + 20; 
        fptr + 20 * 4 
        fptr + 80 

        double *dptr 
        dptr + 2 
        dptr + 2 * 8 
        dptr + 16  


        ptr + 1;  // pointer arithmatic 
        100 + 1 * 4 
        100 + 4 
        104 

        ****************************

        int a = 10; 
        int *ptr = &a; 
        *ptr + 1;  
         10 + 1 => 11 

*/