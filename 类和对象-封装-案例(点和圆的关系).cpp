#include<iostream>
using namespace std;
//�ȶ���һ������ࣻ
class point  //Ҳ����һ���Լ����������
{
public:
	//����x;
	void setx(int x)
	{
		p_x = x;
	}
	//��ȡx��
	int getx()
	{
		return p_x;
	}
	//����y��
	void sety(int y)
	{
		p_y = y;
	}
	//��ȡy��
	int gety()
	{
		return p_y;
	}
private:
	int p_x; 
	int p_y;

};
//�ȶ���һ��Բ���ࣻ
class circle
{
public:

	//���ð뾶��
	void setr(int r)
	{
		c_r = r;
	}
	//��ȡ�뾶��
	int getr()
	{
		return c_r;
	}
	//����Բ�ģ�
	void setcenter(point center)
	{
		c_center = center;
	}
	//��ȡԲ�ģ�
	point getcenter()
	{
		return c_center;
	}

private:
	//����һ���뾶��
	int c_r;
	point c_center;//Բ��
};
//�жϵ��Բ��λ�ù�ϵ��
//------------------Բ------------��--//
void isincircle(circle &c, point &p)
{
	//����㵽Բ�ĵľ��룻
	//��ȡ�㵽Բ�ĵľ���
	int distence = (c.getcenter().getx() - p.getx())*(c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety())*(c.getcenter().gety() - p.gety());

	//����뾶��ƽ����
	//��ȡ�뾶��ƽ��
	int R1 = c.getr()*c.getr();

	//�Ƚϵ㵽Բ�ĵľ��룻
	if (distence == R1)
	{
		cout << "�����Բ�ϣ�" << endl;
	}
	else if (distence < R1)
	{
		cout << "�����Բ��!" << endl;
	}
	else 
	{
		cout << "�����Բ�⣡" << endl;
	}
}

int main()
{
	circle c;
	point center;
	//����Բ�ĵĵ�
	c.setr(10);
	center.setx(10);
	center.sety(10);
	c.setcenter(center);

	//����һ����
	point p;
	p.setx(10);
	p.sety(5);

	//������������������
	isincircle(c, p);
	system("pause");
	return 0;
}