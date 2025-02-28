#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
// 函数用于检查字符是否是字母或数字
bool panduanshibushihuiwenfunction(char c)
{
    return isalnum(c) !=0;
}
//处理函数，s是待处理的字符串，processed是处理完的新字符数组
void chulifuntion(char *s ,char *processed)
{
    int j = 0;
    for(int i = 0; s[i] !='\0';i++)
    {
        if(panduanshibushihuiwenfunction(s[i]))
        {       
            processed[j++] = tolower(s[i]);
        }
    }
    processed[j] = '\0';
}
//判断是不是回文
bool isPalindrome(char* s) {
    char processed[1000];
    chulifuntion(s,processed);
    int len = strlen(processed);
    for(int i = 0;i<len/2;i++)
    {
        if(processed[i] != processed[len-1-i])
        {
            return false;
        }
    }
    return true;
}

/*
// 函数用于检查字符串是否是回文串（使用双指针）
bool isPalindrome(const char *s) {
    char *processed = preprocessString(s);
    int len = strlen(processed);

    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (processed[left] != processed[right]) {
            free(processed);  // 释放动态分配的内存
            return false;
        }
        left++;
        right--;
    }

    free(processed);  // 释放动态分配的内存
    return true;
}
*/