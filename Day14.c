/**
You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. 

The first line of each description consists of a single integer N.

The second line of each description contains N space separated integers - a1, a2, ..., aN respectively.

Output
For each test case, output a single line containing a single integer - the smallest possible sum for the corresponding test case.

Constraints
T = 105, N = 2 : 13 points.
T = 105, 2 ≤ N ≤ 10 : 16 points.
T = 1000, 2 ≤ N ≤ 100 : 31 points.
T = 10, 2 ≤ N ≤ 105 : 40 points.
1 ≤ ai ≤ 106
Example
Input:
1
4
5 1 3 4

Output:
4
 

Explanation
Here we pick a2 and a3. Their sum equals to 1 + 3 = 4.
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int i,j,k;
	float p;
	int q,n;
	scanf("%d",&n);
	for(q=1;q<=n;q++)
	{
	int x;
	scanf("%d",&x);
	int z[x];
	for(i=0;i<x;i++)
	{
	    scanf("%d",&z[i]);
	}
	int sum=z[0]+z[1];
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				if((z[i]+z[j])<sum)
				{
					sum=z[i]+z[j];
				}
			}
		}
	}
	printf("%d\n",sum);
}
}