

#include<iostream>
using namespace std;

//����Ԫ���������Ĳ���

int add(int x, int y, int z)   //�����������
{
	int c[10];
	c[z] = x + y;
	return c[z];
}

int mian()	
{
	int a[10] = { 2,4,5,8,7,8,5,8,4,5 };  //����һ��һά����
	int b[10] = { 4,8,7,1,5,7,8,1,2,5 },i;
	int s[10];                            //s[10]
	
	for ( i = 0; i < 10; i++)
	{
		//cout << "s[i] = add(a[i], b[i],i) ";
		s[i] = add(a[i], b[i], i);
		//cout << "	" << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << s[i] << "	";
		cout << endl;
	}
	system("pause");
	return 0;
}


//���������������Ĳ�����
