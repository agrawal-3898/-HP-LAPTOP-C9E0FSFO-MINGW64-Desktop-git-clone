
#include<stdio.h> 
void fun( int **ptr ); 
int main()
{
    int num = 10; 
    int *ptr = &num; 
    printf("inside the main function :: %d",num); //10 
    fun( &ptr  ); 
    printf("\n after function call inside the main function :: %d",num); //20 
    return 0;
}
void fun( int **ptr )
{
    printf("\n inside the fun function %d ",**ptr); //10
    **ptr = **ptr + 10; 
}

// #include<stdio.h> 
// void fun( int *ptr ); 
// int main()
// {
//     int num = 10; 
//     printf("inside the main function :: %d",num); //10 
//     fun( &num ); 
//     printf("\n after function call inside the main function :: %d",num); //20 
//     return 0;
// }
// void fun( int *ptr )
// {
//     printf("\n inside the fun function %d ",*ptr); //10
//     *ptr = *ptr + 10; // 10 + 10 => 20    
// }
