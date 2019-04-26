/**
Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

Output
Display the second largest among A, B and C.

Constraints
1 = T = 1000
1 = A,B,C = 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,k;
	for(i=1;i<=x;i++)
	{
		int z[3];
	    scanf("%d%d%d",&z[0],&z[1],&z[2]);
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				if(z[k]<z[k+1])
				{
					int temp=z[k];
					z[k]=z[k+1];
					z[k+1]=temp;
				}
			}
		}
		printf("%d\n",z[1]);
	}
	return 0;
}
