#include <stdio.h>

void *memcpy(void *dst, const void *src, size_t len)
{
	if (NULL == dst || NULL == src) {
		return NULL;
	}

	void *ret = dst;

	if (dst <= src || (char *)dst >= (char *)src + len) {
		//û���ڴ��ص����ӵ͵�ַ��ʼ����
		while (len--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else {
		//���ڴ��ص����Ӹߵ�ַ��ʼ����
		src = (char *)src + len - 1;
		dst = (char *)dst + len - 1;
		while (len--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return ret;
}