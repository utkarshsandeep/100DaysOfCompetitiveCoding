#include <stdio.h>
/**
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively.

Constraints
1 = T = 1000
1 = A,B = 1000000
Example
Input
3 
120 140
10213 312
10 30

Output

20 840
1 3186456
10 30


*/
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,y,z;
	for(i=1;i<=x;i++)
	{
		scanf("%d",&y);
	    scanf("%d",&z);
	    int l,h;
	    l=y>z?y:z;
	    while(1)
	    {
	    	if(l%y==0&&l%z==0)
	    	{
	    		break;
			}
			l=l+1;
		}
		h=1;
		for(j=1;j<=y&&j<=z;j++)
		{
			if(y%j==0&&z%j==0)
			{
				h=j;
			}
		}
		printf("%d %d\n",h,l);
	}
}
