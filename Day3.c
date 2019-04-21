/**
Given the list of numbers, you are to sort them in non decreasing order.
Input
t – the number of numbers in list, then t lines follow [t <= 10^6]. 
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.

Example
Input:
5
5
3
6
7
1

Output:
1
3
5
6
7
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,k;
	float p;
	int z[x];
	for(i=0;i<x;i++)
	{
	    scanf("%d",&z[i]);
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x-1;j++)
		{
			if(z[j]>z[j+1])
			{
				int temp=z[j];
				z[j]=z[j+1];
				z[j+1]=temp;
			}
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d\n",z[i]);
	}
	return 0;
}

