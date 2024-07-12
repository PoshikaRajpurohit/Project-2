#include<stdio.h>
main()
{
	int marks;
	printf("Enter your marks=");
	scanf("%d",&marks);
	if(marks>=90)
	{
	 	printf("Your grade is A ,Congratulations, you are elligible for next level.");	
	}
	else if(marks>=80)
	{
		printf("Your grade is B ,Congratulations, you are elligible for next level.");
	}
	else if(marks>=70)
	{
		printf("Your grade is C ,Congratulations, you are elligible for next level.");
	}
	else if (marks>=50)
	{
		printf("Your grade is D ,Congratulations, you are elligible for next level.");
	}
	else if (marks>=35)
	{
		printf("Your grade is E ,Congratulations, you are elligible for next level.");
	}
	else if (marks<35)
	{
		printf("Your grade is F ,Please try again next time");
	}
	else
	{
		printf("please enter proper marks");
	}
}