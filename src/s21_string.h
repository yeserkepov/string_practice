#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

int s21_strlen(const char *str);
int s21_strcmp(const char *str1, const char *str2);
char* s21_strcpy(const char *src, char *dst);
char* s21_strcat(char *dest, const char *src);
char* s21_strchr(const char *src, int c);
char* s21_strstr(const char *haystack, const char *needle);
// char* s21_strtok(char *src, char *delim);

#endif  // SRC_S21_STRING_H_
