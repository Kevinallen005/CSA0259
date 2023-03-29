

#include <stdio.h>


int main()
{
    char text[30]; 
    int i;
    int count= 0;

    printf("Enter any string: ");
    gets(text);


    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }

    printf("Length of '%s' = %d", text, count);

    return 0;
}
