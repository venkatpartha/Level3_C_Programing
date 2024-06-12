//get a 2 digit number from user and check whether the sum of digit is 14 and print the result. write a code inside the function.
#include<stdio.h>
int sum14(int no);
int main()
{
int number,result;
printf("Enter the 2 digit number\n");
scanf("%d",&number);
result=sum14(number);
if(result==14)
printf("\nSum of Digit is 14\n");
else
printf("\nSum of Digit is not 14\n");
return 0;
}

int sum14(int no)
{
int res;
res=(no/10)+(no%10);
return res;
}
