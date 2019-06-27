/*
Our little chef is fond of doing additions/sums in his free time. Today, he has an array A consisting of N positive integers and he will compute prefix and suffix sums over this array.

He first defines two functions prefixSum(i) and suffixSum(i) for the array as follows. The function prefixSum(i) denotes the sum of first i numbers of the array. Similarly, he defines suffixSum(i) as the sum of last N - i + 1 numbers of the array.

Little Chef is interested in finding the minimum index i for which the value prefixSum(i) + suffixSum(i) is the minimum. In other words, first you should minimize the value of prefixSum(i) + suffixSum(i), and then find the least index i for which this value is attained.

Since, he is very busy preparing the dishes for the guests, can you help him solve this problem?

Input
The first line of the input contains an integer T denoting the number of test cases.

The first line of each test case contains a single integer N denoting the number of integers in the array A.

The second line contains N space-separated integers A1, A2, ..., AN denoting the array A.

Output
For each test case, output a single line containing the answer.

Constraints
1 = T = 10
1 = N, A[i] = 105
Subtasks
Subtask #1 : (20 points) 1 = N = 100
Subtask #2 : (80 points) Original constraints
Example
Input:
2
3
1 2 3
4
2 1 3 1

Output:
1
2
Explanation
Example case 1. Let's calculate prefixSum(i) + suffixSum(i) for all indexes i in the sample case.

prefixSum(1) + suffixSum(1) = 1 + 6 = 7
prefixSum(2) + suffixSum(2) = 3 + 5 = 8
prefixSum(3) + suffixSum(3) = 6 + 3 = 9
The minimum value of the function is 7, which is attained at index 1, so the answer would be 1.

Example case 2. Let's calculate prefixSum(i) + suffixSum(i) for all indexes i in the sample case.

prefixSum(1) + suffixSum(1) = 2 + 7 = 9
prefixSum(2) + suffixSum(2) = 3 + 5 = 8
prefixSum(3) + suffixSum(3) = 6 + 4 = 10
prefixSum(4) + suffixSum(4) = 7 + 1 = 8
The minimum value of the function is 8, which is achieved for indices 2 and 4. The minimum of these two indices 2, 4 is index 2. Hence, the answer will be 2.
*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static int ps(int j,int x[])
	{
		int i,sum=0;
		for(i=0;i<=j;i++)
		{
			sum+=x[i];
		}
		return sum;
	}
	public static int ss(int n,int j,int x[])
	{
		int i,sum=0;
		for(i=j;i<n;i++)
		{
			sum+=x[i];
		}
		return sum;
	}
	public static void main (String[] args) throws Exception
	{
		// your code goes here
		int x;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		try {
		    x=Integer.parseInt(br.readLine());
		    int i;
		    for(i=1;i<=x;i++)
		    {
		    	int n=Integer.parseInt(br.readLine());
		    	int a[]=new int[n];
		    	int b[]=new int[n];
		    	int j;
		    	for(j=0;j<n;j++)
		    	{
		    		a[j]=Integer.parseInt(br.readLine());
				}
				for(j=0;j<n;j++)
				{
					b[j]=ps(j,a)+ss(n,j,a);
				}
				int min=999;
				int p=0;
				for(j=0;j<n;j++)
				{
					if(b[j]<min)
					{
						min=b[j];
						p=j;
					}
				}
				 System.out.println(p+1);
			}
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }
		    
		}
}

