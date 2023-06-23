#include<stdio.h> 
int main(int argc, char const *argv[])
{
    char *numbers[] = {"zero","one","two","three"}; 
    // printf("%u ",numbers[0]); //4214784
    // printf("%u ",numbers[1]); //4214789
    // printf("%u ",numbers[2]); //4214793
    // printf("%u ",numbers[3]); //4214797  

    //  printf("%u ",*(numbers + 0) + 0  ); //4214784
    //  printf("%u ",*(numbers + 0) + 1  ); //4214785
    //  printf("%u ",*(numbers + 0) + 2  ); //4214786
    //  printf("%u ",*(numbers + 0) + 3  ); //4214787 

        // pointer notation 
        // printf("%c ",*(*(numbers + 0) + 0 )  ); //z
        // printf("%c ",*(*(numbers + 0) + 1 )  ); //e
        // printf("%c ",*(*(numbers + 0) + 2 )  ); //r
        // printf("%c ",*(*(numbers + 0) + 3 )  ); //o
        // printf("%d ",*(*(numbers + 0) + 4 )  ); //0 

        //array notation 
        printf("%c ",numbers[0][0]); //z
        printf("%c ",numbers[0][1]); //e
        printf("%c ",numbers[0][2]); //r
        printf("%c ",numbers[0][3]); //o 
    
    
    return 0;
}
