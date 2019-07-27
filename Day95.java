/*
You are given a string containing characters  and  only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, given the string , remove an  at positions  and  to make  in  deletions.

Function Description

Complete the alternatingCharacters function in the editor below. It must return an integer representing the minimum number of deletions to make the alternating string.

alternatingCharacters has the following parameter(s):

s: a string
Input Format

The first line contains an integer , the number of queries. 
The next  lines each contain a string .

Constraints

Each string  will consist only of characters  and 
Output Format

For each query, print the minimum number of deletions required on a new line.

Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
Sample Output

3
4
0
0
4
Explanation

The characters marked red are the ones that can be deleted so that the string doesn't have matching consecutive characters.

image
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
		int x;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		try {
		    x=Integer.parseInt(b.readLine());
		    int i;
		    for(i=0;i<x;i++)
		    {
		    	String a=br.readLine();
		    	int j,k;
		    	int c=0;
		    	for(j=0;j<a.length()-1;j++)
		    	{
		    		if(a.charAt(j)==a.charAt(j+1))
		    		{
		    			c++;
					}
				}
				System.out.println(c);
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}
