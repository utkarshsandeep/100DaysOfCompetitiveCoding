/*
Given an array A of size N , check if there exist any pair of index i,j such that Ai=Aj and i?j
Input
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains integer N.
The second line of each test case contains N space separated integers Ai.
Output
For each test case, print a single line containing answer "Yes" or "No" (without quotes).

Constraints
1=T=100
2=N=105
1=Ai=109
Sum of N over all test cases doesn't exceed 106
Subtasks
Subtask #1 (30 points):

2=N=100
Subtask #2 (70 points): original constraints

Example Input
2
4
1 2 1 3
5
5 4 1 2 3
Example Output
Yes
No
Explanation
Example case 1: A1 and A3 both have value 1.

Example case 2: All values are pairwise distinct.
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int T;
	scanf("%d",&T);
	int i,j,k;
	for(i=1;i<=T;i++)
	{
		int N;
		scanf("%d",&N);
		int A[N];
		for(j=0;j<N;j++)
		{
			scanf("%d",&A[j]);
		}
		int count=0;
		for(j=0;j<N;j++)
		{
			for(k=0;k<N;k++)
			{
				if(A[j]==A[k]&&j!=k)
				{
					count=1;
					break;
				}
			}
		}
		if(count==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

