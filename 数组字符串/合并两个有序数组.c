#include "stdio.h"
#include "stdlib.h"


int bijiao(const void* a, const void* b) {
    int* pa = (int*)a;
    int* pb = (int*)b;
    return *pa - *pb;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, 
	int nums2Size, int n) {

	for (int i = 0; i != n; ++i)
	{
		nums1[m + i] = nums2[i];
	}
	qsort(nums1, nums1Size, sizeof(int), bijiao);
}

//�ȱ�����������ΰ�nums2����nums1����
//����nums1����