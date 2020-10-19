/*
	指针数组：首先它是一个数组，数组的元素都是指针，数组占多少个字节由数组本身决定。它是“储存指针的数组”的简称。
	数组指针：首先它是一个指针，它指向一个数组。在32 位系统下永远是占4 个字节，至于它指向的数组占多少字节，不知道。它是“指向数组的指针”的简称。
	//类型名 *数组名[数组长度]
*/
//按照数组元素的大小对数组元素地址进行排序（冒泡排序）
//sort 排序函数
#include<iostream>
using namespace std;
void sort(int *x[],int n)   //按照指针数组x所指向变量的值的大小，对指针数组x进行排序；
{
	int t;
	for (int i = 0; i < n - 1;i++)  //冒泡排序
	{ 
		for (int j = 0; j < n - i - 1; j++)  //相邻元素的比较
		{
			if (*x[j] > *x[j + 1])
			{
				t = *x[j];  //*x[j]为元素值；
				*x[j] = *x[j + 1];
				*x[j + 1] = t;
			}
		}
	}
		
		
}
int main()
{
	int i;
	int a[10] = { 12,45,78,89,56,23,14,25,36,47 };
	//先声明指针数组；
	int *b[10]; 
	//将a数组里的地址赋值给b[i]；
	for (int i = 0; i < 10; i++)
	{
		b[i] = &a[i];  //&a[i]为a[10]中的每一个地址；
	}
	sort(b, 10); //调用函数就行排序
	cout << "输出排序后的序列：" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << *b[i] << "   ";
	}


	system("pause");
	return 0;
}