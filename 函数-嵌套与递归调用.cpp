/*
	1.������Ƕ�ף� ��дһ���������������������С����ֵ�ĳ���
	//�����������Ҫ����ֵ��������ʱ�����дvoid..

*/

#include<iostream>
using namespace std;

int max(int x, int y, int z)    //�����������е����ֵ
{
	int s;
	s = x > y ? x : y;
	return(s > z ? s : z);
}
int min(int x, int y, int z)    //�����������е����ֵ
{
	int t;
	t = x < y ? x : y;
	return(t < z ? t : z);
}
int dif(int x, int y, int z)   //���ֵ��ȥ��Сֵ
{
	int sub;
	sub = max(x, y, z) - min(x, y, z);
	return sub;      //���ú���ʱ�����з���ֵ��
}
int main()
{
	int a, b, c;
	cout << "��������������" << endl;
	cin >> a >> b >> c;

	
	cout << "��������ȥ��С����Ϊ��" << dif(a,b,c) << endl;

	system("pause");
	return 0;
}