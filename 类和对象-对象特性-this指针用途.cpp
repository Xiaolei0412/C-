/*
	�Ǿ�̬��Ա����ռ����ռ�
	��̬��Ա������ռ����ռ�
	����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	��̬��Ա����Ҳ��ռ����ռ�

	C++�г�Ա�����ͳ�Ա�����Ƿֿ��洢��
	ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
	��ô�����ǣ���һ���������������Ǹ���������Լ����أ�

	thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
	thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

	thisָ�����;��
*  ���βκͳ�Ա����ͬ��ʱ������thisָ��������
*  ����ķǾ�̬��Ա�����з��ض�������ʹ��return *this
*/
#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	person(int age)
	{   //this ָ��ָ����Ǳ����õĳ�Ա���������Ķ���

		this->age = age;
	}

	//------------��person ����ȥ----------//
	person& addperson(person &p)
	{
		this->age += p.age;
	//-----------���ض�����-------------//
		return *this;
	}

	void ShowClassName() 
	{
		cout << "����Person��!" << endl;
	}

	//---------��ָ����ʳ�Ա����------------//
	void ShowPerson() 
	{
		if (this == NULL) 
		{             //��ָ����Է��ʳ�Ա������
			return;
		}
		cout << mage << endl;
	}

	int age;
	int mage;
};

void test01()
{
	person p1(10);
	cout << "P1 =" << p1.age << endl;
}
//���ض������� *this��
void test02()
{
	person p1(10);
	person p2(15);
	p2.addperson(p1).addperson(p1);
	//----�������-----//
    //-----��ʽ���˼��--------//
	cout << "addperson P2 " <<  p2.age  << endl;   

}
void test03()
{
	person * p = NULL;
	p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
	p->ShowPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
}
int main()
{

	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
/*
���������
P1 =10
addperson P2 35
����Person��!
*/