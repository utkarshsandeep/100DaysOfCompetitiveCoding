/**
Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the smallest number of notes that will combine to give N.

Constraints
1 = T = 1000
1 = N = 1000000

Example
Input
3 
1200
500
242

Output
12
5
7
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int i,z,k;
	for(i=1;i<=x;i++)
	{
	    scanf("%d",&z);
	    int a1=1,a2=2,a3=5,a4=10,a5=50,a6=100;
	    int count=0,dep=0;
	    
	    for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					dep=dep-100;
					count--;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=100;
				count++;
			}
		}
		for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					count--;
					dep-=50;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=50;
				count++;
			}
		}
		for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					count--;
					dep-=10;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=10;
				count++;
			}
		}
		for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					count--;
					dep-=5;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=5;
				count++;
			}
		}
		for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					count--;
					dep-=2;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=2;
				count++;
			}
		}
		for(k=1;;k++)
	    {
	    	if(dep>z)
	    	{
	    		if(count==0)
	    		{
	    			break;
				}
				else
				{
					count--;
					dep-=1;
					break;
				}
			}
			else if(dep==z)
			{
				break;
			}
			else
			{
				dep+=1;
				count++;
			}
		}
		printf("%d",count);
	}
}
