//���дһ���������ַ���s2��ӵ��ַ���s1��ĩ�ˣ���������s1��s2�ռ��С�����ơ�
//�������ó����ַ�������strlen, strcpy, strcat, strcmp, strstrʵ�֡�

//�����ַ������������� :
//strlen(char *str) : ���ַ������ȡ�
//strcpy(char *dest, char *src) : ��src������dest��
//strcat(char *dest, char *src) : ��src���ӵ�dest���档
//strcmp(char *s1, char *s2) : ���ո����ַ���ascii���Ƚ�s1��s2������򷵻�0�����򷵻�ascii����Ľ����
//strstr(char *s1, char *s2) : ��s1�в���s2�������ҵ���λ�ã����Ҳ����򷵻�NULL��


#include <stdio.h>
#include <cstring>

char* strCat(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char* ret = new char[len1 + len2 + 1];
	strcpy(ret, s1);
	strcat(ret, s2);
	return ret;
}

int main()
{
	char* s1 = "123456";
	char* s2 = "qwerty";
	char* res;

	res = strCat(s1, s2);



	return 0;
}