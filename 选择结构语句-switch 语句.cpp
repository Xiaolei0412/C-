//switch��䣺���Ը��ݸ������������Ӷ��֧���������ѡ��ִ��һ����֧��������С�
/*
	switch (���ʽ)
	{
		case �������ʽ1�� break��
		case �������ʽ2�� break��
		...
		default��
			������У�
	}
*/

//����һ���ɼ���ת������ ��������
#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "���������";
	cin >> score;
	if (score < 0 || score>100) 
	{
		cout << "��������ˣ�ֻ������100���ڵ���)" << endl;
		exit(1);  //�ɼ��쳣ʱ�������������С�
	}
	switch (score / 10)  //ȡһ������
	{
	case 10:
	case 9:
		cout << "��" << endl; break;
	case 8:
		cout << "��" << endl; break;
	case 7:
		cout << "��" << endl; break;
	case 6:
		cout << "����" << endl; break;
	default:
		cout << "ɶҲ���� ������" << endl;
	}
	system("pause");
	return 0;
}

/*
	���������89
	��
	�밴���������. . .
*/