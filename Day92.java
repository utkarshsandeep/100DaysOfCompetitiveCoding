/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in  hour format
Input Format

A single string  containing a time in -hour clock format (i.e.:  or ), where  and .

Constraints

All input times are valid
Output Format

Convert and print the given time in -hour format, where .

Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Solution
{
    public static void main (String[] args) throws Exception
    {
        // your code goes here
        /* package codechef; // don't place package name! */
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        try {
        String x=br.readLine();
        char c=x.charAt(8);
        String y="";
        if(c=='A')
        {
            char z=x.charAt(0);
            if(z=='1')
            {
                int a=Integer.parseInt(x.substring(0,2));
                y="00"+x.substring(2,8);
            }
            else
            {
                y=x.substring(0,8);
            }
            
        }
        else
        {
            char z=x.charAt(0),z1=x.charAt(1);
            if(z1=='2'&&z=='1')
            {
                int a=Integer.parseInt(x.substring(0,2));
                y="12"+x.substring(2,8);
            }
            else
            {
                int a=Integer.parseInt(x.substring(0,2));
                y=(a+12)+x.substring(2,8);
            }
        }
        System.out.println(y);
        }
        catch(NumberFormatException ne){
        System.out.println("");
        }

    }
}

