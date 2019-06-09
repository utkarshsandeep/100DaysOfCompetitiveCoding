/*
Chef is a brilliant university student that does not attend lectures because he believes that they are boring and coding is life! However, his university follows certain rules and regulations, and a student may only take an exam for a course if he has attended at least 75% of lectures for this course.

Since you are Chef's best friend, you want to help him reach the attendance he needs to take exams. Unfortunately, Chef is still focused on his code and refuses to attend more lectures, so the only option is to have some of his friends mark him as present by proxy. This trick is well-known in the university, but only few have the talent to pull it off.

In a certain course, there is exactly one lesson per day over the course of D days (numbered 1 through D). You are given a string S with length D describing the lessons Chef attended — for each valid i, the i-th character of this string is either 'A' if Chef was absent on day i or 'P' if Chef was actually present on day i.

For each day d when Chef is absent, one of Chef's friends can mark him as present by proxy on this day only if he was present (if he was really present, not just marked as present) on at least one of the previous two days, i.e. days d-1 and d-2, and on at least one of the following two days, i.e. days d+1 and d+2. However, it is impossible to mark him as present by proxy on the first two days and the last two days.

Find the minimum number of times Chef has to be marked as present by proxy so that his attendance becomes at least 75% (0.75). Chef's attendance is number of days when he was marked as present, either by proxy or by actually being present, divided by D.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer D.
The second line contains a single string S with length D.
Output
For each test case, print a single line containing one integer — the minimum number of times Chef needs to be marked as present by proxy, or -1 if it is impossible to make Chef achieve 75% attendance.

Constraints
1=T=200
1=D=1,000
S contains only characters 'A' and 'P'
Subtasks
Subtask #1 (100 points): original constraints

Example Input
1
9
PAAPPAPPP
Example Output
1
Explanation
Example case 1: With a proxy on the third day, the attendance string is "PAPPPAPPP". Now, Chef's attendance is at least 75%, so the minimum number of times Chef needs to be marked as present by proxy is 1.
*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws Exception
	{
		// your code goes here
		int x;
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
		try {
		    x=Integer.parseInt(b.readLine());
		    int i,j;
		    for(i=1;i<=x;i++)
		    {
		    	int l=Integer.parseInt(b.readLine());
		    	String s=b.readLine();
		    	int p=0,a=0,count=0,ch=0;
		    	double at;
		    	if(l<=4)
		    	{
		    		for(j=0;j<l;j++)
		    		{
		    			if(s.charAt(j)=='A')
		    			{
		    				a++;
						}
						else if(s.charAt(j)=='P')
						{
							p++;
						}
					}
					at=p/(a+p)*100;
					if(at>=75.0)
					{
						System.out.println("0");
					}
					else
					{
						System.out.println("-1");
					}
				}
				else
				{
					for(j=0;j<l;j++)
					{
						if(s.charAt(j)=='A')
		    			{
		    				a++;
						}
						else if(s.charAt(j)=='P')
						{
							p++;
						}
					}
					at=p/(a+p)*100;
					if(at>=75.0)
					{
						System.out.println("0");
					}
					else
					{
						for(j=3;j<l-2;j++)
						{
							if(s.charAt(j-1)=='P'&&s.charAt(j-2)=='P'||s.charAt(j+1)=='P'&&s.charAt(j+2)=='P')
							{
								p++;
								a--;
								count++;
							}
							//System.out.println(p);
							at=(double)(p*100/(a+p));
							//System.out.println(at);
							if(at>=75.0)
							{
								System.out.println(count);
								ch=1;
								break;
							}
						}
						if(ch==0)
						{
							System.out.println("-1");
						}
					}
				}
			}
		}
	    catch(NumberFormatException ne){
	    System.out.println("");
	    }
	}
}

