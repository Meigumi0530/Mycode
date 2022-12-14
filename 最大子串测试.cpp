
#include<stdio.h>
#include <string.h>
//连续子数组的最大和
int MaxNum2(int* arr, int len)
{
	if (len <= 0)
		return 0;
	int max = 0;
	int sum = 0, start, end, tempstart;
	for (int i = 0; i < len; i++)
	{
		if (sum <= 0)
		{
			sum = arr[i];//当sum<=0时，将第i个指向值给sum
			tempstart = i;
		}
		else
		{
			sum += arr[i];//否则sum+下个指向值
		}
		if (sum > max)//当此sum比上个sum大时，赋值给max
		{
			start = tempstart;
			end = i;
			max = sum;
		}
	}
	if (max > 0)
		printf("最大子窜是从a[%d]到a[%d]\n", start, end);
	    printf("最大子窜和为%d\n", max);
		printf("----------------------\n");
	return max;
}
int test()
{
	
	int arr[100]={-1,5,6,4,-10};
	int n=5;
	 MaxNum2(arr,n);
	 arr[100]={-1,-2,-3,-4,-5};
	 n=5;
	 MaxNum2(arr,n);
	 arr[100]={1,2,3,-4,-5,6};
	 n=0
     MaxNum2(arr,n);
	return 0;
}
int main()
{  
	test();
	return 0;
}