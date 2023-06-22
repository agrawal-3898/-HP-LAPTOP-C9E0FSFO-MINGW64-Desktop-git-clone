#include<stdio.h>
void printArray(int arr[]);
void readArray(int arr[]); 
int main()
{
    int arr[5]; 
    printf("Enter the array elements :: \n"); 
    readArray(arr); // base address 
    printf("Array elements are :: \n"); 
    printArray(arr); // base address 
    return 0;
}
void printArray(int arr[]) // array notation 
{
    int index; 
    for(index = 0 ; index < 5 ; index++)
        printf("%d",arr[index]); // arr[index]=>*(arr+index); 
}
void readArray(int arr[]) // array notation 
{
    int index; 
    for(index = 0 ; index < 5 ; index++)
        scanf("%d",&arr[index]); 
}
