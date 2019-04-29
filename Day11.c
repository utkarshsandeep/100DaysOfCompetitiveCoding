#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,c,z;
	for(i=0;i<x;i++)
	{
		c=0;
	    scanf("%d",&z);
	    for(j=1;j<z;j++)
	    {
	    	if(z%j==0)
	    	{
	    		c++;
			}
		}
		if(c==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");	
		}
	}
}
