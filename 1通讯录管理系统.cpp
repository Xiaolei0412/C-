/*# ͨѶ¼����ϵͳ
   ��1.����ϵͳ����
    ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�
	��ϵͳ����Ҫʵ�ֵĹ������¡���
	1.�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
	2.��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
	3.ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
	4.������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
	5.�޸���ϵ�ˣ��������������޸�ָ����ϵ��
	6.�����ϵ�ˣ����ͨѶ¼��������Ϣ
	0.�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼

	//�����Ĳ�����//ÿһ���������֮����Ҫ������
	system("pause");
	system("cls");//������䣻
*/
#include<iostream>
using namespace std;
#include<string>
#define MAX 100
	//��չʾ�����˵����棻
void Menu()
{
	cout<<endl;
	cout << "-----------�����˵���-----------" << endl;
	cout << "---------1.�����ϵ��:----------"<< endl;
	cout << "---------2.��ʾ��ϵ�ˣ�---------" << endl;
	cout << "---------3.ɾ����ϵ�ˣ�---------" << endl;
	cout << "---------4.������ϵ�ˣ�---------" << endl;
	cout << "---------5.�޸���ϵ�ˣ�---------" << endl;
	cout << "---------6.�����ϵ�ˣ�---------" << endl;
	cout << "---------0.�˳�ͨѶ¼��---------" << endl;
}

//ʵ�����ͨѶ¼��ϵ�˵���Ϣ�Ľṹ�壻��Ҫ��¼�ж����������
struct person 
{
	string name;//����
	int sex; //�Ա�1-��/2-Ů����
	int age;  //����
	string phone;//�ֻ���
	string home;//��ַ

};
//���ͨѶ¼�ṹ�壻����ų�Ա��������Ա��Ϣ��
struct addressbook
{
	struct person personArray[MAX]; //ͨѶ¼��չ��1000��
	int size;  //��ǰ��ϵ�˸���(������൱��i++)
};
//����һ���������ϵ��-�ĺ�����
void addperson(addressbook *add)
{
	if (add->size > MAX)
	{
		cout << "���ͨѶ¼�Ѿ����ˣ�" << endl;
	}
	//����ͨѶ¼��Ա����Ϣ��
	else
	{
		cout << "����������" << endl;
		//������������ɺ����������ӵ�ͨѶ¼�ṹ����
		string name;
		cin >> name;
		add->personArray[add->size].name = name;

		//�Ա�
		int sex;
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		cin >> sex;
		if (sex == 1 ||sex == 2)
			add->personArray[add->size].sex = sex;

		//���䣻
		int age;
		cout << "����������" << endl;
		cin >> age;
		add->personArray[add->size].age = age;

		//��ϵ�绰��
		string phone;
		cout << "�������ֻ��绰" << endl;
		cin >> phone;
		add->personArray[add->size].phone = phone;

		//ͨѶ��ַ��
		string home;
		cout << "������ͨѶ��ַ" << endl;
		cin >> home;
		add->personArray[add->size].home = home;

		//������Ŀ�����֮��Ҫ��ͨѶ¼�ṹ��Ŀռ��1��
		add->size++;
		cout << "�����Ϣ�ɹ�" << endl;

		//�����Ĳ�����//ÿһ���������֮����Ҫ������
		system("pause");
		system("cls");//������䣻
	}
}

//������ʾ������ϵ�˵ĺ�����
void showperson(addressbook *add)
{
	//���ͨѶ¼��û���ˣ�����ʾΪ�գ�����ִ����ʾ��ϵ�˺�����
	if (add->size == 0)
	{
		cout << "ͨѶ¼��û����ϵ�ˣ��������ϵ�ˣ�" << endl;
	}
	else  //Ҫ��������ϵ�� ����Ҫ��forѭ����
	{
		for (int i = 0;i<add->size;i++)
		{
			cout << "������" << add->personArray[i].name << "\t�Ա�" << (add->personArray[i].sex == 1 ? "��" : "Ů") << "\t����" << add->personArray[i].age
				<< "\t�绰��" << add->personArray[i].phone << "\tͨѶ��ַ��" << add->personArray[i].home << endl;
		}

		//�����Ĳ�����//ÿһ���������֮����Ҫ������
		system("pause");
		system("cls");//������䣻
	} 
}
//(���ж���û������ˣ�Ҫ��û�о���������޴��ˣ�����
int isperson(addressbook *add,string name)
{ 
	//�ҵ���Ҫɾ�����Ǹ��ˣ�

	for (int i = 0; i < add->size; i++)
	{
		//�ҵ������������
		if (add->personArray[i].name == name)
		{
			return 1;
		}
		return -1;
	}


}

