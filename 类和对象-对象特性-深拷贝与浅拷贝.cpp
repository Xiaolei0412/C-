#include<iostream>
using namespace std;

//�ȶ���һ���ࣻ
class person
{
public:
	//1. ���캯����û�з���ֵҲ��дvoid
	person()
	{
		cout << "���캯����û�з���ֵҲ��дvoid" << endl;
	}
	person(int a,int height)
	{
		p_age = a;
		p_height = new int(height);  //�����������ɳ���Ա�ֶ���������
		cout << "�вι��캯������" << endl;
	}

	//�Լ�ʵ�ֿ������캯����
	person(const person&p)
	{
		p_age = p.p_age;

		//���������
		//p_height = p.p_height; ������Ĭ��ʵ�ֵľ������д��룻
		p_height = new int(*p.p_height);

	}

	//2. ��������
	//������������ǰ�����Զ�������������������ֻ�ܵ���һ�Σ�
	~person()
	{
		//�������룬���������ٵ��������ͷŲ�����
		if (p_height != NULL)
		{
			delete p_height;
		}
		cout << "���캯����û�з���ֵҲ��дvoid" << endl;
	}

	int p_age;
	int *p_height;

};

void test01()
{
	person p1(10,180);
	cout << "p1������Ϊ��" <<p1.p_age<<endl<<"p1�����Ϊ��"<<*p1.p_height<< endl;

	person p2(p1);
	cout << "p1������Ϊ��" << p2.p_age << endl << "p1�����Ϊ��" << *p2.p_height << endl;
}

int main()
{
	test01();
	//person p;

	system("pause");
	return 0;
}
/*
���������
�вι��캯������
p1������Ϊ��10
p1�����Ϊ��180
p1������Ϊ��10
p1�����Ϊ��180
���캯����û�з���ֵҲ��дvoid
���캯����û�з���ֵҲ��дvoid
*/