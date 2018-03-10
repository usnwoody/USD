#include <stdio.h>


int main()
{
	char letters[32];
	int key = 32;
	printf("Enter uppercase letters to be converted to lowercase:\n");
	fgets(letters, 31, stdin);
	int i = 0;
	for (i = 0; i < 31; i++)
	letters[i] = letters[i] + key;
	printf("%s", letters);

	getchar();
	getchar();
	return 0;

}