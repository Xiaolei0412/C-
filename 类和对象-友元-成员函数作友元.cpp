#include<iostream>
using namespace std;
#include<string>
class Room;
class goodfriend
{

public:
	goodfriend();

	void visit1();
	void visit2();

	Room*room;  //ά��room��ָ�룻

};
class Room
{
	//���߱�����  goodfriend���е�visit1��Ա���� ��Room�����ѣ����Է���˽������
	friend void goodfriend::visit1();
public:
	Room();

public:
	string m_settingroom;

private:
	string m_bedroom;
};

Room::Room()
{
	this->m_settingroom = "����";
	this->m_bedroom = "����";
}
goodfriend::goodfriend()
{
	room = new Room;
}

void goodfriend::visit1()
{
	cout << "��ĺ������������ģ�" << room->m_settingroom << endl;
	cout << "��ĺ������������ģ�" << room->m_bedroom << endl;
}

void goodfriend::visit2()
{
	cout << "��ĺ������������ģ�" << room->m_settingroom << endl;
	//cout << "��ĺ������������ģ�" << room->m_bedroom << endl; //�����Է�����
}
void test01()
{
	goodfriend GG;
	GG.visit1();
	GG.visit2();
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
��ĺ������������ģ�����
*/