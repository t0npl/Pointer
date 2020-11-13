#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void count(char*, int);
int main() {
	char x[30];
	printf("Input your string : ");
	scanf("%s", x);
	count(x, strlen(x));
	return 0;
}
void count(char* x, int y) {
	int num = 0;
	int upchar = 0;
	int lwchar = 0;
	int other = 0;
	for (int i = 0; i < y; i++) {
		if (*x > 47 && *x < 58) {
			num++;
		}
		else if (*x > 64 && *x < 91) {
			upchar++;
		}
		else if (*x > 96 && *x < 123) {
			lwchar++;
		}
		else {
			other++;
		}
		x++;
	}
	printf("This string have %d number\n", num);
	printf("uppercase %d character\n", upchar);
	printf("lowercase %d character\n", lwchar);
	printf("others %d character", other);
}