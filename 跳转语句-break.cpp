/*
 ���ã���������ѡ��ṹ����ѭ���ṹ
 1.������switch��������У�������ǰѭ�����
*/


//����switch�����ʹ��break��
#include<iostream>
using namespace std;
int main()
{
	cout << "��ѡ����ս�������Ѷȣ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.���ѣ�" << endl;

	int num = 0;
	cin >> num;
	switch (num)
	{
		case 1:
			cout << "��ѡ����Ѷ�����ͨ" << endl; 
			break;  //�˳�ѭ��
		case 2:
			cout << "��ѡ����������е�" << endl;
			cout << "��ѡ����������е�" << endl;
			break;
		case 3:
			cout << "��ѡ����Ѷ�������" << endl;
			break;
	}
	system("pause");
	return 0;
}



//����ѭ�������ʹ��break��
#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
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
*/

//����Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ����
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j == 5)
			{
				break;  //�����ڲ�ѭ��
			}
			cout << "*" << "	";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
/*
���������
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*/