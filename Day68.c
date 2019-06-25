/*
Kristen loves playing with and comparing numbers. She thinks that if she takes two different positive numbers, the one whose digits sum to a larger number is better than the other. If the sum of digits is equal for both numbers, then she thinks the smaller number is better. For example, Kristen thinks that  is better than  and that  is better than .

Given an integer, , can you find the divisor of  that Kristin will consider to be the best?

Input Format

A single integer denoting .

Constraints

Output Format

Print an integer denoting the best divisor of .

Sample Input 0

12
Sample Output 0

6
Explanation 0

The set of divisors of  can be expressed as . The divisor whose digits sum to the largest number is  (which, having only one digit, sums to itself). Thus, we print  as our answer.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int i;
	int sum=0,p=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0&&i>9)
		{
			int t=i;
			while(t!=0)
			{
				int r=t%10;
				p+=r;
				t=t/10;
			}
			if(p>sum)
			{
				sum=p;
			}
		}
		else
		{
			if(x%i==0)
			{
				p=i;
			}
			if(p>sum)
			{
				sum=p;
			}
		}
			
	}
	printf("%d\n",sum);
}
