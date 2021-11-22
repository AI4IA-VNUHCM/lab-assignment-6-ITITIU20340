/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	char *x;

    for (int i = 0; i<n; i++)
    {
        for (int j = i + 1; j<n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                x = str[j];
                str[j] = str[i];
                str[i] = x;
            }
        }

    }
	for (int i = 0; i < 4; i++)
    {
        printf("%s ", str[i]);
    }
    printf ("\n");
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
