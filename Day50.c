/*
In this problem, you need to print the pattern of the following form containing the numbers from  to .

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Output Format

Print the pattern mentioned in the problem statement.

Sample Input 0

2
Sample Output 0

2 2 2 
2 1 2 
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
      int i,j,k,l,m;
      for(i=n;i>=1;i--)
      {
          for(j=n;j>=i;j--)
          {
              printf("%d ",j);
        }
        for(k=n-1;k>n-i;k--)
        {
            printf("%d ",i);
        }
        for(l=2;l<=i;l++)
        {
            printf("%d ",i);
        }
        for(m=i+1;m<=n;m++)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(k=2;k<=i;k++)
        {
            printf("%d ",i);
        }
        for(l=2;l<=i;l++)
        {
            printf("%d ",i);
        }
        for(m=i+1;m<=n;m++)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}
