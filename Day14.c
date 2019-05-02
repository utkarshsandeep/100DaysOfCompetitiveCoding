#include <stdio.h>
#include <math.h>
int main(void) {
	int i,j,k;
	float p;
	int q,n;
	scanf("%d",&n);
	for(q=1;q<=n;q++)
	{
	int x;
	scanf("%d",&x);
	int z[x];
	for(i=0;i<x;i++)
	{
	    scanf("%d",&z[i]);
	}
	int sum=z[0]+z[1];
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				if((z[i]+z[j])<sum)
				{
					sum=z[i]+z[j];
				}
			}
		}
	}
	printf("%d\n",sum);
}
}
