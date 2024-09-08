//Convert country’s name in abbreviate form
#include <stdio.h>

void abbreviate(char str[]) 
{
    int i = 0;

    if (str[i] != ' ') 
	{
        printf("%c", str[i]);
    }
    while (str[i] != '\0') 
	{
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') 
		{
            printf("%c", str[i + 1]);
        }
        i++;
    }
}
int main() 
{
    char country_name[100];
    printf("Enter the country's name: ");
    fgets(country_name, sizeof(country_name), stdin);

    printf("Abbreviation: ");
    abbreviate(country_name);
    printf("\n");

    return 0;
}

