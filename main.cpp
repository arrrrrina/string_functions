#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <cstddef>

size_t my_strlen(const char* str);
char* my_strcpy(char* dest, const char* src);
char* my_strchr(const char* str, int ch);
int my_strcmp(const char* s1, const char* s2);
char* my_strcat(char* dest, const char* src);

int main()
{
    const char str1[] = "Hello";
    char str2[] = "Maybe";
    const char str3[] = "Hello";

    printf("The result of my_strlen(): %d\n", my_strlen(str1));
    printf("The result of strlen(): %d\n\n", strlen(str1));

    printf("The result of my_strcpy(): %s\n", my_strcpy(str2, str1));
    char str4[] = "Maybe";
    printf("The result of strcpy(): %s\n\n", strcpy(str4, str1));

    printf("The result of my_strchr(): %c\n", *my_strchr(str2, 'H'));
    printf("The result of strchr(): %c\n\n", *strchr(str2, 'H'));

    printf("The result of my_strcmp(): %d\n", my_strcmp(str1, str3));
    printf("The result of strcmp(): %d\n\n", strcmp(str1, str3));

    printf("The result of my_strcmp(): %s\n", my_strcat(str2, str3));
    char str5[] = "Hello";
    printf("The result of strcmp(): %s\n\n", strcat(str5, str3));

    return 0;
}
