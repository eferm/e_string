#include "e_string.h"
#include <stdlib.h>

char *e_strcpy(char *dest, const char *src)
{
	char *p = dest;
	while (*p++ = *src++);
	return dest;
}

char *e_strncpy(char *dest, const char *src, size_t n)
{
	char *p = dest;
	for (--n; (*p++ = *src++) && n; n--);
	return dest;
}

char *e_strcat(char *str, const char *suffix)
{
	char *p = str;
	while (*p++); // skip str
	for (--p; *p++ = *suffix++; ); // append suffix
	return str;
}

char *e_strncat(char *str, const char *suffix, size_t n)
{
	int i;
	char *p = str;
	for (i = 0; *p++; i++); // skip str
	for (i, --p; i < n && (*p++ = *suffix++); i++); // append suffix
	return str;
}

int e_strcmp(const char *str1, const char *str2)
{
	for ( ; *str1 == *str2 && *str1 != '\0'; str1++, str2++);
	return *str1 - *str2;
}

int e_strncmp(const char *str1, const char *str2, size_t n)
{
	for (--n; n > 0 && *str1 == *str2 && *str1 != '\0'; str1++, str2++, n--);
	return *str1 - *str2;
}

size_t e_strlen(const char *str)
{
	size_t i;
	for (i = 0; *str++; i++);
	return i;
}

char *e_strchr(const char *str, int c)
{
	for (; *str != c; str++);
	return (char *) str;
}

char *e_strrchr(const char *str, int c)
{
	while (*str++); // skip to end
	for (--str; *str != c; str--); // search for c backwards
	return (char *) str;
}

char *e_strstr(const char *haystack, const char *needle)
{
	for (; *haystack; haystack++)
		if (!e_strncmp(haystack, needle, e_strlen(needle))|| !e_strlen(needle))
			return (char *) haystack;
	return 0;
}
