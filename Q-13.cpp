//Find character value from ascii
#include <stdio.h>
int main() 
{
    char character;
    
    printf("\n Enter a character: ");
    scanf("%c", &character);
    

    if (character)
	{
        printf("\n Error: You entered a number. Please enter a character.\n");
    } 
	else 
	{
        
        printf("\n The ASCII value of '%c' is: %d\n", character, character);
    }
    
    return 0;
}


