/*�ַ����鶨����ʽ
   char ������[�������ʽ]
   char agg[] = "happen";  //�����鳤��Ϊ7

   ��cin ֱ������ ����cinֻ�ܽ��տո��֮ǰ�Ĳ���
   cin.getҲ���Խ��պ��пո���ַ���
   cin.getline ���Խ��պ��пո���ַ��� �Զ���ַ������������ʱ Ӧʹ�����
*/

#include<iostream>
using namespace std;
int main()
{
	//char sqr[] = {'h','a','p','p','e','n'};  //����ĳ��Ⱦ����ַ��ĸ���
	char agg[] = "happen";  //�����鳤��Ϊ7
	cout << agg << endl;

	// cout.write ����ַ��������ַ�������ǰn���ַ�
	cout << "ǰ�����ַ�Ϊ��" << endl;
	cout.write(agg, 3);
	cout << endl;

	//��cin ֱ������ ����cinֻ�ܽ��տո��֮ǰ�Ĳ���
	//cout << "������һ���ַ���" << endl;
	//char sqr[20];
	//cin >> sqr;
	//cout << "�����" << endl;
	//cout << sqr << endl;;

	//cin.getline ���Խ��պ��пո���ַ��� �Զ���ַ������������ʱ Ӧʹ�����
	//cin.getҲ����ʵ�� 
	char app[20];
	cout << "��������һ���ַ���" << endl;
	cin.get(app,20);
	cout << app << endl;


	system("pause");
	return 0;
}