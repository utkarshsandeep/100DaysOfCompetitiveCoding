/*
Santosh has a farm at Byteland. He has a very big family to look after. His life takes a sudden turn and he runs into a financial crisis. After giving all the money he has in his hand, he decides to sell some parts of his plots. The specialty of his plot is that it is rectangular in nature. Santosh comes to know that he will get more money if he sells square shaped plots. So keeping this in mind, he decides to divide his plot into minimum possible square plots so that he can get maximum profit out of this.

So your task is to find the minimum number of square plots that can be formed out of the rectangular plot.

Input
The input consists of T number of test cases. T lines follow. Each line consists of two integers N and M which denotes the length and breadth of the rectangle.

Output
Output is a single line which denotes the minimum number of square plots that can be formed

Constraints
1<=T<=20 
1<=M<=10000 
1<=N<=10000 
Input:
2
10 15
4 6

Output:
6
6
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int a,b,i;
	for(i=1;i<=x;i++)
	{
	    scanf("%d%d",&a,&b);
	    int c=a*b;
	    int j,chk=0;
	    for(j=1;j<c;j++)
	    {
	    	if(c%(j*j)==0)
	    	{
	    		chk=(int)c/(j*j);
			}
		}
		printf("%d\n",chk);
	}
}
