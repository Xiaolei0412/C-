#include<iostream>
using namespace std;
#include<string>

class Room;
//�ȶ���һ�����ѵ��ࣻ
class goodfriend
{
public:
	//���캯����
	goodfriend();

	void visit();

private:
	Room * room; //ά����ݷ����ָ�룻
};
//����һ��������ࣻ
class Room  //��һ�����캯�� ���ж������������-����-������
{
	//���߱����� goodfriend ��Room �ĺ����ѣ������Է���Room������г�Ա��
	friend class goodfriend;
public:
	Room();

public:
	string m_settingroom;

private:
	string m_bedroom;
};

//�������ʼ�� Room �� goodfriend �� 
Room::Room()
{
	this->m_settingroom = "����";
	this->m_bedroom = "����";
}
goodfriend::goodfriend()
{
	room = new Room;
}

//����һ����ʾ������
void goodfriend::visit()
{
	cout << "��ĺ������������ģ�" << room->m_settingroom <<endl;
	cout << "��ĺ������������ģ�" <<  room->m_bedroom<<endl;
}


//��ֵ������
void test01()
{
	goodfriend GG;
	GG.visit();

}

int main()
{

	test01();
	system("pause");
	return 0;
}
/*
���������
��ĺ������������ģ�����
��ĺ������������ģ�����
*/