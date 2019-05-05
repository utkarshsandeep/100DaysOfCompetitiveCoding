/**
In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program to find his gross salary. 

NOTE: Gross Salary = Basic Salary + HRA + DA

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer salary.

Output
Output the gross salary of the employee. Your answer will be considered correct if the absolute error is less than 10-2.

Constraints
1 = T = 1000
1 = salary = 100000
Example
Input
3
1203
10042
1312

Output
2406.00
20383.16
2624

*/
#include<stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,y,z;
	for(i=1;i<=x;i++)
	{
		scanf("%d",&y);
	    float h,d;
	    float sal=0.0;
	    if(y<1500)
	    {
	    	h=y*0.1;
	    	d=y*0.9;
	    	sal=y+h+d;
		}
		else
		{
			h=500;
			d=y*0.98;
			sal=y+h+d;
		}
	   
		printf("%.2f\n",sal);
	}
}
