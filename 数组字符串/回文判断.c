#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
// �������ڼ���ַ��Ƿ�����ĸ������
bool panduanshibushihuiwenfunction(char c)
{
    return isalnum(c) !=0;
}
//��������s�Ǵ�������ַ�����processed�Ǵ���������ַ�����
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
//�ж��ǲ��ǻ���
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
// �������ڼ���ַ����Ƿ��ǻ��Ĵ���ʹ��˫ָ�룩
bool isPalindrome(const char *s) {
    char *processed = preprocessString(s);
    int len = strlen(processed);

    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (processed[left] != processed[right]) {
            free(processed);  // �ͷŶ�̬������ڴ�
            return false;
        }
        left++;
        right--;
    }

    free(processed);  // �ͷŶ�̬������ڴ�
    return true;
}
*/