//���������� �ý����ķ��������ǰ���С�����˳������
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, t;
	cout << "����������";
	cin >> a >> b >> c;
	if (a > b)
	{
		t = a, a = b, b = t;
	}
	if (a > c)
	{
		t = a, a = c, c = t;
	}
	if (b > c)
	{
		t = b, b = c, c = t;
	}
	cout << "�����Ϊ:" << a << "," << b << "," << c << endl;
	system("pause");
	return 0;
}