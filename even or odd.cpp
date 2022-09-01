#include<stdio.h>
#include<conio.h>
char* odd_even(inti);
int main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	printf("%s",odd_even(number));
	return 0;
}
    char* odd_even(int number)
    {
    	if(number%2 == 0){
    		return "Even";
		}else{
			return "Odd";
	}	}
