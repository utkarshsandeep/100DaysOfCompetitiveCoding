/*
Objective 
Today, we're learning about the Array data structure. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

Input Format

The first line contains an integer,  (the size of our array). 
The second line contains  space-separated integers describing array 's elements.

Constraints

, where  is the  integer in the array.
Output Format

Print the elements of array  in reverse order as a single line of space-separated numbers.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
*/
#include <stdio.h>

int main() {
  int n, k;
  scanf("%d", &n);
  int b[n];
  for (k = 0; k < n; k++) {
    scanf("%d", &b[k]);
  }
  int a[n];
  for (k = 0; k < n; k++) {
    a[k] = b[n - k - 1];
  }
  for (k = 0; k < n; k++) {
    printf("%d ", a[k]);
  }
  return 0;
}
