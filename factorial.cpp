#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1, f=1,num;
	printf("enter a number");
	scanf("%d",&num);
	while(i<=num){
		f=f*i;
		i++;
    }
	printf(" FACTORIAL of %d is : %d",num,f);
	return 0;
}
