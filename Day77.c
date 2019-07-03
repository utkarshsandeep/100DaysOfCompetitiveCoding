/*
Martha is interviewing at Subway. One of the rounds of the interview requires her to cut a bread of size  into smaller identical pieces such that each piece is a square having maximum possible side length with no left over piece of bread.

Input Format

The first line contains an integer .  lines follow. Each line contains two space separated integers  and  which denote length and breadth of the bread.

Constraints

Output Format

 lines, each containing an integer that denotes the number of squares of maximum size, when the bread is cut as per the given condition.

Sample Input 0

2
2 2
6 9
Sample Output 0

1
6
Explanation 0

The 1st testcase has a bread whose original dimensions are , the bread is uncut and is a square. Hence the answer is 1. 
The 2nd testcase has a bread of size . We can cut it into 54 squares of size , 6 of size . For other sizes we will have leftovers. Hence, the number of squares of maximum size that can be cut is 6.
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
 * Complete the restaurant function below.
 */
int restaurant(int l, int b) {
    /*
     * Write your code here.
     */
    int i,x=l*b,p=0;
    for(i=1;i<=x;i++)
    {
        if(x%(i*i)==0)
        {
            p=x/(i*i);
        }
    }
    return p;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** lb = split_string(readline());

        char* l_endptr;
        char* l_str = lb[0];
        int l = strtol(l_str, &l_endptr, 10);

        if (l_endptr == l_str || *l_endptr != '\0') { exit(EXIT_FAILURE); }

        char* b_endptr;
        char* b_str = lb[1];
        int b = strtol(b_str, &b_endptr, 10);

        if (b_endptr == b_str || *b_endptr != '\0') { exit(EXIT_FAILURE); }

        int result = restaurant(l, b);

        fprintf(fptr, "%d\n", result);
    }

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

