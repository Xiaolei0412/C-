/*
	��1��.�����������ӣ���ֹÿ���������һ��
    srand((unsigned int)time(NULL));

	��2��.int num = rand() % 100 + 1; // rand() % 100 + 1 ����0+1~99+1�������

	��3��.break; //��ѭ���� �������ùؼ������˳���ǰѭ��
*/

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	//�����������ӣ���ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	// 1.ϵͳ���������
	int num = rand() % 100 + 1; // rand() % 100 + 1 ����0+1~99+1�������
	//cout << num << endl; �������������

	// 2.��ҽ��в²�
	int value = 0;
	while (1)
	{
		cin >> value;
		
		// 3.�ж�
			 //���˻���С�� 
		if (value > num)
		{
			cout << "�²����" << endl;
		}
		else if (value < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�¶���" << endl;
			//�¶��� �˳�ѭ��
			break; //��ѭ���� �������ùؼ������˳���ǰѭ��
		}
	}
	
	system("pause");
	return 0;
}

/* 
�������н����
1
�²��С
5
�²��С
79
�²����
56
�²��С
*/