#include <stdio.h>
#include <stdlib.h>
#include "assert.h"
#include "operation.h"
int main()
{
    assert(search_digit(122233,1)==True);
    assert(search_digit(122233,5)==False);
    //printf("%d\n",intersection__set(1112345,11111345));
 //   printf("1=%d\n",is_prime(1));
 //   printf("2=%d\n",is_prime(2));
 //   printf("3=%d\n",is_prime(3));
 //   printf("4=%d\n",is_prime(4));
 //  printf("5=%d\n",is_prime(5));
    //printf("Hello world!\n");
   // generate_prime(5);
   //assert(is_armstrong(153)==True);
    //generate_series(4);
    generate_pat2();
    return 0;
}
