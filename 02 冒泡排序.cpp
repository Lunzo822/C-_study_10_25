//随便给出一个无序数组，实现升序排列
#include<iostream>

using namespace std;

int main()
{
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int count = sizeof(arr)/sizeof(arr[0]);		//元素个数
	cout<<"排序前的数组：";
	for(int i = 0;i<count;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//总共排序轮数：元素个数-1，从0开始
	for(int i = 0;i<count-1;i++)
	{
		//内层循环比较次数：元素个数-当前轮数-1
		for(int j = 0;j<count-i-1;j++)
		{
			//如果相邻的两个数字中第一个数字大于第二个，则交换
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	cout<<"排序后的数组：";
	for(int i = 0;i<count;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	system("pause");
	return 0;
}