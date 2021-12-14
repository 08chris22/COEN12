#include <stdlib.h>
#include <stdio.h>
#include <string.h> //Including the necessary libraries to allow the code to run.

#define MAX_WORD_LENGTH 30

void count (char *file_name);

int main (int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("No File.\n");
		return 1;
	}

	count (argv[1]);  //Calling the function that will count how many words are in a file.
}

void count (char *file_name)
{
	FILE *fp;
	int counter = 0;
	char fileName[MAX_WORD_LENGTH];
	
	fp = fopen (file_name, "r");
	
	if (fp == NULL)    //What the function will do if the file is blank.
	{
		printf("No File.\n");
		return;
	}
		
	while (fscanf(fp, "%s", fileName) == 1)    //Setting up the condition to count the words.
	{
		counter++;          //Counting the words.
	}
	
	fclose(fp);
	printf("%d Words\n", counter);    //Outputing to the user.
	return;
}
