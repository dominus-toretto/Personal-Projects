#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *buffer;
    size_t size = 27;
    int i;
    char temp = 'A';
    if ((buffer = (char *)malloc(size)) == NULL)
    {                                               /*malloc was unable to allocate memory*/
        printf("Unable to allocate storage \n");
        exit(1);
    }
                                                    /*malloc allocate successfully and process string*/
    for (i = 0; i < 26; ++i)
    {
        buffer[i] = temp + i;
    }
    buffer[26] = '\0';
    printf("\n %s", buffer);
}