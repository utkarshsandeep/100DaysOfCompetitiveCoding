/*
Objective 
Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation.

Input Format

A single integer, .

Constraints

Output Format

Print a single base- integer denoting the maximum number of consecutive 's in the binary representation of .

Sample Input 1

5
Sample Output 1

1
Sample Input 2

13
Sample Output 2

2
Explanation

Sample Case 1: 
The binary representation of  is , so the maximum number of consecutive 's is .

Sample Case 2: 
The binary representation of  is , so the maximum number of consecutive 's is .
*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Solution
{
    public static void main (String[] args) throws Exception
    {
        // your code goes here
        int x;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        try {
            x=Integer.parseInt(br.readLine());
            String a="";
            int b=x;
            while(b!=0)
            {
                int r=b%2;
                a=r+a;
                b=b/2;
            }
            int l=a.length();
            //System.out.println(a);
            int i,j,max=1,count=1;
            for(i=0;i<l;i++)
            {
                for(j=i+1;j<l;j++)
                {
                    if(a.charAt(i)=='1'&&a.charAt(j)=='1')
                    {
                        count++;
                    }
                    else
                    {
                        if(max<=count)
                        {
                            max=count;
                            count=0;
                        }
                    }
                }
            }
            System.out.println(max);
        }
        catch(NumberFormatException ne){
        System.out.println("");
        }
            
        }
}

