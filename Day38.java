/* package codechef; // don't place package name! */
/*
Every day, Mike goes to his job by a bus, where he buys a ticket. On the ticket, there is a letter-code that can be represented as a string of upper-case Latin letters.

Mike believes that the day will be successful in case exactly two different letters in the code alternate. Otherwise, he believes that the day will be unlucky. Please see note section for formal definition of alternating code.

You are given a ticket code. Please determine, whether the day will be successful for Mike or not. Print "YES" or "NO" (without quotes) corresponding to the situation.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first and only line of each test case contains a single string S denoting the letter code on the ticket.

Output
For each test case, output a single line containing "YES" (without quotes) in case the day will be successful and "NO" otherwise.

Note
Two letters x, y where x != y are said to be alternating in a code, if code is of form "xyxyxy...".
Constraints
1 = T = 100
S consists only of upper-case Latin letters
Subtask 1 (50 points):

|S| = 2
Subtask 2 (50 points):

2 = |S| = 100
Example
Input:
2
ABABAB
ABC

Output:
YES
NO
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code here
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		try {
			int n=Integer.parseInt(br.readLine());
	        int j;
	        for(j=1;j<=n;j++)
	        {
				String x=br.readLine();
				x=x.toUpperCase();
				if(x.length()<2)
				{
					System.exit(0);
				}
				if(x.length()>=2&&x.length()<=100)
				{
					boolean f=true;
					int i;
					char a=x.charAt(0);
					char b=x.charAt(1);
					for(i=0;i<x.length()-1;i=i+2)
					{
						if(x.charAt(i)!=a||x.charAt(i+1)!=b)
						{
							f=false;
						}
					}
					if(f)
						System.out.println("Yes");
					else
						System.out.println("No");
				}
			}
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }	
	}
}
