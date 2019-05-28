/*
A dummy palindromic string (DPS) is a string which can be converted into a palindrome by performing each of the following operations exactly once:

Permute the characters of the string in an arbitrary way.
Choose a valid index i and change the i-th character of the resulting string to a different character (not necessarily present in the original string).
You are given a string S. Find out whether it is a DPS.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.
Output
For each test case, print a single line containing the string "DPS" if the string is a DPS or "!DPS" if it is not (without quotes).

Constraints
1=T=102
1=|S|=104
S contains only lowercase English letters
Subtasks
Subtask #1 (30 points): S contains only the letter 'a'

Subtask #2 (70 points): original constraints

Example Input
4
code
xyxyxy
sad
baab
Example Output
!DPS
DPS
DPS
!DPS
Explanation
Example case 1: It is impossible to convert the string "code" into a palindrome by permuting and changing a single character.

Example case 2: We can permute the string to "xyxyyx" and then replace the 3-rd character by 'y'. We obtain the string "xyyyyx", which is a palindrome.

Example case 3: In the first operation, we can leave the string unchanged ("sad"), and then, we can replace its 1-st character by 'd'. We obtain "dad", which is a palindrome.

Example case 4: Even though the string is already a palindrome, it is impossible to obtain a palindrome again by permuting its characters and changing a character.
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
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
				x=x.toLowerCase();
				int l=x.length();
				boolean f=false;
				int i,count=0;
				String a,bx,dummy="";
				if(l%2==0)
				{
					a=x.substring(0,(l/2));
					bx=x.substring((l/2));
				}
				else
				{
					a=x.substring(0,(l/2));
					bx=x.substring((l/2)+1);
				}
				String b="";
				for(i=0;i<bx.length();i++)
				{
					b=bx.charAt(i)+b;
				}
				for(i=0;i<a.length();i++)
				{
					char c1=a.charAt(i);
					char c2=b.charAt(i);
					if(c1!=c2)
					{
						count++;
						dummy+=c2;
						f=true;
					}
					else
					{
						dummy+=c1;
					}
					if(count>=2)
					{
						break;
					}
				}
				if(f&&count==2)
				{
					System.out.println("!DPS");
				}
				else if(f)
				{
					System.out.println("DPS");
				}
				else
				{
					System.out.println("!DPS");
				}
			}
		}
        catch(NumberFormatException ne){
        System.out.println("");
        }	
	}
}
