// generates all permutations for a list of n unique characters

#include<stdio.h>
#include<string.h>

#define LEN 100

int used[LEN];
char out[LEN];
char str[LEN];
int n;
long count;

void permut(int r) {
	int i;

	if(r >= n) {
		printf("%s\n", out);
		count++;
		return;
	}

	for(i = 0; i < n; i++) {
		if(used[i])
			continue;
		used[i] = 1;
		out[r] = str[i];
		permut(r + 1);
		out[r] = 0;
		used[i] = 0;
	}
}

int main() {
	putchar('\n');
	printf("Please enter a string : ");
	scanf("%s", str);
	n = strlen(str);
	permut(0);
	printf("Total %ld\n", count);
	return 0;
}
