//1����װ������
//�����Ժ���Ϊ��Ϊһ�����壬�������������е�����

//��װһ��Բ�࣬��Բ���ܳ�
#include<iostream>
using namespace std;
//class�������һ���࣬������ŵ�������
class circle
{
public:
	int r;
	double pi = 3.1415926;
	double circlezc()

	{
		//��ȡԲ���ܳ�
		return 2 * pi * r;
	}

};


int main()
{
	circle c1;
	c1.r = 10;
                       //���ص���2 * pi * r;
	cout << "Բ���ܳ�Ϊ" <<c1.circlezc()<< endl;


	system("pause");
	return 0;
}


//������ ���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
#include<iostream>
#include<string>
using namespace std;
//ѧ����
class student
{
public:
	//����
	string s_ID;
	string s_name;
	void showstudent()
	{
		cout<< "����:"<< s_name <<"\tѧ��:"<< s_ID << endl;
	}
	void setname(string name)
	{
		s_name = name;
	}
	void setID(string ID)
	{
		s_ID = ID;
	}

};


int main()
{
	student stu;
	//stu.s_name = "���";
	stu.setname("���");

	//stu.s_ID = 1;
	stu.setID ("20184080716");

	//��ʾѧ����Ϣ��
	stu.showstudent();
	system("pause");
	return 0;
}
/*
���������
����:���     ѧ��:20184080716
*/