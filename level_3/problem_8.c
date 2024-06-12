//get a number from user and check whether the digits are in assending order.
#include<stdio.h>

int check_assending(int no);
int main()
{
int number,result;
printf("Enter the numbers\n");
scanf("%d",&number);
result=check_assending(number);
if(result==1)
	printf("\nYES\n");
else
	printf("\nNO\n");
return 0;
}

int check_assending(int no)
{
int res;
while(no>0){
if((no%100)/10<(no%100)%10)
	{
	no=no/10;
	res=1;
	}
else
	{
	return 0;
	}
}
return res;
}

