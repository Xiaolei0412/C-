#include<iostream>
using namespace std;

// 4.2.2 ���캯���ķ��༰����
//���ַ��෽ʽ��
//��������Ϊ�� �вι�����޲ι���
//�����ͷ�Ϊ�� ��ͨ����Ϳ�������
class person
{
public:
	//�޲ι��캯����
	person()
	{
		cout << "�޲ι��캯����" << endl;
	}
	//�вι��캯����
	person(int a)
	{
		age = a;
		cout<< "�вι��캯����" << endl;
	}
	//�������캯��
	person(const person &p)
	{
		int age;
		age = p.age;
		cout << "�������캯����" << endl;
	}

	//��������
	~person()
	{
		cout << "�޲ι��캯����" << endl;
	}

	int age;
};

//���ֵ��÷�ʽ��
//���ŷ�
//��ʾ��
//��ʽת����
void test01()  //�޲κ����ĵ��ã�
{
	person p;
}
//�вκ����ĵ���
void test02()
{
	//1.���ŷ���
	//person p2(2);
	//person p1(p2);//��������
	////ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������

	//2. ��ʽ��
	person p2 = person(10);
	person p3 = person(p2);
	//Person(10)����д������������  ��ǰ�н���֮����������

	//2.3 ��ʽת����
	person p4 = 10; // person p4 = person(10); 
	person p5 = p4; // person p5 = person(p4); 

	//ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
	//person p5(p4);
}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}