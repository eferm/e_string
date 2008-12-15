#import "e_string.h"
#import <stdio.h>
#import <stdlib.h>

int main()
{
	putchar('\n');
	
	printf("Testing e_strlen...\n");
	const char *str_strlen = "A 19 letter string.";
	printf(">> \"%s\"\n", str_strlen);
	int n_strlen = e_strlen(str_strlen);
	printf(">> Length: %d\n", n_strlen);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strcpy...\n");
	const char *src_strcpy = "hello";
	char *dest_strcpy = malloc(10);
	printf(">> \"%s\", \"%s\"\n", src_strcpy, dest_strcpy);
	dest_strcpy = e_strcpy(dest_strcpy, src_strcpy);
	printf(">> \"%s\", \"%s\"\n", src_strcpy, dest_strcpy);
	dest_strcpy = 0;
	free(dest_strcpy);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strncpy, n=3...\n");
	const char *src_strncpy = "hello";
	char *dest_strncpy = malloc(10);
	printf(">> \"%s\", \"%s\"\n", src_strncpy, dest_strncpy);
	dest_strncpy = e_strncpy(dest_strncpy, src_strncpy, 3);
	printf(">> \"%s\", \"%s\"\n", src_strncpy, dest_strncpy);
	dest_strncpy = 0;
	free(dest_strncpy);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strcat...\n");
	char *str_strcat = malloc(11);
	str_strcat = e_strcpy(str_strcat, "good");
	const char *suffix_strcat = " night";
	printf(">> \"%s\", \"%s\"\n", str_strcat, suffix_strcat);
	str_strcat = e_strcat(str_strcat, suffix_strcat);
	printf(">> \"%s\", \"%s\"\n", str_strcat, suffix_strcat);
	str_strcat = 0;
	free(str_strcat);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strncat, n=8...\n");
	size_t n_strncat = 8;
	char *str_strncat = malloc(n_strncat + 1);
	str_strncat = e_strcpy(str_strncat, "good");
	const char *suffix_strncat = " night";
	printf(">> \"%s\", \"%s\"\n", str_strncat, suffix_strncat);
	str_strncat = e_strncat(str_strncat, suffix_strncat, n_strncat);
	printf(">> \"%s\", \"%s\"\n", str_strncat, suffix_strncat);
	str_strncat = 0;
	free(str_strncat);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strcmp...\n");
	const char *strcmp0 = "helln";
	const char *strcmp1 = "hello";
	const char *strcmp2  = "hellp";
	printf(">> \"%s\", \"%s\", \"%s\"\n", strcmp0, strcmp1, strcmp2);
	int strcmp_same = e_strcmp(strcmp1, strcmp1);
	printf(">> \"%s\", \"%s\" -> %d\n", strcmp1, strcmp1, strcmp_same);
	int strcmp_before = e_strcmp(strcmp0, strcmp1);
	printf(">> \"%s\", \"%s\" -> %d\n", strcmp0, strcmp1, strcmp_before);
	int strcmp_after = e_strcmp(strcmp2, strcmp1);
	printf(">> \"%s\", \"%s\" -> %d\n", strcmp2, strcmp1, strcmp_after);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strncmp...\n");
	const char *strncmp0 = "hellnn";
	const char *strncmp1 = "hello";
	const char *strncmp2  = "hellp";
	printf(">> \"%s\", \"%s\", \"%s\"\n", strncmp0, strncmp1, strncmp2);
	int strncmp_same = e_strncmp(strncmp0, strncmp2, 4);
	printf(">> n=4: \"%s\", \"%s\" -> %d\n", strncmp0, strncmp2, strncmp_same);
	int strncmp_first = e_strncmp(strncmp0, strncmp1, 5);
	printf(">> n=5: \"%s\", \"%s\" -> %d\n", strncmp0, strncmp1, strncmp_first);
	int strncmp_last = e_strncmp(strncmp2, strncmp1, 1);
	printf(">> n=1: \"%s\", \"%s\" -> %d\n", strncmp2, strncmp1, strncmp_last);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strstr...\n");
	const char *strstr0 = "programming";
	const char *strstr1 = "gram";
	const char *strstr2 = "hello";
	const char *strstr3 = "";
	char *strstr4 = malloc(e_strlen(strstr0));
	char *strstr5 = malloc(e_strlen(strstr0));
	char *strstr6 = malloc(e_strlen(strstr0));
	printf(">> \"%s\", \"%s\", \"%s\"\n", strstr0, strstr1, strstr2);
	strstr4 = e_strstr(strstr0, strstr1);
	strstr5 = e_strstr(strstr0, strstr2);
	strstr6 = e_strstr(strstr0, strstr3);
	printf(">> \"%s\", \"%s\" -> \"%s\"\n", strstr0, strstr1, strstr4);
	printf(">> \"%s\", \"%s\" -> \"%s\"\n", strstr0, strstr2, strstr5);
	printf(">> \"%s\", \"%s\" -> \"%s\"\n", strstr0, strstr3, strstr6);
	strstr4 = 0;
	free(strstr4);
	strstr5 = 0;
	free(strstr5);
	strstr6 = 0;
	free(strstr6);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strchr...\n");
	const char *strchr0 = "programming";
	int strchr1 = 'g';
	printf(">> \"%s\", \"%c\"\n", strchr0, strchr1);
	char *strchr2 = e_strchr(strchr0, strchr1);
	printf(">> \"%s\", \"%c\" -> \"%s\"\n", strchr0, strchr1, strchr2);
	printf("Done!\n");
	
	putchar('\n');
	
	printf("Testing e_strrchr...\n");
	const char *strrchr0 = "programming";
	int strrchr1 = 'g';
	printf(">> \"%s\", \"%c\"\n", strrchr0, strrchr1);
	char *strrchr2 = e_strrchr(strrchr0, strrchr1);
	printf(">> \"%s\", \"%c\" -> \"%s\"\n", strrchr0, strrchr1, strrchr2);
	printf("Done!\n");
	
	putchar('\0');
	
	return 1;
}