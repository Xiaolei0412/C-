/*
    continue;
	continueֻ������ѭ������У�������ִ�е������ʱ����ֹ����ѭ������ʼ��һ��ѭ��
*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5) continue;  //��i=5ʱ ��������ѭ��������x=5����Ķ��������С�
		cout << i << endl;
	}
	system("pause");
	return 0;
}