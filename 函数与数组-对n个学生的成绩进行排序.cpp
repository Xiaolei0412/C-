// ��n��ѧ���ĳɼ���������ѧ����Ϣ��ѧ�� ���� �ɼ� ��ð������

#include<iostream>
using namespace std;
//�ȶ���ѧ����Ϣ�Ľṹ������ struct
struct student
{
	int num;
	char name[20];
	float grade;
};
student stu[];
//����һ�������� sort
void sort(student stu[], int n);
//���������� int main()
int main()
{
	int n; //����n��ѧ����
	int i;
	cout << "��������Ҫ���ʵ�ѧ���ĸ�����" << endl;
	cin >> n;

	//��forѭ������n��ѧ������Ϣ���������ȶ���Ľṹ���Ա��i 
	for (i = 0; i <= n; i++)
	{
		cout << "������ѧ����ѧ�� ���� �ɼ���" << endl;
		cin >> stu[i].num >> stu[i].name >> stu[i].grade;
	}
	
	//���ú���
	sort(stu, n);
	cout << " **************�����*********** " << endl;
	cout << "ѧ��    ����    ����" << endl;
	for (i = 0; i <= n; i++)                     //��������ģ��ṹ���Ա�ķ��ʣ�
	{
		cout << stu[i].num << "\t" << stu[i].name << "\t" << stu[i].grade << endl;;
	}

	void sort(student stu[], int n);  //������������ð������
	{
		student temp;
		int j;
		for (i=0;i<n-1;i++)
			for(j=0;j<n-i-1;j++)
				if (stu[i].grade < stu[i + 1].grade)
				{
					temp = stu[i];
					stu[i] = stu[i + 1];
					stu[i + 1] = temp;
				}
	}
	system("pause");
	return 0;
}



//�������������
