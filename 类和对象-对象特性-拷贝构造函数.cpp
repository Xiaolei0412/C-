#include<iostream>
using namespace std;
//*ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//*ֵ���ݵķ�ʽ������������ֵ
//*��ֵ��ʽ���ؾֲ�����
class person
{
public:
	//����һ��������
	person()
	{
		cout << "�޲ι��캯������!" << endl;
	}
	//����һ���вκ���
	person(int a)
	{
		p_age = a;
		cout << "�вι��캯������" << endl;
	}
	//����һ���������캯����
	person(const person&p)
	{
		p_age = p.p_age;
		cout << "�������캯�����ã�" << endl;
	}
	//��������������
	~person()
	{
		cout << "�����������õ��ã�" << endl;
	}
	int p_age;
};

//*--------ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���---------//
void test01()
{
	person p1(2);
	person p2(p1);
}
//*ֵ���ݵķ�ʽ������������ֵ �൱��person p1 = p
void work(person p1)
{
}
void test02()
{
	person p;
	work(p);
}
//*��ֵ��ʽ���ؾֲ�����
person doWork2()
{
	person p1;
	cout << (int *)&p1 << endl;
	return p1;
}

void test03()
{
	person p = doWork2();
	cout << (int *)&p << endl;
}


int main()
{
	cout << "tese 01" << endl;
	test01();

	cout << "tese 02" << endl;
	test02();

	cout << "tese 03" << endl;
	test03();
	system("pause");
	return 0;
}
/*
���������
tese 01
�вι��캯������
�������캯�����ã�
�����������õ��ã�
�����������õ��ã�
tese 02
�޲ι��캯������!
�������캯�����ã�
�����������õ��ã�
�����������õ��ã�
tese 03
�޲ι��캯������!
007DF768
�������캯�����ã�
�����������õ��ã�
007DF860
*/