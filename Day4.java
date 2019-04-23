/**
Write a program, which takes an integer N and if the number is less than 10 then display "What an obedient servant you are!" otherwise print "-1".

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Output the given string or -1 depending on conditions.

Constraints
1 = T = 1000
-20 = N = 20

Example
Input
3 
1
12
-5
Output
What an obedient servant you are!
-1
What an obedient servant you are!
*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws Exception
	{
		// your code goes here
		/* package codechef; // don't place package name! */
		int x;
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
		try {
		x=Integer.parseInt(b.readLine());
        int i,p;
        for(i=1;i<=x;i++)
        {
            p=Integer.parseInt(b.readLine());
            if(p<10)
            {
                System.out.println("What an obedient servant you are!");
            }
            else{
                System.out.println("-1");
            }
        }
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }

	}
}

