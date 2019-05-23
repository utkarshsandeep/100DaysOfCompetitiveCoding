/* package codechef; // don't place package name! */
/*
Not everyone probably knows that Chef has younder brother Jeff. Currently Jeff learns to read.

He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.

Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!

Input
The first line of the input contains a lowercase Latin letter string S, consisting of the letters Jeff can read. Every letter will appear in S no more than once.

The second line of the input contains an integer N denoting the number of words in the book.

Each of the following N lines contains a single lowecase Latin letter string Wi, denoting the ith word in the book.

Output
For each of the words, output "Yes" (without quotes) in case Jeff can read it, and "No" (without quotes) otherwise.

Constraints
1 = |S| = 26
1 = N = 1000
1 = |Wi| = 12
Each letter will appear in S no more than once.
S, Wi consist only of lowercase Latin letters.
Subtasks
Subtask #1 (31 point): |S| = 1, i.e. Jeff knows only one letter.
Subtask #2 (69 point)	: no additional constraints
Example
Input:
act
2
cat
dog

Output:
Yes
No
Explanation
The first word can be read.

The second word contains the letters d, o and g that aren't known by Jeff.
*/
import java.util.*;
import java.lang.*;
import java.io.*;

class Permutation
{ 
    static String a[]=new String[1000];
    static int count=0;
    public static void main(String[] args)throws IOException
    { 
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        try{
        String str =br.readLine(); 
        int n = str.length(); 
        permute(str, 0, n-1); 
        int i,j,x;
        x=Integer.parseInt(br.readLine());
        for(j=1;j<=x;j++)
        {
            int c=0;
            String b=br.readLine(); 
            for(i=0;i<count;i++)
            {
                if(a[i].equalsIgnoreCase(b))
                {
                    System.out.println("Yes");
                    break;
                }
                else
                {
                    c++;
                }
            }
            if(c==count)
            {
                System.out.println("No");
            }
        }
        }
        catch(Exception e)
        {
            System.out.println();
        }
    } 
    private static void permute(String str, int l, int r) 
    { 
        if (l == r) 
            a[count++]=str; 
        else
        { 
            for (int i = l; i <= r; i++) 
            { 
                str = swap(str,l,i); 
                permute(str, l+1, r); 
                str = swap(str,l,i); 
            } 
        } 
    } 
  
    public static String swap(String a, int i, int j) 
    { 
        char temp; 
        char[] charArray = a.toCharArray(); 
        temp = charArray[i] ; 
        charArray[i] = charArray[j]; 
        charArray[j] = temp; 
        return String.valueOf(charArray); 
    } 
  
} 

