#include<stdio.h> 
int main()
{
    //matrix representation 
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; //2D array
    
    /*
            arr 
                  [0]    [1]     [2]
          [0]      1      2       3  
          100     100    104     108 

          [1]      4      5       6 
          112     112    116     120 

          [2]      7      8       9
          124     124     128     132     

    
    */ 
    
    int row , col; 
    for( row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    }
    printf("\n"); 
   //name of array represents the base address
   // outer address   
    //printf("%u ",arr+0); //100  

    //printf("%u ",arr + 1); //112 
    /*
            arr + 1 
            100 + 1 * 12 
            100 + 12
            112 
    */
    //printf("%u ",arr + 2); //124 

    //inner address 
    // printf("%u ",*(arr+0) ); //100 
    // printf("%u ",*(arr+1));  //112
    // printf("%u ",*(arr + 2));//124    

    // inner address 
    // printf("%u ",*(arr + 0) + 1 ); //104 
    // printf("%u ",*(arr + 1) + 2 ); //120 
    // printf("%u ", *(arr + 2) + 1); //128   

    // pointer notation of 2D array 
    // printf("%u ",*(*(arr + 0) + 1 ) ); //2 
    // printf("%u ",*(*(arr + 1) + 2) ); //6 
    // printf("%u ", *(*(arr + 2) + 1)); //8 
    
    //printf("%d ",arr[0][0]); //array notation 
    //printf("%d ",*(*(arr+0)+0)); // pointer notation 
    
   
    //printf("%d ",arr[1][1]);
    //printf("%d ",*(*(arr+1)+1)); // pointer notation  
    
    //printf("%u ",**arr); //1 

    //printf("%u ",**arr + 10); //1 + 10 => 11 
    
    //printf("%u ",*arr + 1 );// 104  
    printf("%u ",*(*arr + 1) );// 2 
    
    return 0;
}
// arr[i][j] ==============> *(*(arr+i)+j)