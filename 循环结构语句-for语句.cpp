/*
	for�����ʽ��

	for(<���ʽ1>;<���ʽ2>;<���ʽ3>)
		<ѭ�������>

	�����á�������ѭ��������ִ��ѭ����䡣
*/

//������ 1+2+....+100��ֵ��


#include<iostream>
using namespace std;
int main()
{
	int n,sum = 0;
	for (n = 1; n <= 100; n++)   //ֱ��n>100ʱ����ѭ��.
		sum += n;    //�൱��sum=sum+n.
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}


//��ÿ��5�������1~100��������

#include<iostream>
using namespace std;
int main()
{
	int counter;
	for (counter = 0; counter <= 100; counter += 5) // *counter=counter+5
		cout << counter << endl;
	system("pause");
	return 0;
}
