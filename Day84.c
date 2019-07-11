/*
Coders/programmers are the backbone of the new age society (though whether they themselves have a strong back bone is debatable :P). As some wise man said, a task stops being fun when someone starts paying you to do it and commands you. Similarly, though coding is quite fun, in a corporate setting, if the coders work continuously without breaks, they will soon get tired and bored.

You have data about the activities of a programmer over the month of April (which, in case you didn't know, has exactly 30 days). For each day, you know whether the programmer coded on that day or not. If the coder codes consecutively for more than 5 days, she gets bored. Given the activities of the programmer, tell whether she is always a happy person or whether she has gotten bored at some point. If she has been bored, you should support her by outputting "#coderlifematters", otherwise output "#allcodersarefun".

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T cases follow.

The only line of each test case contains 30 space separated boolean integers denoting whether the coder programmed on that day of the month or not. 1 signifies that she coded on that day, and a 0 denotes that she did not.

Output
For each test case, output in a single line "#coderlifematters" if the coder has been bored. If not, output "#allcodersarefun".

Constraints
1 = T = 1000
Example
Input
4
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 1 1 1 1 0 0 1 1 1 1 1 0 0 1 1 1 1 1 0 0 1 1 1 1 1 0 0 1 1
1 1 1 1 1 1 1 0 0 0 0 0 0 0 1 1 1 1 1 1 1 0 0 0 0 0 0 0 1 1

Output
#coderlifematters
#allcodersarefun
#allcodersarefun
#coderlifematters
Explanation
Testcase 1: The coder is working all days in the month. She is very bored.

Testcase 2: The coder didn't work any day during the month. We shouldn't call such a person a coder, but what matters is that she has a job and she is happy and we should chant #allcodersarefun

Testcase 3: This is a typical professional coder. She works hard for 5 days, takes a break for 2 days and then works again. She is happy, so why should we be worried, let us chant #allcodersarefun

Testcase 4: This seems like a curious case of a programmer, she works 7 days and rests 7 days. Even if she rests well, but as she works for more than 5 days consecutively, her life is still boring (as she doesn't get to party on weekends). So, we shall say #coderlifematters
*/
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
		int z[30];
		int j;
		for(j=0;j<30;j++)
		{
			scanf("%d",&z[j]);
		}
		int k=0,m=0;
		for(j=0;j<30;j++)
		{
			if(z[j]==1)
			{
				k++;
			}
			else if(z[j]==0)
			{
				m++;
				break;
			}
		}
		if(k>5)
		{
			printf("#coderlifematters\n");
		}
		else
		{
			printf("#allcodersarefun\n");
		}
	}
	return 0;
}
