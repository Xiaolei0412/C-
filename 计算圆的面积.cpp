#include<iostream.h>
void main()
{
	const double PI = 3.1415926;
	double radius;
	double area;
	double circumference;
	cout <<"����뾶:";
	cin >> radius;
	area = PI*radius*radius;
	circumference = 2.0*PI*radius;
	cout <<"Բ���:" << area <<endl;
	cout <<"Բ�ܳ�:"<< circumference <<endl;
}