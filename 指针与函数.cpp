//����ָ���������Ĳ��������Ըı�
//�����Ĵ��ݷ�ʽ��



#include<iostream>
using namespace std;
//1.ֵ���ݣ�����������ж������βε�ֵ����ô��Ӧ��ʵ���ǲ���Ӱ��ģ�
void swap1(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
//2.��ַ���ݣ�ʵ�β���ı䣻
void swap2(int *p1, int *p2)
{
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	cout << "��ַ���ݵĽ��Ϊ��" << endl;
	cout << "a1=" << *p1 << endl;
	cout << "b1=" << *p2 << endl;

}
//���ô��ݣ�
int main()
{
	int a = 99;
	int b = 11;
	swap1(a, b);
	swap2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}

/*
���������
x=11
y=99
��ַ���ݵĽ��Ϊ��
a=11
b=99
a=11
b=99
*/

//
#include<iostream>
using namespace std;
//����ð����������
void sort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t;
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

}

//Ҳ���Դ���һ����ӡ���������飻
void print(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	//����һ�����飻
	int arr[10] = { 12,45,78,89,56,23,14,25,36,39 };

	//�����鳤�ȣ�
	int len = sizeof(arr) / sizeof(arr[0]);

	//���ú�����ʵ��ð������
	sort(arr, len);

	//��ӡ���������飻(Ҳ�����õ��ú�������ʽ��ӡ)
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "�õ��ú�������ʽ���Ϊ��" << endl;
	print(arr, len);
	system("pause");
	return 0;
}