//������һ���������飬ʵ����������
#include<iostream>

using namespace std;

int main()
{
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int count = sizeof(arr)/sizeof(arr[0]);		//Ԫ�ظ���
	cout<<"����ǰ�����飺";
	for(int i = 0;i<count;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//�ܹ�����������Ԫ�ظ���-1����0��ʼ
	for(int i = 0;i<count-1;i++)
	{
		//�ڲ�ѭ���Ƚϴ�����Ԫ�ظ���-��ǰ����-1
		for(int j = 0;j<count-i-1;j++)
		{
			//������ڵ����������е�һ�����ִ��ڵڶ������򽻻�
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	cout<<"���������飺";
	for(int i = 0;i<count;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	system("pause");
	return 0;
}