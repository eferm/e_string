#ifndef E_STRING_H
#define E_STRING_H

#include <stdlib.h>


//////////////////////////////// COPY AND MERGE ////////////////////////////////

/* copies a string from one location to another */
char *e_strcpy(char *dest, const char *src);

/* copies up to n bytes of a string from one location to another */
char *e_strncpy(char *dest, const char *src, size_t n);

/* appends the string suffix to str */
char *e_strcat(char *str, const char *suffix);

/* appends at most n characters of the string suffix to str */
char *e_strncat(char *str, const char *suffix, size_t n);


//////////////////////////////////// COMPARE ///////////////////////////////////

/* compares two strings numerically */
int e_strcmp(const char *str1, const char *str2);

/* compares up to the first n bytes of two strings numerically */
int e_strncmp(const char *str1, const char *str2, size_t n);


//////////////////////////////////// LENGTH ////////////////////////////////////

/* finds the length of a C string */
size_t e_strlen(const char *str);


//////////////////////////////////// SEARCH ////////////////////////////////////

/* locates a character in a string, searching from the beginning */
char *e_strchr(const char *str, int c);

/* locates a character in a string, searching from the end */
char *e_strrchr(const char *str, int c);

/* finds the first occurrence of the string "needle" in the longer 
   string "haystack". */
char *e_strstr(const char *haystack, const char *needle);

#endif