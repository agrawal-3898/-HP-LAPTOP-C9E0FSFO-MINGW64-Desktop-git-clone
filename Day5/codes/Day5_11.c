#include<stdio.h> 
int main()
{
    // Size of pointer variable is always same, 
    // irrespective of its data type (as it stores 
    // only the address).

    int *ptr; 
    char *cptr; 
    float *fptr; 
    double *dptr; 
    
    //scale factor 
    printf("%d ",sizeof(*ptr)); // 4
    printf("%d ",sizeof(*cptr));// 1
    printf("%d ",sizeof(*fptr));// 4
    printf("%d ",sizeof(*dptr));// 8  
    return 0;
}
//printf("%d ",sizeof(cptr)); // size of pointer => 4 / 8 
//printf("%d ",sizeof(*cptr)); // scale factor => 1 byte 