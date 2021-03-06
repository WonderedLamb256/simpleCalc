/* Calculator that adds, subtracts, multiplies, divides, and squares. Square root function in testing.
Made by WonderedLamb256 */

#include <stdio.h>

int main()
{
	int option;
	int loop;
	loop = 1;
	while(1)
	{
		printf( "Choose your option (1 for calculate, 2 for quit, 3 for help): ");
		scanf( "%d", &option );
		if ( option == 1 )
		{
			int num1;
			int num2;
			printf( "Choose number 1: " );
			scanf( "%d", &num1 );
			printf( "Choose number 2 (not needed in square/sqrt operation): " );
			scanf( "%d", &num2 );
			int answer;
			int operation;
			printf( "Choose operation: " );
			scanf( "%d", &operation );
			if ( operation == 1 )
			{answer = num1 + num2;}
			else if ( operation == 2 )
			{answer = num1 - num2;}
			else if ( operation == 3 )
			{answer = num1 * num2;}
			else if ( operation == 4 )
			{answer = num1 / num2;}
                        else if ( operation == 5 )
			{answer = num1 * num1;}
			else if ( operation == 6 ) {
                                for ( int i=0;i>num1;i++ ) { // does not work with floating point numbers, will hang if given
                                      if ( i * i == num1 )
				      {answer = i;}
				}
			}
			else
			{
				printf( "Error: invalid operation\n");
				break;
			}
			printf( "Your answer is: %d\n", answer );
		}
		else if ( option == 2 )
		{break;}
		else if ( option == 3 )
		{printf( "1 for add, 2 for subtract, 3 for multiply, 4 for divide, 5 for square, 6 for square root\n");}
		else
		{
			printf( "Error: invalid option\n" );
			break;
		}
	}
	return 0;
}
