//get two number from user and compare the numbers. if same print "SAME" otherwise print "NOT SAME". write a code inside the function.
#include<stdio.h>
int compare_numbers(int n1,int n2);
int main()
{
int number1,number2,result;
printf("Enter the two numbers\n");
scanf("%d %d",&number1,&number2);
result=compare_numbers(number1,number2);
if(result==1)
	printf("\nSAME\n");
else
	printf("\nNOT SAME\n");
return 0;
}

int compare_numbers(int n1,int n2)
{
int res;
if(n1==n2)
{
res=1;
}
return res;
}

