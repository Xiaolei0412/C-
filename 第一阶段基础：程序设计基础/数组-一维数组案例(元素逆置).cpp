//����������Ԫ������
//������һ��5��Ԫ�ص����飬���ҽ�Ԫ������ ������1 3 2 4 5��--��5 4 3 2 1��

//��ʵ��Ԫ�����á�
#include<iostream>
using namespace std;
int main()
{
	//1.����һά����
	int LDY[6] = { 4,8,2,5,6,1};  //����һ������
	int i;
	for (i = 0; i <6; i++)
	{
		cout << LDY[i] << endl;
	}

	//2.ʵ������
	int start = 0;  //��¼��ʵ�±�λ��
	int end = sizeof(LDY)/sizeof(LDY[0])-1;    //��¼�����±�λ��

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = LDY[start];
		LDY[start] = LDY[end];
		LDY[end] = temp;

		start++;
		temp--;
	}
	//��������������
	cout << "Ԫ�����ú�Ϊ��" << endl;
	for (i = 0; i <6; i++)
	{
		cout << LDY[i] << endl;
	}

	system("pause");
	return 0;
}


//����10��������С�����˳�����(15,8,0,-6,2,39,-53,12,10,6)��
#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 15,8,0,-6,2,39,-53,12,10,6 };
	int i, j, temp;

	//�ȱȽ�������ܴ���
	for(i=0;i<9;i++) //0~9 
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])           //ÿ�ֱȽϵĴ���
			{
				temp = a[i]; a[i] = a[j]; a[j] = temp;  //���� �����ľ����ں���
			}
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << endl;      //�������֮��Ľ��
	}
	system("pause");
	return 0;
}

/*
���������
-53
-6
0
2
6
8
10
12
15
39
*/