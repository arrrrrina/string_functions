#include <stdio.h>

size_t my_strlen(const char* str)
{
    size_t len = 0;

    for(; *str != '\0'; str++,len++)
        ;

    return len;
}

char* my_strcpy(char* dest, const char* src)
{
    char* new_string = dest;
    for(; *src != '\0'; src++, dest++)
    {
        *dest = *src;
    }
    *dest = *src;

    return new_string;
}

const char* my_strchr(const char* str, int ch)
{
    const char symb = char(ch);
    const char* first_occur = 0;

    for(; *str != '\0'; str++)
        {
            if(*str == symb)

            return str;
        }

    return first_occur;
}

int my_strcmp(const char* s1, const char* s2)
{
    for(; *s1 == *s2; s1++, s2++)
        ;
        if(*(s1-1) == '\0')
            return 0;
    return *s1 - *s2;
}

char* my_strcat(char* dest, const char* src)
{
    char* ptr = dest;

    while(*dest != '\0')
        dest++;

    for(; *src != '\0'; dest++, src++)
    {
        *dest = *src;
    }

    *dest = '\0';

    return ptr;
}



