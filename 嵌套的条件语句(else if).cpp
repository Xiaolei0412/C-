//��֪һ����������������Ա���X��ֵ������Y��ֵ��
#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "input x==";
	cin >> x;
	if (x > 0)  y = 1;
	else if (x == 0)  y = 0;  // else��ǰ�������δƥ���if��ԡ�
	else y = -1;
	cout << "x=" << x << "y=" << y << endl;
	system("pause");
	return 0;
}