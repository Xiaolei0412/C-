//�����������������������һ������ֵ�ȵڶ������󣬾ͽ����ǵ�ֵ�����������
#include<iostream>
using namespace std;
int main()
{
	float a, b, t;  // Ҫ��һ���м����t����������������ֵ��
	cout << "����������:";
	cin >> a >> b;
		if (a>b)
		{
			t = a, a = b, b = t;
		}
		cout << "������Ϊ:" << a << "," << b << "\n";
		system("pause");
		return 0;
}