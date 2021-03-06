/* ************************************************************************************
		                    实型（浮点型）
作用：表示小数。

浮点型变量类型：
1.单精度 float
2.双精度 double

数据类型              占用空间                有效数字范围
 float                  4字节                  7位有效数字
 double                 8字节                15 -- 16位有效数字

 区别：表示的有效数字范围不同
 浮点型两种表示形式：
 1.小数形式：数字和小数点组成   eg:0.123,.234,0.0
 2.指数形式（科学计数法） 123e5/123e-5 或 123E5/123E-5， 表示：123*10^5/123*0.1^5
   指数形式注意：E/e 前面必须要有数字，且 E/e 后面的指数必须为整数
************************************************************************************ */
#include <iostream>
using namespace std;
int main()
{
	float f1 = 3.14f;
	float f2 = 3.1415926f;
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl; //默认情况下输出一个小数，会显示出6位有效数字
	double d1 = 3.14;
	double d2 = 3.1415926;
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl; //默认情况下输出一个小数，会显示出6位有效数字

	//科学计数
	float f3 = 3.14e2f;  // 3.14*10^2 =  3.14*100  = 314
	cout << "f3 = " << f3 << endl;
	double d3 = 3.14e-2; // 3.14*0.1^2 =  3.14*0.01=0.0314
	cout << "d3 = " << d3 << endl;
	
	// E/e 前面必须要有数字
	//double d4 = -e2;
	//cout << "d4 = " << d4 << endl; 

	//E/e 后面的指数必须为整数
	//double d5 = 3.14e1.2;
	//cout << "d5 = " << d5 << endl;


	system("pause");
	return 0;
}
