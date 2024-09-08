//Convert school’s name in abbreviated form
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

int main() {
    char school_name[100];

    printf("\nEnter the school's name = ");
    fgets(school_name, sizeof(school_name), stdin);

    printf("\nAbbreviation: ");
    abbreviate(school_name);
    printf("\n");
    return 0;
}

