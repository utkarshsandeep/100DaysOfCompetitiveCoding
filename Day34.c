/*
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers a, b, c and d.
Output
For each test case, print a single line containing one string "YES" or "NO".

Constraints
1 = T = 1,000
1 = a, b, c, d = 10,000
Subtasks
Subtask #1 (100 points): original constraints

Example
Input:

3
1 1 2 2
3 2 2 3
1 2 2 2

Output:

YES
YES
NO
*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a==b&&c==d)
		{
			printf("YES\n");
		}
		else if(a==c&&b==d)
		{
			printf("YES\n");
		}
		else if(a==d&&b==c)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
