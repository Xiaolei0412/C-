//

#include<iostream>
using namespace std;
int main()
{
	//�ȶ���һ���ṹ�������
	struct student
	{
		char num[10], name[20];
		char sex;  //�Ա�
		int age;
		float score;
	}; //st1,st2 Ҳ����ֱ���ں��涨�� 
	
	struct student st1;

	cout << "�������ţ��������Ա����䣬����" << endl;
	//st1. Ϊ��������Ԫ��
	cin >> st1.num >> st1.name >> st1.sex >> st1.age >> st1.score;  

	cout << "���  ����  �Ա�  ����  ����"<<endl;
	cout << st1.num << "	" << st1.name << "	" << st1.sex << "	" << st1.age << "	" << st1.score << endl;

	system("pause");
	return 0;
}