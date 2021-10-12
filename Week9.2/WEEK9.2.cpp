#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char str[50];
	int count[26];
	int ch;

	for (int i = 0 ; i < 26; i++) {
		count[i] = 0;
	}
	printf("input string : ");
	scanf("%s", str);

	for (int j = 0; j <= strlen(str); j++) {
		ch = 65;
		for (int x = 0; x < 26; x++) {
			if (str[j] == ch || str[j] == ch + 32) { count[x]++; }
			ch++;
		}
	}
	ch = 65;
	for (int k = 0; k < 26; k++) {
		printf("%c = %d\n", ch, count[k]);
		ch++;
	}
}