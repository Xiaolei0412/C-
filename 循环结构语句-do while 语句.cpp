/*
	do...while����﷨��ʽ��

	do
		<ѭ�������>
	while��<���ʽ>��;
	(��whileѭ�����������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ��������

*/

#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num <= 10);   //���1-10����

	system("pause");
	return 0;
}

/*
���������
0
1
2
3
4
5
6
7
8
9
*/