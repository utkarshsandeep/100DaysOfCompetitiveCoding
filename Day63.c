/*
Consider two points,  and . We consider the inversion or point reflection, , of point across point  to be a  rotation of point  around .

Given  sets of points  and , find  for each pair of points and print two space-separated integers denoting the respective values of  and  on a new line.

Input Format

The first line contains an integer, , denoting the number of sets of points. 
Each of the  subsequent lines contains four space-separated integers describing the respective values of , , , and defining points  and .

Constraints

Output Format

For each pair of points  and , print the corresponding respective values of  and  as two space-separated integers on a new line.

Sample Input

2
0 0 1 1
1 1 2 2
Sample Output

2 2
3 3
Explanation

The graphs below depict points , , and  for the  points given as Sample Input:

find-point-0011.png 
Thus, we print  and  as 2 2 on a new line.
find-point-1122.png 
Thus, we print  and  as 3 3 on a new line.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    int i,z,k;
    int p1,q1,p2,q2,r1,r2;
    for(i=1;i<=x;i++)
    {
        scanf("%d%d%d%d",&p1,&p2,&q1,&q2);
        r1=2*q1-p1;
        r2=2*q2-p2;
        printf("%d %d\n",r1,r2);
    }
}
