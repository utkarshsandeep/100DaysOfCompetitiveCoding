/**
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
Output the total expenses while purchasing items.

Constraints
1 = T = 1000
1 = quantity,price = 100000
Example
Input

3 
100 120
10 20
1200 20

Output

12000.000000
200.000000
21600.000000
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,z;
	float k;
	for(i=1;i<=x;i++)
	{
		float sum=0;
	    scanf("%d",&z);
	    scanf("%f",&k);
	    if(z<=1000)
	    {
	    	sum=z*k;
		}
		else
		{
			sum=z*k;
			sum-=sum*0.1;
		}
		printf("%f\n",sum);
	}
}
