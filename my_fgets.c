#include <stdio.h>

void my_fgets(char *s, int n, FILE *fp)
{
	int c;
	while((c=fgetc(stdin)) != EOF)
	{
		putchar(c);
	}
}

int main()
{
	char s[0];
	my_fgets(s, 0, stdin);
	//printf("[%s]", s);
	//prinft("%d", s[0]);
	return 0;
}
