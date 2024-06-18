#include <stdio.h>
#include <ctype.h>

int main() {
	int frequencies [26] = {0};
	char line[100];
	printf("Enter lines of text. Press ENTER when finished: \n");
	while (fgets(line,100,stdin)) {
		if (line[0] == '\n' || line [0] == '\r') {
			break;
		}
		for (int i = 0; line[i] !='\0'; i++) {
			if (isalpha(line[i])) {
				frequencies[toupper(line[i]) -'A'] ++;
			}
		}
	}
	printf("Letter: Frequency\n");
	for(int i = 0; i<26; i ++) {
		printf ("%c: %3d\n", 'A' + i, frequencies[i]);
	}
	return 0;
}
