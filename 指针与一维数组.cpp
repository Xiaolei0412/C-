/*
	����Ԫ�ص�ָ�룺
	p=a �� p=&a[0]�ǵȼ۵ģ�
*/

#include<iostream>
using namespace std;
int main()
{
	//����ָ���������Ԫ�ض�ȡ����Ԫ�أ�
	//�ȶ���һ�����飻
	int app[10] = { 1,2,3,4,5,6,7,8,9,10 }, *p2 = app;
	int bpp[10],*p1=bpp;

	//���������Ԫ�أ�
	cout << "������������Ԫ��2x ��ֵ" << endl;
	for (int j = 0; j < 10; j++)
	{
		*p1++ = 2 * (j + 1);   //���ǵȼ���*(p++)=2 * (j + 1)
	}
	for (p1 = bpp; p1 < bpp + 10;)
	{
		cout << *p1++ << endl;
	}
	cout << "���ָ�������Ԫ��app[10]��" <<endl;

	//ָ�������Ԫ��
	for (int i = 0; i < 10;i++)
	{
		//cout << app[i]<< endl;
		//����ָ��������� app[10]��
		cout << *p2 << endl;
		p2++;  
	}


	system("pause");
	return 0;
}
/*
���������
������������Ԫ��2x ��ֵ
2
4
6
8
10
12
14
16
18
20
���ָ�������Ԫ��app[10]��
1
2
3
4
5
6
7
8
9
10
*/

////��ָ����������㣬�����ַ����ĳ��ȡ�
//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[50], *p = s;
//	cout << "������һ���ַ�����" << endl;
//	cin >> p;
//	while (*p != 0)
//		p++;
//	cout << "�ַ����ĳ����ǣ�" << p-s<<endl;
//
//	system("pause");
//	return 0;
//}