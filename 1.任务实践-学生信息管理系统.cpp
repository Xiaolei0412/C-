#include<iostream>
//#include<windows>
using namespace std;
struct student
{
	char name[10];
	char sex[5];
	char jiguan[10];
	int age, nub;
	char adr[20];
}stu[100];
int main()
{
	int i, j, n;
	cout << "��ӭʹ��ѧ����Ϣ����ϵͳ" << endl;
	cout << "������Ҫ���ѧ���ĸ���" << endl;
	cin >> n;
	if (n >= 100 || n <= 0)
	{
		cout << "ϵͳ��������������" << endl;
		exit(0);
	}
	else 
	{
		for (i = 1; i <= n; i++)
		{
			cout << "���������� �Ա� ���� ���� ѧ�� סַ��" << endl;
			cin >> stu[i].name >> stu[i].sex >> stu[i].jiguan  >>
			stu[i].age >> stu[i].nub >> stu[i].adr;
		}
	cout << "��ǰѧ����Ϣ����" << endl;
	cout << "����   �Ա�    ����    ����    ѧ��    סַ" << endl;
	for (j = 1; j <= n; j++)
	{
		cout << j << stu[j].name << "	   " << stu[j].sex << "	   " << 
		stu[j].jiguan << "	   " << stu[j].age << "	   " << stu[j].nub << "	   " << stu[j].adr << endl;
	}
	}
	system("pause");
	return 0;
}

