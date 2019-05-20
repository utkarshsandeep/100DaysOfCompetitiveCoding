#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	int i;
	for(i=1;i<=x;i++)
	{
		int c,count=-1;
		scanf("%d",&c);
		if(c%10==0)
		{
			count=0;
		}
		else if((c*2)%10==0)
		{
			count=1;
		}
		else
		{
			count=-1;
		}
		printf("%d\n",count);
	}
	return 0;
}


