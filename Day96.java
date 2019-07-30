/*A string is said to be a special string if either of two conditions is met:

All of the characters are the same, e.g. aaa.
All characters except the middle one are the same, e.g. aadaa.
A special substring is any substring of a string which meets one of those criteria. Given a string, determine how many special substrings can be formed from it.

For example, given the string , we have the following special substrings: .

Function Description

Complete the substrCount function in the editor below. It should return an integer representing the number of special substrings that can be formed from the given string.

substrCount has the following parameter(s):

n: an integer, the length of string s
s: a string
Input Format

The first line contains an integer, , the length of . 
The second line contains the string .

Constraints

 
Each character of the string is a lowercase alphabet, .

Output Format

Print a single line containing the count of total special substrings.

Sample Input 0

5
asasd
Sample Output 0

7 
Explanation 0

The special palindromic substrings of  are 

Sample Input 1

7
abcbaba
Sample Output 1

10 
Explanation 1

The special palindromic substrings of  are 

Sample Input 2

4
aaaa
Sample Output 2

10
Explanation 2

The special palindromic substrings of  are 
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Solution
{
    public static boolean palin(String x)
    {
        if(x.length()==1)
        {
            return true;
        }
        else
        {
            int i;
        String y="";
        for(i=0;i<x.length();i++)
        {
            y=x.charAt(i)+y;
        }
        if(x.equals(y))
        return true;
        else 
        return false;
        }
    }
    public static void main (String[] args) throws Exception
    {
        // your code goes here
        int x;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        x=Integer.parseInt(br.readLine());
        String a=br.readLine();
        int l=a.length();
        int i,j,count=0;
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l+1;j++)
            {
                String strs=a.substring(i,j);
                if(palin(strs))
                count++;
            }
        }
        System.out.println(count);    
    }
}

