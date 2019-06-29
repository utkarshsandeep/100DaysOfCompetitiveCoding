/*
Sum of squares
That was awesome!

Write a program to print the sum of squares of the elements of an array of size N. N can be any integer between 1 and 100. 

Instructions:

We have defined an integer variable N for you.
We have provided the code to get the input for variable N.
We have defined an integer array .
We have provided the code to get the input for the array elements.
You have to write the logic to add the squares of array elements.
Print the sum.
Sample Input 
N = 5 
Array = 4 7 2 8 5

Sample Output: 
158
*/
#include <stdio.h>
 
int main(void) {
    
	int N, i;
	scanf("%d", &N);
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	scanf("%d", &numArray[i]);
	}
	
	int sum = 0;
	// Write here the logic to add these integers:
    for (i=0; i<4; i++) {
    	sum+=(numArray[i]*numArray[i]);
	}
    
    
   
	printf("%d\n",sum);  // Print the sum
    
	return 0;
}
