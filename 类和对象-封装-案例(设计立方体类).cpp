//���һ���������� �������������Լ������
//��ȫ�ֺ����ж������������Ƿ���ȣ�

#include<iostream>
using namespace std;
#include<string>

class cube
{
public:
//---------��Ϊ--------//
	//���ó�
	void setL(int L)
	{
		c_L = L;
	}
	//��ȡ��
	int getL()
	{
		return c_L;
	}
	//���ÿ�
	void setW(int W)
	{
		c_W = W;
	}
	//��ȡ��
	int getW()
	{
		return c_W;
	}
	//���ø�
	void setH(int H)
	{
		c_H = H;
	}
	//��ȡ��
	int getH()
	{
		return c_H;
	}
	//��ȡ�������ʽ��
	int getarea()
	{
		return c_L * c_W * 2 + c_L * c_H * 2 + c_H * c_W * 2;
	}
	//��ȡ���
	int getbulk()
	{
		return c_L * c_W*c_H;
	}
	//�ó�Ա�������ж����������Ƿ���ȣ����������ڷ���
	/*bool issameClass(cube &cub)
	{
		if (c_L() == cub.getL() && c_W() == cub.getW() && c_H() == cub.getH())
		{
			return true;
		}
		return false;
	}*/

//--------����-------//
	//��������
public:
	int c_L;
	int c_W;
	int c_H;
	int c_area;
	int c_bulk;

};

//����ȫ�ֺ����ж������������Ƿ���ȣ�
//bool����ֵ������ true; false;
bool issame(cube cub1, cube cub2)
{
	if (cub1.getL() == cub2.getL() && cub1.getW() == cub2.getW() && cub1.getH() == cub2.getH())
	{
		return true;
	}
		return false;
}


int main()
{
	//------------ע�⣺ֻ��public ��������-----------//
	//������һ�������壻
	cube cub1;
	cout << "�������һ��������ĳ���ߣ�" << endl;
	cout << "����"  ;
	cin >> cub1.c_L;
	cout << "��";
	cin >> cub1.c_W;
	cout << "�ߣ�";
	cin >> cub1.c_H;

	//cub1.setL(2);
	//cub1.setW(7);
	//cub1.setH(6);

	cout << "������1�����Ϊ��"<<cub1.getarea() << endl;
	cout << "������1�����Ϊ��" << cub1.getbulk() << endl;

	//�����ڶ��������壻
	cube cub2;
	cout << "������ڶ���������ĳ���ߣ�" << endl;
	cout << "����";
	cin >> cub2.c_L;
	cout << "��";
	cin >> cub2.c_W;
	cout << "�ߣ�";
	cin >> cub2.c_H;


	//cub2.setL(6);
	//cub2.setW(7);
	//cub2.setH(5);

	cout << "������2�����Ϊ��" << cub2.getarea() << endl;
	cout << "������2�����Ϊ��" << cub2.getbulk() << endl;

	//��ȫ�ֺ������жϣ��ò����͵��ú�����
	bool ret = issame(cub1, cub2);
		if (ret)
		{
			cout << "ȫ�ֺ����ж�---������������ȣ�" << endl;
		}
		else
		{
			cout << "ȫ�ֺ����ж�---���������岻��ȣ�" << endl;
		}

	//�ó�Ա�������жϣ��ò����͵��ú�����
	/*	ret = cub1.issameClass(cub2);
		if (ret)
		{
			cout << "��Ա�����ж�-������������ȣ�" << endl;
		}
		else
		{
			cout << "��Ա�����ж�-���������岻��ȣ�" << endl;
		}
*/

	//issame(cub1,cub2);
	system("pause");
	return 0;
}