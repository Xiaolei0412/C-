/*
	�ַ������Ⱥ�����strlen(�ַ�������)��
	�ַ�������������strcpy(�ַ�����1���ַ�����2)�� ���ǽ�2 ���Ƶ�1��ȥ��
					** 1�ĳ���ҪԶ����2
					����strcpy(s1,"hello") //1��������������
		 //�ַ����ĸ�ֵ
			strcpy(t,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],t);

	�ַ������Ӻ�����strcat(�ַ�����1���ַ�����2��
  **�ַ����ȽϺ�����strcmp(�ַ���1���ַ���2��
					** ��������ֵ��
					��1��.1 == 2������ֵ0
					��2��.1 >  2, ����ֵΪ������
					��3��.1 <  2, ����ֵΪ������
		//strcmp(�ַ���1���ַ���2��
cin.getҲ���Խ��պ��пո���ַ���
cin.getline ���Խ��պ��пո���ַ��� �Զ���ַ������������ʱ Ӧʹ�����
*/
//�������������ͬѧ�����֣���ð������ķ�������������

#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int N = 5;
	char name[N][16],t[16];
	int i, j;

	cout << "������"<<N<<"��ѧ�������֣�" << endl;
	for (i = 0; i < N; i++)
		cin.getline(name[i], 16);
	//ʵ��ð������
	for(i=0;i<N-1;i++)
		for (j = 0; j < N - i - 1; j++)
			if (strcmp(name[j],name[j + 1]) > 0)  //���ǰ������ִ��ں��������
			{
				strcpy(t,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],t);
			}
	for(i=0;i<N;i++)
		cout<<"������ѧ������Ϊ"<<name[i]<<endl;

	system("pause");
	return 0;
}