/*
�ṹ�尸��
����1
��������:
ѧУ������������Ŀ��ÿ����ʦ����2��ѧ��,�ܹ���2����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������2����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
*/

#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//1.����ѧ���ṹ��
struct student
{
	//����
	string name;
	//���Է���
	float score;
};
//2.������ʦ�ṹ��
struct teacher
{
	string name;
	student s[5];
};
//����������ʦ��ѧ�����ݵĺ���
void write(teacher t[], int n)
{
		for (int i = 0; i < 2; i++)
		{
			cout << "��ʦ������";
			cin>>t[i].name;
			for (int j = 0; j < 2; j++)
			{
				cout << "ѧ��������";
				cin >> t[i].s[j].name;

				cout << "ѧ���ɼ���";
				cin>>t[i].s[j].score ;
			}
		}	
}
//���壨��ӡ�������ʦ��ѧ�����ݵĺ���
void printf(teacher t[], int len)
{
	for (int i = 0; i < 2; i++)
	{
		cout << "��ʦ������" << t[i].name << endl;
		for (int j = 0; j < 2; j++)
		{
			cout <<"	ѧ��������"<< t[i].s[j].name <<"	ѧ���ĳɼ�Ϊ��"<< t[i].s[j].score<< endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//����������3����ʦ
	struct teacher t[2];
	//�������鳤��
	//int len = sizeof(t) / sizeof(t[0]);
	//���ø�ֵ����
	write(t,2);

	cout << "������Ľ��Ϊ��" << endl;
	//�����������
	printf(t,2);

	system("pause");
	return 0;
}