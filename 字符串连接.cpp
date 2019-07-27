//请编写一个函数将字符串s2添加到字符串s1的末端，函数不受s1、s2空间大小的限制。
//可以利用常用字符串函数strlen, strcpy, strcat, strcmp, strstr实现。

//常用字符串函数简单描述 :
//strlen(char *str) : 求字符串长度。
//strcpy(char *dest, char *src) : 把src拷贝到dest。
//strcat(char *dest, char *src) : 把src连接到dest后面。
//strcmp(char *s1, char *s2) : 按照各个字符（ascii）比较s1和s2，相等则返回0，否则返回ascii相减的结果。
//strstr(char *s1, char *s2) : 在s1中查找s2，返回找到的位置，若找不到则返回NULL。


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