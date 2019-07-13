/*
 * Little Jill jumbled up the order of the letters in our dictionary. Now, Jack uses this list to find the smallest lexicographical string that can be made out of this new order. Can you help him?

You are given a string P that denotes the new order of letters in the English dictionary. 

You need to print the smallest lexicographic string made from the given string S.

Constraints
1 <= T <= 1000

Length (P) = 26

1 <= length (S) <= 100

All characters in the string S, P are in lowercase

Input Format
The first line contains number of test cases T

The second line has the string P

The third line has the string S

Output
Print a single string in a new line for every test case giving the result

Test Case

Explanation
Example 1

Input

2

polikujmnhytgbvfredcxswqaz

abcd

qwryupcsfoghjkldezxvbintma

ativedoc

Output

bdca

codevita

Explanation

The transformed smallest lexicographical strings are in order they would be if order of letters are changed to string P
 */
package Coder;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class codevita1
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int x=Integer.parseInt(br.readLine());
		int i;
		for(i=1;i<=x;i++)
		{
			String P=br.readLine();
			String S=br.readLine();
			int l1,l2;
			l1=P.length();
			l2=S.length();
			String t="";
			int j,k;
			for(j=0;j<l1;j++)
			{
				for(k=0;k<l2;k++)
				{
					if(P.charAt(j)==S.charAt(k))
					{
						t+=P.charAt(j);
					}
				}
			}
			System.out.println(t);
		}
	}
}