//����һ��ɾ����ϵ�˵ĺ�����(�ҵ����˽�������Ǩ�ƾ���ɾ����)
void deleteperson(addressbook *add)
{
	string name;
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	cin >> name;
	//�����Ƿ��и���ϵ�˵ĺ�����
	int ret = isperson(add,name);  //�ں���������Ѿ�����ĺ���ʱ����Ҫ+��&����
	if (ret != -1)
	{
		cout << "���޴������������룺" << endl;
	}
	else
	{
		char anser;
		cout << "�����ȷ����Ҫɾ������(Y or N ?)" << endl;
		cin >> anser;
		if (anser == 'Y')
		{
			for (int i = 0; i < add->size; i++)
			{
				//-----------------��-��-ǰ-��---------------------//
				add->personArray[i] = add->personArray[i + 1];  //���������ϵ���ƶ���ǰ��ʹ������ϵ���Ѿ�ɾ����
			}
			cout << "ɾ��" << add->personArray[add->size].name << "����Ϣ�ɹ�" << endl;
			add->size--; //����ͨѶ¼�е�������
		}
		else
		{
			cout << "\t��ô�밴��������ذ�" << endl;
		}
	}
	//�����Ĳ�����//ÿһ���������֮����Ҫ������
	system("pause");
	system("cls");//������䣻
}

//����һ��������ϵ�˵ĺ�����
void findperson(addressbook *add)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	//���ж��Ƿ��и���ϵ���� �����ж���ϵ�˵ĺ�����
	string name;
	cin >> name;
	int ret = isperson(add, name);  //�ں���������Ѿ�����ĺ���ʱ����Ҫ+��&����
	if (ret != -1)
	{
		cout << "��Ϊ����ѯ����Ҫ���ҵ���ϵ�ˣ��뿴����" << endl;
		cout << add->personArray[ret].name << endl;
	}
	else
	{
		cout << "��û�в鵽����Ҫ��ѯ���ˣ������������ *_*" << endl;
	}
	//�����Ĳ�����//ÿһ���������֮����Ҫ������
	system("pause");
	system("cls");//������䣻

}


int main()
{
	//����ͨѶ¼�ṹ�������
	struct addressbook add;

	//��ʼ��ͨѶ¼��
	add.size = 0;

	int select = 0;
	//while �����˳�ϵͳ��
	while (true)
	{
		Menu(); //��ʾ�˵���
		cin >> select;
		switch (select)  //ѡ���ѡ��
		{
		case 1:  // �����ϵ�� (���ú���addperson)
			addperson(&add);
			break;
		case 2: //��ʾ��ϵ�ˣ�(���ú���showperson)
			showperson(&add);  
			break;
		case 3:  //ɾ����ϵ��
			deleteperson(&add);
		/* �����Ƿ��и���ϵ�˵Ĺ���ʵ�֣�
		{
			string name;
			cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
			cin >> name;
			if (isperson(&add, name) == 0)
			{
				cout << "���޴��ˣ�����������" << endl;
			}
			else
			{
				cout << "�ҵ����ˣ����ٴ�ȷ��һ���Ƿ�Ҫɾ������" << endl;
			}

		}
		*/
			break;
		case 4:  //������ϵ��
			findperson(&add);
			break;
		case 5: //�޸���ϵ��
			break;
		case 6:  //�����ϵ�ˣ�
			break;
		case 0:  //�˳�ͨѶ¼
			cout << "�˳�ͨѶ¼" << endl<<"��ӭ�´�ʹ�ã�"<<endl;
			break;
		default:
			break;

			system("pause");
		return 0;
		}


	}
	system("pause");
	return 0;
}