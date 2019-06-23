/*
You are given a sequence whose  term is

You have to evaluate the series
Find .
Input Format

The first line of input contains , the number of test cases. 
Each test case consists of one line containing a single integer .

Constraints

Output Format

For each test case, print the required answer in a line.

Sample Input 0

2
2
1
Sample Output 0

4
1
Explanation 0

Case 1: We have  
Case 2: We have 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    long x;
    scanf("%llu",&x);
    long i;
    for(i=1;i<=x;i++)
    {
        long y;
        scanf("%llu",&y);
        long j,sum=0;
        for(j=1;j<=y;j++)
        {
            long t=(j*j)-(j-1)*(j-1);
            sum+=t;
        }
        printf("%llu\n",sum);
    }
}
