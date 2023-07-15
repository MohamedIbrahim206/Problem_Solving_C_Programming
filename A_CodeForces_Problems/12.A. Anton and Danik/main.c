#include<stdio.h>

int main() {
	char str[100000];
	int n=0; // The number of games played
	int anton_wins = 0;
	int danik_wins = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		scanf("%c", &str[i]);
		if (str[i] == 'A') {
			anton_wins++;
		}
		else if(str[i]=='D')
		{
			danik_wins++;
		}

	}
	if (anton_wins > danik_wins) {
		printf("Anton");
	}
	else if(anton_wins < danik_wins) {
		printf("Danik");
	}
	else {
		printf("Friendship");

	}
	return 0;
}
