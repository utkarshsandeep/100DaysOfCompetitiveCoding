/*
Codu is trying to go down stairs from his building to ground floor.

He can go 3 ways:

1. Walk 1 step at a time.

2. Extend his legs and go 2 steps at a time.

3. Jump down 3 steps at a time.

Given n steps, calculate the number of possible ways to reach the ground floor, provided he can jump 3 steps at most once during this process.

That is, he can jump down 3 steps only once, but at any time, if he wishes, while walking down the stairs.

Constraints
1 <= N <= 1000000.

Input Format
Single Integer denoting the number of Steps, N.

Output
Number of ways to reach ground floor.

As the number can be huge, give output modulo 1000000007.

Test Case

Explanation
Example 1

Input

4

Output

7

Explanation

1, 1, 1, 1

1, 2, 1

1, 1, 2

1, 3

2, 1, 1

2, 2

3, 1

Number of ways = 7.
*/
package Coder;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class codevita3
{
	public static int stepcount(int x)
	{
		if(x==1)
		{
			return 1;
		}
		else if(x==2)
		{
			return 2;
		}
		else if(x==3)
		{
			return 4;
		}
		else
		{
			return (stepcount(x-1)+stepcount(x-2)+stepcount(x-3));
		}
	}
	public static void main(String args[])throws IOException
	{
		try
		{
			BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			int n=Integer.parseInt(br.readLine());
			int r;
			r=stepcount(n);
			System.out.println(r);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

