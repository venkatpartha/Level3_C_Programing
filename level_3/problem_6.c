//get a number from user and reverse that number and print the result. write a code inside the function.
#include<stdio.h>
int find_no_of_zeros(int no);
int main()
{
int number,result;
printf("Enter the number\n");
scanf("%d",&number);
result=find_no_of_zeros(number);
printf("\n%d\n",result);
return 0;
}

int find_no_of_zeros(int no)
{
int rev;
rev=0;
while(no>0)
{
rev=rev*10+no%10;
no/=10;
}
return rev;
}
