#include<iostream>
using namespace std;
int main()
{
	int pig[5] = { 400,600,100,300,400 }; //����һ������
	cout << "��ͷ������طֱ�Ϊ��" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << pig[j] << endl;  //�����ͷ�������
	}
    
	//���������ҵ����ֵ
	int max = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (pig[i]>max)  //�����ͷ����ҵ�ֵ���� ��������ص���ֵ��MAX
		{
			max = pig[i];
		}
	}
	//��ӡ���ֵ
	cout << "���ص�һͷ���ǣ�" << max << endl;
	system("pause");
	return 0;
}