#include <stdio.h>


int strcmp(char *p1, char *p2)                      //�����ַ����ȽϺ���

{
	int i;

	i = 0;

	while (*(p1 + i) == *(p2 + i))

		if (*(p1 + i++) == '\0')return(0);                 //���ʱ���ؽ��0

	return(*(p1 + i) - *(p2 + i));          //����ʱ���ؽ��Ϊ��һ�������ַ�ASCII��Ĳ�ֵ

}