//����������
//���������������нϴ�ĺ������ֱ�ʵ������������.�����Ⱥ�˫����ʵ���еĴ���.
#include<iostream>
using namespace std;
//A�����������е������  (a)
int max(int x, int y)
{
	return(x > y ? x : y);
}

//B������������ʵ���еĴ��� (b)
float max(float a, float b)
{
	return(a > b ? a : b);
}
//C������˫����ʵ���еĴ��� (c)
double max(double m, double n)
{
	return(m < n ? m : n);
}

//

int main()
{
	int a1, a2;
	float b1, b2;
	double c1, c2;
	cout << "�������������� \n" << endl;
	cin >> a1 >> a2;
	cout << "����������������ʵ��\n" << endl;
	cin >> b1 >> b2;
	cout << "����������˫��ʵ��\n" << endl;
	cin >> c1 >> c2;

	cout << "����ϴ����Ϊ��" << endl;
	cout << max(a1, a2) << endl; 
	cout << max(b1, b2) << endl;
	cout << max(c1, c2) << endl;
	
	system("pause");
	return 0;
}