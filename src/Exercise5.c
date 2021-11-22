/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int i,cor=0;
	for (i=0;i<strlen(str);i++){
		if (str[i]=='{' && str[strlen(str)-i-1]!='}') cor=1;
		if (str[i]=='[' && str[strlen(str)-i-1]!=']') cor=1;
		if (str[i]=='(' && str[strlen(str)-i-1]!=')') cor=1;
	}
	if (cor==0){printf("Valid!");}
	if (cor==1){printf("Invalid!");}

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
