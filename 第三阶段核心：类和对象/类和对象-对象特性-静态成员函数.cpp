/*
	�Ǿ�̬��Ա����ռ����ռ�
	��̬��Ա������ռ����ռ�
	����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	��̬��Ա����Ҳ��ռ����ռ�
*/

#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	//��̬��Ա������
	static void func1()
	{
		p_name = 100;  //��̬��Ա���Է��ʾ�̬��Ա������
		//pp = name;  ��̬��Ա���������Է��ʷǾ�̬��Ա����
		cout << "static void func1() �ľ�̬��Ա�������ã�" << endl;
	}
	static int p_name;   //�������� ��������ʼ��һ�£�

	//int pp;
private:
	static void func2()
	{
		cout << "static void func2() �ľ�̬��Ա�������ã�" << endl;
	}
};

int person::p_name = 0;  //�������� ��������ʼ��һ�£�

void test01()
{
	person p;
	p.func1();

	//ͨ���������з���
	person::func1();

	//������ʲ���˽�о�̬������
	//person::func2();  ���ɷ���
}

int main()
{
	test01();


	system("pause");
	return 0;
}
/*
���������
static void func1() �ľ�̬��Ա�������ã�
static void func1() �ľ�̬��Ա�������ã�
*/