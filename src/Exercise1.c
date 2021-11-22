/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
int thousand,hundred;
	if(n>=1000){
		thousand=n/1000;
		switch (thousand){
		case 1:
			printf("one");
		break;
		case 2:
			printf("two");
		break;
		case 3:
			printf("three");
		break;
		case 4:
			printf("four");
		break;
		case 5:
			printf("five");
		break;
		case 6:
			printf("six");
		break;
		case 7:
			printf("seven");
		break;
		case 8:
			printf("eight");
		break;
		case 9:
			printf("nine");
		break; }
		printf(" thousand ");
		n = n - (thousand*1000);
	}
	if(n >= 100 && n < 1000){
		hundred = n/100;
		switch (hundred){
		case 1:
			printf("one");
		break;
		case 2:
			printf("two");
		break;
		case 3:
			printf("three");
		break;
		case 4:
			printf("four");
		break;
		case 5:
			printf("five");
		break;
		case 6:
			printf("six");
		break;
		case 7:
			printf("seven");
		break;
		case 8:
			printf("eight");
		break;
		case 9:
			printf("nine");
		break; }
		printf(" hundred ");
		n = n - (hundred*100);
	}
	if (n >= 20 && n < 100){
		if(n >= 90){
			printf("ninety ");
			n = n - 90;
		}
		if(n >= 80){
			printf("eighty ");
			n = n - 80;
		}
		if(n >= 70){
			printf("seventy ");
			n = n - 70;
		}
		if(n >= 60){
			printf("sixty ");
			n = n - 60;
		}
		if (n >= 50){
			printf("fifty");
			n = n - 50;
		}
		if(n >= 40){
			printf("fourty ");
			n = n - 40;
		}
		if(n >= 30){
			printf("thirty ");
			n = n - 30;
		}
		if(n >= 20){
			printf("twenty ");
			n = n - 20;
		}
	}	
	
	if(n>=0 && n<10){
		switch(n){
			case 1:
				printf("one");
			break;
			case 2:
				printf("two");
			break;
			case 3:
				printf("three");
			break;
			case 4:
				printf("four");
			break;
			case 5:
				printf("five");
			break;
			case 6:
				printf("six");
			break;
			case 7:
				printf("seven");
			break;
			case 8:
				printf("eight");
			break;
			case 9:
				printf("nine");
			break;
		}
}
	if(n>=10&&n<20){
		switch (n){
		case 10:
			printf("ten");
		break;
		case 11:
			printf("eleven");
		break;
		case 12:
			printf("twelve");
		break;
		case 13:
			printf("thirteen");
		break;
		case 14:
			printf("fourteen");
		break;
		case 15:
			printf("fifteen");
		break;
		case 16:
			printf("sixteen");
		break;
		case 17:
			printf("seventeen");
		break;
		case 18:
			printf("eighteen");
		break;
		case 19:
			printf("nineteen");
		break;
	}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
