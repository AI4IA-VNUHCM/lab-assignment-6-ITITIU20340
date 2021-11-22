/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void Ex3(char *str){
	//Your codes here
	int i;
	char max [100] ,min[100];
	for (i = 0 ; i < strlen(str); i++){
			if (strlen(max) < strlen(str)){
				strcpy(max, str);
			}
			if (strlen(min) > strlen(str)){
				strcpy(min, str);
			}
		}
    printf("Shortest word: %s\n", min);
	printf("Longest word: %s", max);

}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
