//get a number from user, find the number of digits and print.
#include<stdio.h>

int count_digits(int no);
int main()
{
int number,result;
printf("Enter the numbers\n");
scanf("%d",&number);
result=count_digits(number);
printf("\n%d\n",result);
return 0;
}

int count_digits(int no)
{
int res;
res=0;
while(no>0)
{
	res++;
	no=no/10;
}
return res;
}

