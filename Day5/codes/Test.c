#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
	int temp = no2;
	no2 = no1;
	no1 = temp;
}
int main(void)
{
	int no1 = 17, no2 = 71;
	printf("%d %d ", no1 , no2); // 17 71 
	swapping();
	printf("%d %d\n", no1, no2); // 17 71 
	return 0;
}


// #include <stdio.h>
// int value = 0;
// int function(void)
// {
// 	auto int value  = 1;
// 	printf("%d ", value); // 1 
// 	{
// 		int value = 2;
// 		printf("%d ", value); // 2 
// 		{
// 			value += 1;  //3 
// 			printf("%d ", value); // 3 
// 		}
// 		printf("%d ", value);//3 
// 	}
// 	printf("%d ", value);//1 
// 	return 0;
// }
// int main(void)
// {
//     function();
//     return 0;
// }

/*
        int i = 0; 
        for(i = 0 ; i<=4 ; i++)
        {
            int i = 0; 
            printf("%d",i++); 
        }

*/