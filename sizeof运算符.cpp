//sizeof���������ĳһ�������ͻ�ĳһ�������ڴ�����ռ�ռ���ֽ�����
//sizeof(����������������)��sizeo �ȱ���������������
#include<iostream>
using namespace std;
int main()
{
	short int ashort; float afloat;
	int aint; long along; char achar;
	cout << "data type\t memory used(bytes) \n";  //�ڴ�ʹ��
	cout << "short int\t" << sizeof(ashort) << "\n";
	cout << "integer \t" << sizeof(aint) << "\n"; 
	cout << "long integer\t" << sizeof(along) << "\n";
	cout << "char	\t" << sizeof(achar) << "\n";
	cout << "float	\t" << sizeof(afloat) << "\n";
	system("pause");
	return 0;
}