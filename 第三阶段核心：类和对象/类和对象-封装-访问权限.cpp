//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���
/*
	* struct  Ĭ��Ȩ��Ϊ����
	* class   Ĭ��Ȩ��Ϊ˽��
*/

#include<iostream>
using namespace std;
class person   //Ĭ��Ȩ��Ϊ˽��
{
public: //����Ȩ�� ���ڿ��Է���  ������Է���
	string name;
protected://����Ȩ�� ���ڿ��Է���  ���ⲻ���Է���
	string car;
private://˽��Ȩ�� ���ڿ��Է���  ���ⲻ���Է���
	int password;

protected:
	void func()
	{
		name = "����";
		car = "������";
		password = 123456;
	}

};

int main()
{
	person p1;
	p1.name="����";
	//p1.car ="������" ; ����Ȩ��������ʲ���
	//p.m_Password = 123; //˽��Ȩ��������ʲ���

	system("pause");
	return 0;
}