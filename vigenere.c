#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{


	char key[100];
	printf("Input key with alphabets only: ");
	scanf("%s\n", key);
    
    char word[200];
	printf("Input word to encrypt: ");
	scanf("%[^\n]%*c\n", word);
	


	 char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	 'w', 'x', 'y', 'z'};

	 int index[strlen(key)];


	 for (int i = 0; i < strlen(key); i++)
	 {

	 	for (int j = 0; j < 26 ; j++)
	 	{
	 		if(key[i % (strlen(key))] == alphabets[j])
	 		{
	 			index[i] = j;
	 			printf("%d\n", index[i]);
	 		}
	 	}
	 

	 }

	 int current_index = 0;

	 for (int m = 0; m < strlen(word); m++)
	 {
	 	if (word[m] != ' ')
     	{
     		for (int k = 0; k < 26; k++)
		 	{
		 		if (word[m] == alphabets[k])
		 		{
		 			printf("%c", alphabets[(k + (index[current_index])) % 26]);
		 		}
		 		
		 	}
     		current_index = (current_index + 1)%strlen(key);
     	} else{ 
		 	printf(" ");
	 	}
	 }
     printf("\n");


	}

	