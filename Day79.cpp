/*
Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Constraints


Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
Explanation

We print the sum of the array's elements: .
*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(int ar_count, int* ar) {
    /*
     * Write your code here.
     */
int i,sum=0;
for(i=0;i<ar_count;i++)
{
    sum+=ar[i];
}
return sum;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* ar_count_endptr;
    char* ar_count_str = readline();
    int ar_count = strtol(ar_count_str, &ar_count_endptr, 10);

    if (ar_count_endptr == ar_count_str || *ar_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** ar_temp = split_string(readline());

    int ar[ar_count];

    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
        char* ar_item_endptr;
        char* ar_item_str = ar_temp[ar_itr];
        int ar_item = strtol(ar_item_str, &ar_item_endptr, 10);

        if (ar_item_endptr == ar_item_str || *ar_item_endptr != '\0') { exit(EXIT_FAILURE); }

        ar[ar_itr] = ar_item;
    }

    int result = simpleArraySum(ar_count, ar);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

