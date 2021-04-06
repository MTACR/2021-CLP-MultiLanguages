#include <stdio.h>

int substring_(char* string, size_t* len, char* sub);

int main(int argc, char **argv)
{
	char file_name[30] = "input/test_1.txt";
	char to_comp[21];
	char* line = NULL;
	size_t len = 0;
	size_t read;
	FILE* file; 
	int oc_count = 0;
	
	if ((file = fopen(file_name, "r"))){   
		int i;
		char c;
		   
		for(i = 0; (c = getc(file)) != '\n'; i++){
			to_comp[i] = c;
		}
		to_comp[i] = 0;
		
		while ((read = getline(&line, &len, file)) != -1) {				
			oc_count += substring_(line, &read, to_comp); 
		}		
		
		printf("Total de ocorrencias: %d\n", oc_count);
	} else {
		printf("Oh, godddamnit");
	}
	
	fclose(file);
	return 0;
}

