/**
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains a character.

Output
Display the Ship Class depending on ID.

Constraints
1 = T = 1000
Example
Input

3 
B
c
D

Output
BattleShip
Cruiser
Destroyer
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,k;
	char z;
	for(i=0;i<x;i++)
	{
	    scanf("%c",&z);
	    if(z=='B'||z=='b')
	    {
	    	printf("BattleShip");
		}
		else if(z=='C'||z=='c')
	    {
	    	printf("Cruiser");
		}
		else if(z=='D'||z=='d')
	    {
	    	printf("Destroyer");
		}
		else if(z=='F'||z=='f')
	    {
	    	printf("Frigate");
		}
		else
		{
			printf("")
		}
	}
}
