#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0&&n<10)
    {
    	printf("1\n");
	}
	else if(n>=10&&n<100)
	{
		printf("2\n");
	}
	else if(n>=100&&n<1000)
	{
		printf("3\n");
	}
	else
	{
		printf("More than 3 digits\n");
	}
}
