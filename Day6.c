/**
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three angles A, B and C of triangle separated by space.

Output
Display 'YES' or 'NO' if the triangle is Valid or not respectively.

Constraints
1 = T = 1000
1 = A,B,C = 180
Example
Input

3 
40 40 100
45 45 90
180 1 1
Output

YES
YES
NO
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int z1,z2,z3,i;
	for(i=1;i<=x;i++)
	{
	    scanf("%d%d%d",&z1,&z2,&z3);
	    if(z1<=0||z2<=0||z3<=0)
	    {
	    	printf("NO\n");
		}
		else if((z1+z2+z3)==180)
		{
	    	printf("YES\n");
		}
		else
		{
	    	printf("NO\n");
		}
	}
}
