#include <stdio.h>
#include <stdlib.h>
#include "s21_string_test.h"
#include "s21_string.h"
#ifdef LEN
#define func_alias s21_strlen_test()
#endif  // LEN
#ifdef CMP
#define func_alias s21_strcmp_test()
#endif  // CMP
#ifdef CPY
#define func_alias s21_strcpy_test()
#endif  // CPY
#ifdef CAT
#define func_alias s21_strcat_test()
#endif  // CAT
#ifdef CHR
#define func_alias s21_strchr_test()
#endif  // CHR
#ifdef STR
#define func_alias s21_strstr_test()
#endif  // STR
#ifdef TOK
#define func_alias s21_strtok_test()
#endif  // TOK

int main() {
    func_alias;
    return 0;
}

void s21_strlen_test() {
    printf("strlen_test\n");
    char test1[100] = "kazakshtan";
    char test2[100] = "kazakshtan astana";
    char test3[100] = "kazakshtan\0astana";
    int correct1 = 10;
    int correct2 = 17;
    int correct3 = 10;
    int answer1 = s21_strlen(test1);
    int answer2 = s21_strlen(test2);
    int answer3 = s21_strlen(test3);
    if (correct1 == answer1 && correct2 == answer2 && correct3 == answer3) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcmp_test() {
    printf("strcmp_test\n");
    char test1[100] = "kazakshtan";
    char test2[100] = "kazakshtan astana";
    char test3[100] = "kazakshtan\0astana";
    int answer1 = s21_strcmp(test1, test1);
    int answer2 = s21_strcmp(test1, test2);
    int answer3 = s21_strcmp(test2, test3);
    if (answer1 == 0 && answer2 < 0 && answer3 > 0) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcpy_test() {
    printf("strcpy_test\n");
    char test1[100] = "kazakshtan";
    char test2[100] = "kazakshtan astana";
    char test3[100] = "kazakshtan\0astana";
    char tmp1, tmp2, tmp3;
    if (s21_strlen(test1) == s21_strlen(s21_strcpy(test1, &tmp1)) &&
        s21_strlen(test2) == s21_strlen(s21_strcpy(test2, &tmp2)) &&
        s21_strlen(test3) == s21_strlen(s21_strcpy(test3, &tmp3))) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcat_test() {
    printf("strcat_test\n");
    char test1[100] = "kazakshtan";
    // char test2[100] = "kazakshtan astana";
    // char test3[100] = "kazakshtan\0astana";
    char tmp1[100] = "a";
    //  tmp2[100] = "ab", tmp3[100] = "abc";
    //  &&
    //     12 == s21_strlen(s21_strcat(test2, tmp2)) &&
    //     13 == s21_strlen(s21_strcat(test3, tmp3))
    if (11 == s21_strlen(s21_strcat(test1, tmp1))) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strchr_test() {
    printf("strchr_test\n");
    char test1[100] = "world";
    if (4 == s21_strlen(s21_strchr(test1, 'o')) &&
        2 == s21_strlen(s21_strchr(test1, 'l')) &&
        1 == s21_strlen(s21_strchr(test1, 'd'))) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strstr_test() {
    printf("strstr_test\n");
    char test1[100] = "astana";
    char tmp1[5] = "ta", tmp2[5] = "st", tmp3[5] = "an";
    if (4 == s21_strlen(s21_strstr(test1, tmp1)) &&
        5 == s21_strlen(s21_strstr(test1, tmp2)) &&
        3 == s21_strlen(s21_strstr(test1, tmp3))) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

// void s21_strtok_test()
// {
//     // printf("strtok_tok");
//     // char test1[100] = "how are you-John?", tmp1[100] = " ", tmp1[100] = "e", tmp1[100] = "-";
//     // char *t = s21_strtok(test1, tmp1);
//     // while (t != NULL) {
//     //     printf("%s\n", t);
//     //     t = myStrtok(NULL, " ");
//     // }
// }
