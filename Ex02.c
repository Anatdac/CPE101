#include<stdio.h>
#include<conio.h>
main()
{
		float A;
		printf("Enter the integer number :");
		scanf ("%f",&A);
		if (A>=0)
			printf("Number = %.0f is a Positive value \n", A);
		else 
			printf("Number = %.0f is a Negative value \n", A);
		getch ();
		return 0;
}
