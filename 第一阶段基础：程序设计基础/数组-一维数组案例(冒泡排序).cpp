#include<iostream>
using namespace std;
int main()
{
	//����ð������ʵ����������
	int sqr[9] = { 5,6,7,1,2,3,9,4,8 };
	int i;
	int j;
	int temp;
	cout << "����ǰ����Ϊ��"<<endl;
	for (i = 0; i < 9; i++)
	{
		cout << sqr[i] << endl;
	}	

	//ʵ��ð������
	for(i=0;i<9-1;i++)    //ð������������� 
		for (j = 0; j < 9 - i - 1; j++)   //ÿһ�ֱȽϵĴ���
		{
			if (sqr[j] > sqr[j + 1])     //�����һ�����ֱȵڶ������ִ������
			{
				temp = sqr[j];
				sqr[j] = sqr[j + 1];
				sqr[j + 1] = temp;
			}
		}
	cout << "ð������������Ϊ��" << endl;
	for (j = 0; j < 9 - 1; j++)
	{
		cout << sqr[j] << endl;    //�������֮�������
	}
	system("pause");
	return 0;
}