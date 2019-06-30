/*
Chef recently had been studying about Fibonacci numbers and wrote a code to print out the kth term of the Fibonacci series(1, 1, 2, 3, 5, 8, 13….). He was wondering whether he could write a program to generate the kth term for similar series. More specifically : T(n, k) is 1 if n <= k and T(n, k) = T(n-1, k) + T(n-2, k) + T(n-3, k) … + T(n-k, k) if n > k . Given n and k output T(n, k)%(1000000007) as the answer could be very large
Input
Two integers, N and K
Output
Output description.

One integer, the nth term of the series mod 1000000007
 

Constraints
1 = N, K = 2*105
Example
Input:
7 5

Output:
9
 


Explanation

Example case 1. The series is as follows {1, 1, 1, 1, 1, 5, 9}
*/
#include <stdio.h>
#include <math.h>
long fib(long N,long K)
{
	if(N<=K)
	{
		return 1;
	}
	else
	{
		long i,s=0;
		for(i=1;i<=K;i++)
		{
			s+=fib(N-i,K);
		}
		return s;
	}
}
int main(void)
{
	long N,K;
	scanf("%ld%ld",&N,&K);
	long z=fib(N,K)%1000000007;
	printf("%ld",z);
}
