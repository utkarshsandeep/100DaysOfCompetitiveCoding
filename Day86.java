/*
 * In the Indian Ocean, there are several small islands. A war ship is stationed in the ocean and wants to find how many of these islands are within its striking power. For simplicity, the islands are all assumed to have square shapes and again, the curvature of the earth can be ignored. The coordinates of two opposite corners of the islands are given and the position of the ship is also given. You need to find the islands in the increasing sequence of their distances from the ship. The distance is the shortest distance – the distance of the nearest point on the island boundary from the ship. Use Manhattan Distance, i.e. distance between 2 points (x1,y1) and (x2,y2) is |x1-x2| + |y1-y2|.

Constraints
1 <= N <= 100000.

-10^9 <= x1i, y1i, x2i,y2i <= 10^9.

Input Format
First line contains single integer N denoting the number of islands.

Next N lines contain 4 integers separated by space denoting the coordinates of the opposite corners of the islands (x1i, y1i) & (x2i,y2i). (1 <= i <= N)

Islands are numbered 1, 2, …, N.

The final line contains 2 integer separated by space denoting the coordinates of the warship.

Output
N integers separated by space each integer denoting the index of island sorted by distance from warship in non-decreasing order.

If 2 islands are at the same distance from warship, rank them according to their index.

Test Case

Explanation
Example 1

Input

2

0 0 1 1

0 3 1 4

0 0

Output

1 2

Explanation



Example 2

3

1 1 0 0

1 2 2 3

3 0 4 1

0 4

Output

2 1 3

Explanation
 */
package Coder;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class codevita2
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int i;
		int cor[][]=new int[4][n];
		for(i=0;i<n;i++)
		{
			String A=br.readLine();
			String B[]=A.trim().split("\\s+");
			int j;
			for(j=0;j<B.length;j++)
			{
				cor[j][i]=Integer.parseInt(B[j]);
			}
		}
		int war[]=new int[2];
		String C=br.readLine();
		String B[]=C.trim().split("\\s+");
		int j;
		for(j=0;j<B.length;j++)
		{
			war[j]=Integer.parseInt(B[j]);
		}
		int dis[]=new int[n];
		for(i=0;i<n;i++)
		{
			dis[i]=999;
		}
		for(i=0;i<n;i++)
		{
			int d=Math.abs((war[0]-cor[0][i]))+Math.abs((war[1]-cor[1][i]));
			if(dis[i]>d)
			{
				dis[i]=d;
				int dz=Math.abs((war[0]-cor[2][i]))+Math.abs((war[1]-cor[3][i]));
				if(dis[i]>dz)
				{
					dis[i]=dz;
				}
			}
		}
		int ds[]=new int[n];
		for(i=0;i<n;i++)
		{
			ds[i]=i+1;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(dis[j]>dis[j+1])
				{
					int t=dis[j];
					dis[j]=dis[j+1];
					dis[j+1]=t;
					int m=ds[j];
					ds[j]=ds[j+1];
					ds[j+1]=m;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			System.out.print(ds[i]+" ");
		}
	}
}

