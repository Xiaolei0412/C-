/*
	do...while����﷨��ʽ��

	do
		<ѭ�������>
	while��<���ʽ>��;
	(��whileѭ�����������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ��������

*/

// ˮ�ɻ�����һ����λ����
//����do while ���������λ���е�ˮ�ɻ���
#include<iostream>
using namespace std;
int main()
{
	//1.���г�������λ���֡�
	int num = 0;
	do
	{
		//��������λ���� �ҵ�ˮ�ɻ����� 
		int a = 0; //��λ
		int b = 0; //ʮλ
		int c = 0; //��λ

		a = num % 10;         //��ȡ���ָ�λ
		b = num / 10 % 10;    //��ȡ����ʮλ
		c = num / 100;        //��ȡ���ְ�λ

		if (a*a*a+b*b*b+c*c*c==num)  //�����ˮ�ɻ����Ŵ�ӡ��
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}

/*
���������
0
1
153
370
371
407
*/