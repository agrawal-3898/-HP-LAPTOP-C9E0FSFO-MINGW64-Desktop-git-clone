#include<stdio.h> 
void printArray(int *ptr); 
int main()
{
    int arr[5] = {1,2,3,4,5}; 
    //arr++; // NOT OK 
    //printf("%d ",sizeof(arr)); // 20 
    printArray(arr); // base address  
    return 0;
}

void printArray(int *ptr) //pointer notation 
{   
    //printf("%d ",sizeof(ptr)); // 4 ( pointer ) 
     ptr++; // OK ( pointer )
     printf("%d ",*ptr);//2  
     printf("%d ",ptr[-1]); //1 
     /*
            arr[-1]
            *(ptr +  -1)
            *(ptr - 1)
            *(ptr - 1 )
            *(104 - 1 * 4)
            *(104 - 4)
            *(100)
            valueat(100)
            1 
     */
}
