//��Ա����˽�л�
//�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	//��������
	void setname(string name)
	{
		s_name = name;
	}
	//��ȡ����
	string getname()
	{
		return s_name;
	}
	//�������䣻�ɶ���д��
	void setage(int age)
	{
		if (age < 0 || age > 150) 
		{
			cout << "���������!" << endl;
			return;
		}
		s_age = age;

	}
	//��ȡ����
	int getage()
	{
		return s_age;
	}
	//��������Ϊֻд��
	void setlover(string lover)
	{
		s_lover = lover;
	}

private:
	//���� �ɶ���д��
	string s_name;
	int s_age;  //ֻ��
	string s_lover;

};

int main()
{
	person per;
	//��name��ֵ.
	per.setname( "���");
	cout << "\t����:" << per.getname() << endl;

	//��age��ֵ
	per.setage(2000);
	cout << "\t����:" << per.getage() << endl;

	//��lover��ֵ��
	per.setlover("����ʦ");
	//cout << "\t����:" << per.s_lover << endl; ֻ������ �����Է��ʣ�

	system("pause");
	return 0; 
}