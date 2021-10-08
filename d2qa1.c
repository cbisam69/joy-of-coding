#include<stdio.h>

int main() {
	int age;

	printf("Enter your age\n");
	scanf("%d", &age);

	(age >= 18) ? printf("You are eligible to vote") : printf(" You are not eligible for voting");

	return 0;
}