#include <stdio.h>


int strcmp(char *p1, char *p2)                      //两个字符串比较函数

{
	int i;

	i = 0;

	while (*(p1 + i) == *(p2 + i))

		if (*(p1 + i++) == '\0')return(0);                 //相等时返回结果0

	return(*(p1 + i) - *(p2 + i));          //不等时返回结果为第一个不等字符ASCII码的差值

}