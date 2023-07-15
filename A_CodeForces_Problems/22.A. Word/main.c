#include<stdio.h>
#include<ctype.h>

int main() {

	char str[110];
	int i = 0;
	int upper_count=0, lower_count = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
		if (isupper(str[i])) {
			upper_count++;
		}
		else if(islower(str[i])) {
			lower_count++;
		}
		i++;

	}
	if (upper_count > lower_count) {
		for (int i = 0; str[i]!='\0'; i++)
		{
			str[i] = toupper(str[i]);
		}

	}
	else if (upper_count < lower_count) {
		for (int i = 0; str[i] != '\0'; i++)
		{
			str[i] = tolower(str[i]);
		}
	}
	else  {
		for (int i = 0; str[i] != '\0'; i++)
		{
			str[i] = tolower(str[i]);
		}
	}
	printf("%s", str);
	return 0;
}
