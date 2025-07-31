
#include "operation.h"
#include "stdio.h"
#include "math.h"

uint8_t search_digit(int num, int digit)
{
    for(;num;num/=10)
    {
        if((num%10)==digit)
        {
            return True;
        }
    }
    return False;
}

int intersection__set(int first, int second)
{
    int digits=0;



    for(int i=0;first;first/=10)
    {

        if((search_digit(second,first%10)==True)&& search_digit(first/10,first%10)==False)
        {


            //digits=((first%10) + (digits));
            digits = (((first%10)*pow(10,i++)) + digits);

        }
    }
    return digits;

}

int is_prime(int num)
{
    if(num==1)
    {

        return False;
    }
    for(int i=2; i<num;i++)
    {
        if((num%i)==0)
        {
            return False;
        }
    }
    return True;
}

void generate_prime(int cnt)
{
    int i=1;
    while(cnt)
    {
        if(is_prime(i)==True)
        {

            printf("%d is a prime number\n",i);

            cnt--;
        }
        i++;
    }
}
int is_armstrong(int num)
{
    int number=num;
    int sum=0;
    while(num)
    {
     sum = (pow((num%10),3)+sum);
     num/=10;
    }
    if(sum==number)
    {

        return True;
    }

    return False;
}

int generate_series(int count)
{
    int sum=0;
    int digit=1;
    int prev_digit=0;

    for(int i =0; i<count; i++)
    {

        digit = digit*10 + 1;

        printf("%d",digit);
        sum = digit + sum;

        if(i==count)
        {
            return sum;

        }
        printf("+");
    }
    return 0;
}

void generate_pat1(void)
{
    int rows = 4;

  for (int i = 0; i < rows; i++) {
        // Print leading spaces (2 spaces per row level)
        for (int j = 0; j < i*2 ; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }

        printf("\n");
    }



}

void generate_pat2(void)
{

    int rows = 4;
    int flag=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<i+1;j++)
        {
            printf("*");
            printf("  ");

        }
        printf("\n");


    }
}
