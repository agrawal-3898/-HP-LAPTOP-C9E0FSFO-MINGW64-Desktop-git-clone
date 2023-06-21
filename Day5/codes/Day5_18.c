#include<stdio.h> 
int main()
{
    int num = 10; 
    char ch = 'A'; 
    float fvar = 11.33; 
    double dvar = 10.33; 

    void *ptr; // generic pointer   
    
    ptr = &num; // pointer to int 
    printf("%d ",*(int*)ptr); 
    
    ptr = &ch; // pointer to char 
    printf("%c ",*(char*)ptr);

    ptr = &fvar; // pointer to float
    printf("%.2f ",*(float*)ptr);  
    
    ptr = &dvar; // pointer to double
    printf("%.lf ",*(double*)ptr);    

     
    return 0;
}
