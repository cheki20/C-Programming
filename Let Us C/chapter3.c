//
#include <stdio.h>
int main(){
	int x = 10;
	int y = 20;
	if (x == y)
	{
		printf("%d %d", x, y);
	}
	return 0;
}

//
#include <stdio.h>
int main(){
	int x = 3;
	int y = 3.0;
	if (x == y)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal\n");
	}
	return 0;
}

//
#include <stdio.h>
int main(){
	int x = 3, y,z;
	y=x=10;
	z=x<10;
	printf("x = %d y = %d z = %d\n",x,y,z);
	
	return 0;
}

#include <stdio.h>
int main(){
	float a = 12.25, b = 12.52;
	if ('X'< 'x')
	{

		printf("a and b are equal\n");
	}
	return 0;
}
#include <stdio.h>
int main(){
	float a = 12.25, b = 12.52;
	if ('X'< 'x')
	{

		printf("a and b are equal\n");
	}
	return 0;
}

//Determining cost price and selling price
#include <stdio.h>
int main(){
	int CP;
	int SP;
	printf("Enter the cost price and selling price:\n");
	scanf("%d %d", &CP, &SP);

	int profit = SP-CP;
	int Lost = CP - SP;


	 
	if (CP==SP)
	{
		printf("No lost AND No gain\n");
	}
	else if (SP>CP)
	{
		printf("Profit gained = %d\n", profit );
	}
	else if(CP>SP)
	{
		printf("Lost = %d\n",Lost );
	}
	return 0;

}

//Odd Or Even
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number:\n");
	scanf("%d", &number);

	if (number%2==0)
	{
		printf("%d is even number\n",number );
	}
	else
	{
		printf("%d is odd number\n", number);
	}
}

//Leap Year or Not
#include<stdio.h>
int main(){
	int year;
	printf("Enter a Year\n");
	scanf("%d", &year);

	if (year%100==0)
	{
		if (year%400==0)
		{
			printf("Leap Year\n");
			
		}
		else
		{
			printf("Not a Leap Year\n");
		}

	}
	else
	{
		if (year%4==0)
		{
			printf("Leap Year\n");
		}
		else
		{
			printf("Not a Leap Year\n");
		}
	}
}