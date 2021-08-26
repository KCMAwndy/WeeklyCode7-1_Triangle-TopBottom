#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0, i, j;
	printf("Enter number : ");
	scanf("%d", &num);
	int k = num * 2;
	for (i = 1; i < num * 2; i++) {
		if (i < num) {
			for (j = 1; j < i; j++) {
				printf(" ");
			}
			for (j = 1; j < k; j++) {
				printf("*");
			}
			k -= 2;
			if (i != num)	printf("\n");
		}
		else {
			for (j = num * 2 - i; j > 1; j--) {
				printf(" ");
			}
			for (j = 1; j < k; j++) {
				printf("*");
			}
			k += 2;
			printf("\n");
		}
	}
	return 0;
}