#include <stdlib.h>
#include <stdio.h>
#include "s21_string.h"

int s21_strlen(const char *s) {
    int i = 0, tmpforloop = 0;
    for (; s[i] != '\0'; i++) {
        tmpforloop++;
    }
    return i;
}

int s21_strcmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2)
        ++str1, ++str2;
    return *str1 - *str2;
}

char *s21_strcpy(const char *src, char *dst) {
    int i = 0;
    while (src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char *s21_strcat(char *dest, const char *src) {
    register char *s1 = dest;
    register const char *s2 = src;
    register char c;
    do {
        c = *s1++;
    } while (c != '\0');
    s1 -= 2;
    do {
        c = *s2++;
        *++s1 = c;
    } while (c != '\0');
    return dest;
}

char *s21_strchr(const char *src, int c) {
    int i = 0;
    while (src[i] && src[i] != c)
        i++;
    return c == src[i] ? (char *)src + i : NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
    const char *temp, *c;
    temp = needle;
    while (*haystack) {
        c = haystack;
        while (*(haystack++) == *(needle++)) {
            if (!(*needle)) {
                return (char *)c;
            }
            if (!(*haystack)) {
                return NULL;
            }
        }
        needle = temp;
    }
    return NULL;
}

// char *s21_strtok(char* src, char* delim) {
//     int n = sizeof(src)/sizeof (char);
//     int m = sizeof(delim)/sizeof (char);
//     bool exit=false;
//     char *p= src;
//     for( int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             if(*(src+i)==*(delim+j)) {
//                 src=(src+i);
//                 *(src+i)=NULL;
//                 exit=true;
//                 break;
//             }
//         }
//         if(exit) break;
//     }
//     return ( exit ) ? p : NULL;
// }
