#include <stdio.h>

encrypt(char str[], int key);
decrypt(char str[], int key);
input(char str[]);



char main()
{
	int key = 10;
	char str[32];
	encrypted(str);
	decrypted(str);
	printf("Please enter your message:\n");
	input(str);
	encrypt(str, key);
	decrypt(str, key);

	getchar();
	getchar();
	return 0;
}

encrypt(char str[], int key)
{
	int i = 0;
	for (i = 0; i < 31; i++)
		str[i] = str[i] ^ key;
	printf("%s", str);
}

decrypt(char str[], int key)
{
	int i = 0;
	for (i = 0; i < 31; i++)
		str[i] = str[i] ^ key;
	printf("\n%s", str);
}

input(char str[])
{
	fgets(str, 32, stdin);
}

