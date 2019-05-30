/*
Write a program to obtain a number (N) from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number

Input:
First line will contain the number N,
Output:
Print "1" if N is a 1 digit number.

Print "2" if N is a 2 digit number.

Print "3" if N is a 3 digit number.

Print "More than 3 digits" if N has more than 3 digits.

Constraints
0≤N≤1000000
Sample Input:
9
Sample Output:
1
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0&&n<10)
    {
    	printf("1\n");
	}
	else if(n>=10&&n<100)
	{
		printf("2\n");
	}
	else if(n>=100&&n<1000)
	{
		printf("3\n");
	}
	else
	{
		printf("More than 3 digits\n");
	}
}
