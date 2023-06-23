#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    //int *ptr = NULL; // null pointer 
    //void* malloc(size_t size); 
    int i,cnt; 
    int *marks; 
    printf("How many students"); 
    scanf("%d",&cnt); // 5 
    marks =(int*)malloc(cnt * sizeof(int)); // 5 * 4 => 20 byte 
    printf("Enter the marks of %d students :: ",cnt); 
    for(i = 0 ; i < cnt ; i++)
         scanf("%d",&marks[i]);
    for(i = 0 ; i < cnt ; i++) 
         printf("%d ",marks[i]); // *(marks + i)=> *(400 + 0)=>*(400)
    
    free(marks); // to avoid memory leakage
    marks = NULL; // to avoid dangling pointer   
    return 0;
}
