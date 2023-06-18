// Which one of the following is not a token?
// A. int // keyword 
// B. _num // identifier 
// C. sizeof // keyword 
// D. printf // identifier 
// E. None of the above 
// Answer => E 

//Which one of the following statements will not modify the state of the 
//resource?
 //i. int a = 10; // OK 
// ii. int 1_a = 15; // NOT OK (identifier cannot start with number)
//iii. 5 = 20 + 1; // lvalue error 
//iv. char c1 = 'C'; // OK 

// //What will be the output of the following code? 
// #include<stdio.h>
// int main(void)
// {
// printf("%u",sizeof(34.45)); // by default => double => 8 bytes 
// return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// char c1='z'; //122 
// printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);

// // '9' => 57 (ascii value )
// //       c1-57-> 122-57 => %d => integer ( 65 )
// //       c1-9 -> 122-57 => %c => character (65 => A )
// //       c1-32 -> 122-32 => %o => octal (90(int) ===> convert to octal  ==> 132  )
// return 0;
// }


// #include<stdio.h>
// int main(void)
// {
// signed char c1 = -1;// Yes 
// unsigned char c2= -1; // unsigned char range => 0 to 255  
// // 0 - 255 => total count => 256 
// //  256 - 1 => 255 
// //printf("%u ",c2); 
// printf("%d\n",c1+c2 );
// //            -1+255 => 254 
// return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// int val = 10;
// float fval = 56.789643;
// printf("%5d%*.*f",val,val,val-8,fval);
// //            1 0           5 6 . 7 8 
// //      - - - - - - - - - - - - - - - 

// //%*.*f => %10.2f

// %*.*f => %10.2f -> fval 

// return 0;
// }


// #include<stdio.h>
// int main()
// {
// //character subtract => ascii value subtract 
// // character are internally integral constants 
// printf("%d %d %d",'\r'-'\n','\r'-'\t','\r'-'\b');
// //                 13-10 , 13-9 , 13 - 8 
// //                  3    ,  4   ,  5  
// return 0;
// }


// #include<stdio.h>
// int main(void)
// {
//     //  '\0' => 0 
// 1. int a=3,b; // OK 
// 2. b = a * '\0';// OK 
// 3. printf("b=%d \n",b);//OK 
// 4. b = a / '\0';// divide by zero (runtime error)
// 5. printf("b=%d \n",b);
// return 0;
// }


