#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double amount = 22.0 / 7; 
	cout << amount << endl;
	cout << setprecision(2) << amount << endl;
	     //��setprecision(2)�����ø���������Ч��λΪn 
	cout <<setiosflags(ios::fixed) << setprecision(2) << amount << endl;
	    //��setiosflags(ios::fixed)���̶��ĸ����ʾ
	system("pause");
	return 0;
}