/*
	�Ǿ�̬��Ա����ռ����ռ�
	��̬��Ա������ռ����ռ�
	����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	��̬��Ա����Ҳ��ռ����ռ�
*/
#include<iostream>
using namespace std;
#include<string>
//�������Ϊ���Ա��
//�ֻ�
class phone
{
public:
	phone(string pname)
	{
		m_pname = pname;
		cout << "phone �Ĺ��캯�����ã�" << endl;
	}

	~phone()
	{
		cout << "phone ������������" << endl;
	}
	//�ֻ�Ʒ�����ƣ�
	string m_pname;
};

	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	//����˳���빹���෴
//����
class person
{
public:
	person(string name,string pname):m_name(name),m_phone(pname)
	{
		cout << "person �Ĺ��캯�����ã�" << endl;
	}

	~person()
	{
		cout << "person ������������" << endl;
	}
public:

	string m_name;

	phone m_phone;
};

void test01()
{
	person p1("���", "��Ϊ");
	cout << "������" << p1.m_name << "�ֻ���" << p1.m_phone.m_pname<<endl;

}

int main()
{

	test01();
	system("pause");
	return 0;
}
/*
���������
phone �Ĺ��캯�����ã�
person �Ĺ��캯�����ã�
����������ֻ�����Ϊ
person ������������
phone ������������
*/