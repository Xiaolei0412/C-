/*
	�����Ķ��壺1.�޲κ��� <type> <������>() {}
					void ptint_title()
						{ cout << "00" << endl; }
				2.�вκ��� 
					int max(int x,int y) {return ( x>y ? x:y );}
				3. ��ʽ���������������������оٵĲ�����
					float f(float x,float y,int m)
						{ ... }  //������
	�����ĵ��ã�
*/


#include<iostream>
using namespace std;

//�����ĵ��ã���������ʵ����������������
//float max(float x, float y)
//{
//	return (x > y ? x : y);   //��������������ǰ�������������
//}

int main()
{
	float max(float x, float y);  //���û�и������в���
	float a, b;
	cout << "��������ʵ��" << endl;

	cin >> a >> b;
	cout << "������Ϊ��" << max(a, b) << endl;
	system("pause");
	return 0;  
}
float max(float x, float y)
{
	return (x > y ? x : y);
}
