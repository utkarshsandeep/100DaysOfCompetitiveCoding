/**
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3

Sample output:
1
2
120
6
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	long int x;
	scanf("%d",&x);
	int i,j,z;
	long int k;
	for(i=1;i<=x;i++)
	{
		k=1;
	    scanf("%d",&z);
	    if(z==0)
	    {
	        k=1;
	    }
	    else
	    {
	    	for(j=1;j<=z;j++)
	    	{
	    		k*=j;
			}
	    }
	    printf("%d\n",k);
	}
	return 0;
}

