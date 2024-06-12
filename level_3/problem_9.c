//get a two digit number from user and swap the digits.
#include<stdio.h>

int swap_digits(int no);
int main()
{
int number,result;
printf("Enter the 2 digit numbers\n");
scanf("%d",&number);
result=swap_digits(number);
printf("\n%d\n",result);
return 0;
}

int swap_digits(int no)
{
int res;
res=no/10+(no%10)*10;
return res;
}

