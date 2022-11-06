#include<stdio.h>
#include <string.h>
//连续子数组的最大和
int MaxNum2(int *arr,int len)
{
	int max = 0;
	int sum = 0,start,end,tempstart;
	for(int i = 0; i < len;i++)
	{
		if(sum <= 0)
		{
			sum = arr[i];//当sum<=0时，将第i个指向值给sum
			tempstart=i;
		}
		else 
		{
			sum += arr[i];//否则sum+下个指向值
		}
		if(sum > max)//当此sum比上个sum大时，赋值给max
		{
			start=tempstart;
			end=i;
			max = sum;
		}
	}
	printf("最大子窜是从a[%d]到a[%d]\n",start,end);
	return max;
}

int main()
{
	int arr[10] = {1,2,3,4,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	int max = MaxNum2(arr,len);
	printf("最大子窜和为%d\n",max);
	return 0;
}
