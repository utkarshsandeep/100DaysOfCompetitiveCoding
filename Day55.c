/*
Given an array A of size N and an integer K , check if there exist any pair of index i,j such that Ai+Aj=K and i?j
Input
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains two space separated integer N and K respectively.
The second line of each test case contains N space separated integers Ai.
Output
For each test case, print a single line containing answer "Yes" or "No" (without quotes).

Constraints
1=T=100
2=N=104
1=K=109
1=Ai=109
Subtasks
Subtask #1 (30 points):

2=N=100
Subtask #2 (70 points): original constraints

Example Input
3
4 3
1 2 1 3
4 6
1 2 1 3
5 1
5 4 1 2 3
Example Output
Yes
No
No
Explanation
Example case 1: A1+A2=3.

Example case 2: Pair having Ai+Aj=6 doesn't exist.

Example case 3: Pair having Ai+Aj=1 doesn't exist.
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
		int M;
		scanf("%d",&M);
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
				if((A[j]+A[k])==M&&j!=k)
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

