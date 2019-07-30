/*
 * Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just  character at  index in the string, and the remaining characters will occur the same number of times. Given a string , determine if it is valid. If so, return YES, otherwise return NO.

For example, if , it is a valid string because frequencies are . So is  because we can remove one  and have  of each character in the remaining string. If  however, the string is not valid as we can only remove  occurrence of . That would leave character frequencies of .

Function Description

Complete the isValid function in the editor below. It should return either the string YES or the string NO.

isValid has the following parameter(s):

s: a string
Input Format

A single string .

Constraints

Each character 
Output Format

Print YES if string  is valid, otherwise, print NO.

Sample Input 0

aabbcd
Sample Output 0

NO
Explanation 0

Given , we would need to remove two characters, both c and d  aabb or a and b  abcd, to make it valid. We are limited to removing only one character, so  is invalid.

Sample Input 1

aabbccddeefghi
Sample Output 1

NO
Explanation 1

Frequency counts for the letters are as follows:

{'a': 2, 'b': 2, 'c': 2, 'd': 2, 'e': 2, 'f': 1, 'g': 1, 'h': 1, 'i': 1}

There are two ways to make the valid string:

Remove  characters with a frequency of : .
Remove  characters of frequency : .
Neither of these is an option.

Sample Input 2

abcdefghhgfedecba
Sample Output 2

YES
Explanation 2

All characters occur twice except for  which occurs  times. We can delete one instance of  to have a valid string.
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String str=br.readLine();
        int i,j=0,l=str.length();
        int a[]=new int[26];
        char c;
        for(c='a';c<='z';c++)
        {
            int count=0;
            for(i=0;i<l;i++)
            {
                if(str.charAt(i)==c)
                {
                    count++;
                }
            }
            a[j++]=count;
        }
        int n=a[0];
        for(i=0;i<j;i++)
        {
            if(a[i]<n)
            {
                n=a[i];
            }
        }
        for(i=0;i<j;i++)
        {
            a[i]-=n;
        }
        boolean f=true;
        for(i=0;i<j;i++)
        {
            if(a[i]>1)
            {
                f=false;
            }
        }
        if(f)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
}
}

