/*
*	WAP to Read and Display personal information
*/

#include <stdio.h>

int main () {

	char Name[10];
	char DOB[10];
	double pNo;
	
	printf("Enter your name: \n");
	scanf("%s", Name);
	printf("Enter Date of birth: \n");
	scanf("%s", DOB);
	printf("Enter your phone number: \n");
	scanf("%lf", &pNo);
	
	printf("Name is: %s\n", Name);
	printf("Date Of Birth is: %s\n", DOB);
	printf("Phone number is: %1.0lf\n", pNo);

}
/*
Programming in C
	Focus on - High level programming language - C
	
	Front end programming - The part with which user interact directly
	Back-end programming - The part where everyday user does not interact with, 		  server side, database side.
	
			Front End		|		Back End
								|
								|
		C, C++, Java		|	My SQL, SQL server
		Python				|	POSTGRES, SQL-DB2
								|	Oracle
								|
								|
*/
