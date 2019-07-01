/*
It's well known that our friend Balsa likes the digit 3 very much. He's so obsessed with this digit that he spends time thinking about it even during holidays.

Today, Balsa invented an interesting problem: For a positive integer N, find the smallest integer greater than N such that its decimal representation contains the digit 3 at least three times.

You are given the integer N. Please solve this problem for Balsa.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing one integer — the smallest number greater than N containing the digit 3 at least three times.

Constraints
1=T=40
1=N=2·109
Example Input
3
221
333
3002
Example Output
333
1333
3033
*/
#include <stdio.h>
#include <math.h>
int count3(int x)
{
	int z=x,c=0;
	while(z!=0)
	{
		int r=z%10;
		if(r==3)
		{
			c++;
		}
		z=z/10;
	}
	return c;
}
int main(void)
{
	int k;
	scanf("%d",&k);
	int j,x;
	for(j=1;j<=k;j++)
	{
	scanf("%d",&x);
	int i;
	for(i=x+1;1;i++)
	{
		if(count3(i)==3)
		{
			break;
		}
	}
	printf("%d\n",i);
}
}
