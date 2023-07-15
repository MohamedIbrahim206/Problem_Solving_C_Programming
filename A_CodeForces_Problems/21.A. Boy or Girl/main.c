#include<stdio.h>

int main() {
	int uniqe[26] = { 0 };
	char str[102];
	fgets(str, sizeof(str), stdin);
	int i = 0;
	int count=0, index;
	while (str[i] != '\0') { //wjmzbmr
		index = (int)(str[i]-'a');
		if (uniqe[index] == 0) {
			count++;
			uniqe[index] = 1;
		}
		i++;
	}
	if (count % 2 == 0) {
		printf("CHAT WITH HER!");
	}
	else {
		printf("IGNORE HIM!");
	}
	return 0;
}
