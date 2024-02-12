#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000];
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 'A' - 'a';
	}
	printf("String after toggle \n");
	printf("%s\n", str);
	return 0;
}
