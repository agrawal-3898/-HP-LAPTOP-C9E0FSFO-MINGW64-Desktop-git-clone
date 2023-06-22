#include<stdio.h> 
void printArray(int arr[]); 
int main()
{
    int arr[5] = {1,2,3,4,5}; 
    //arr++; // NOT OK 
    //printf("%d ",sizeof(arr)); // 20 
    printArray(arr); // base address  
    return 0;
}

void printArray(int arr[]) //array notation 
{   
    //printf("%d ",sizeof(arr)); // 4 ( pointer ) 
     arr++; // OK ( pointer )
     printf("%d ",*arr);//2  
     printf("%d ",arr[-1]); //1 
     /*
            arr[-1]
            *(arr +  -1)
            *(arr - 1)
            *(104 - 1 )
            *(104 - 1 * 4)
            *(104 - 4)
            *(100)
            valueat(100)
            1 
     */
}
