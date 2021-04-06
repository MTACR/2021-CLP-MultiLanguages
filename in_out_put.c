#include <stdio.h>
#include <stdlib.h>

int substring(char *string, size_t *len, char *sub);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Insira uma entrada\n");
		exit(0);
	}
	char to_comp[21];
	char *line = NULL;
	size_t len = 0;
	size_t read;
	FILE *file;
	int oc_count = 0;

	if ((file = fopen(argv[1], "r")))
	{
		int i;
		char c;

		for (i = 0; (c = getc(file)) != '\n' && c != '\r' && c != ' '; i++)
		{
			to_comp[i] = c;
		}
		to_comp[i] = 0;

		while ((read = getline(&line, &len, file)) != -1)
		{
			oc_count += substring(line, &read, to_comp);
		}

		printf("Total de ocorrencias: %d\n", oc_count);
	}
	else
	{
		printf("Oh, godddamnit");
	}

	fclose(file);
	return 0;
}
