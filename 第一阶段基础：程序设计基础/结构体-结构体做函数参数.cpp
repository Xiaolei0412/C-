//���ã����ṹ����Ϊ���������д��ݣ�

#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int sorce;
};

//����һ��ѧ����Ϣ�ĺ�����//ֵ����
void printstudent1(student stu)
{
	stu.age = 30;
	cout << "�Ӻ����������" << endl;
	cout << "������" << stu.name << endl << "���䣺" << stu.age << endl << "������" << stu.sorce << endl;
	cout << endl;
}
//����һ��ѧ����Ϣ�ĺ�����//��ַ����(��ı�)
void printstudent2(student *stu)
{
	stu->age = 30;
	cout << "�Ӻ����������" << endl;
	cout << "������" << stu->name << endl << "���䣺" << stu->age << endl << "������" << stu->sorce << endl;
	cout << endl;
}
int main()
{
	//����ѧ���ṹ�������
	student stu = { "���",20,89 };

	printstudent1(stu);
	//printstudent2(&stu);
	//����ṹ���еĳ�Ա���ƣ�
	cout << "��������������ṹ���Ա��" << endl;
	cout << "������" << stu.name << endl << "���䣺" << stu.age << endl << "������" << stu.sorce << endl;

	system("pause");
	return 0;
}