/*
	��������ļ��п���(Public)�����������(Private)
	�����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
	�����أ���Ҳ����������ĺù��ۺ����ѽ�ȥ��
	�ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
	��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա

	��Ԫ�Ĺؼ���Ϊ  ==friend==
	��Ԫ������ʵ��
   * ȫ�ֺ�������Ԫ
   * ������Ԫ
   * ��Ա��������Ԫ

*/

#include<iostream>
using namespace std;
#include<string>
//�ȶ���һ���������ࣻ
class room
{
	//���߱����� goodfriengȫ�ֺ��� ��room��ĺ����ѣ����Է������е�˽������;
	friend	void  goodfriend(room *room);
public:
	room()
	{
		r_settingroom = "����";
		r_badroom = "����";
	}
public:
	string r_settingroom; //������

private:
	string r_badroom; //���ң�
};
//ȫ�ֺ�������Ԫ��
void  goodfriend(room *room)
{
	cout << "�������������ģ�" << room->r_settingroom << endl;

	cout << "�������������ģ�" << room->r_badroom << endl;
}
//��ֵ��
void test01()
{
	room roomm;
	goodfriend(&roomm); //ָ��Ҫ�ѵ�ַ����ȥ��

}
int main()
{
	test01();
	system("pause");
	return 0;
}
/*
���������
�������������ģ�����
�������������ģ�����
*/