/*
�ṹ�尸��2
����������
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
*/
#include<iostream>
using namespace std;
#include<string>
//����Ӣ�۵Ľṹ��
struct hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};
//����ð����������
void maopao(hero h[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				struct hero temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}
void printf(hero h[], int n)  //������ӡ������
{
	for (int i = 0; i < 5; i++)
	{
		cout << "	Ӣ�ۣ�" << h[i].name << "	���䣺" << h[i].age << "	�Ա�" << h[i].sex << endl;
	}
}
int main()
{
	//�����ṹ�����飻
	hero h[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	//����ṹ�壻�����������
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "	Ӣ�ۣ�" << h[i].name << "	���䣺" << h[i].age << "	�Ա�" << h[i].sex << endl;
	}
	//����ð������
	maopao(h, 5);
	cout << endl;
	cout << "�����" << endl;
	//�����������
	printf(h, 5);
	system("pause");
	return 0;
}