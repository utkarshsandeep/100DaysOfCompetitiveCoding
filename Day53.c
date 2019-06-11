/*
Given an array A of size N , count number of pairs of index i,j such that Ai is even, Aj is odd and i<j
Input
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains integer N.
The second line of each test case contains N space separated integers Ai.
Output
For each test case, print a single line containing an integer denoting number of pairs.

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
2
3
Explanation
Example case 1: (A2,A3) and (A2,A4) .

Example case 2: (A2,A3) , (A2,A5) and (A4,A5) .
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
			for(k=j+1;k<N;k++)
			{
				if(A[j]%2==0&&A[k]%2!=0)
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

