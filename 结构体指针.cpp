

#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name; //����
	int age;   //����
	int score;  //����
};

int main()
{
	//����ѧ���ṹ�����
	student stu = { "���",18,30 };

	//ͨ��ָ��ָ��ṹ�������
	student *p = &stu;

	//����ָ����ʽṹ���Ա��
	//ͨ���ṹ��ָ�룬���ʽṹ���Ա��Ҫ���á�->�������ʣ�
	cout << "������" << p->name<<endl << "���䣺" << p->age <<endl<< "������" << p->score << endl;

	system("pause");
	return 0;
}