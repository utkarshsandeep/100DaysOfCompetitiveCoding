import java.util.*;
import java.lang.*;
import java.io.*;

/*
Chef has a string S with length N. He needs to find the number of indices i (1=i=N-1) such that the i-th character of this string is a consonant and the i+1-th character is a vowel. However, he is busy, so he asks for your help.

Note: The letters 'a', 'e', 'i', 'o', 'u' are vowels; all other lowercase English letters are consonants.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N.
Output
For each test case, print a single line containing one integer ? the number of occurrences of a vowel immediately after a consonant.

Constraints
1=T=100
1=N=100
S contains only lowercase English letters
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
6
bazeci
3
abu
1
o
Example Output
3
1
0
Explanation
Example case 1: The vowel 'a' follows after the consonant 'b', 'e' follows after 'z' and 'i' follows after 'c', so the answer is 3.

Example case 2: The only vowel 'u' follows after 'b', so the answer is 1.
*/
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
	        	int l=Integer.parseInt(br.readLine());
				String x=br.readLine();
				l=x.length();
				x=x.toLowerCase();
				int i,count=0;
				for(i=0;i<l-1;i++)
				{
					char c=x.charAt(i);
					if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
					{
						continue;
					}
					else
					{
						char cx=x.charAt(i+1);
						if(cx=='a'||cx=='e'||cx=='i'||cx=='o'||cx=='u')
						{
							count++;
						}
					}
				}
				System.out.println(count);
			}
		}
		catch(NumberFormatException ne){
        System.out.println("");
        }	
	}
}
