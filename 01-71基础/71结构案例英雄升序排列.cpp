#include"swap.h"
//����һ��Ӣ��
struct hero
{
	//mingzi
	string name;
	//xinbie
	int age;
	//nianling
	string sex;
};

//������������
void bubblesort(struct hero sarr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (sarr[j].age > sarr[j + 1].age)
			{
				struct hero temp = sarr[j + 1];//����һ���յ��Ա���
				sarr[j + 1] = sarr[j];
				sarr[j] = temp;

			}
		}
	}
};

int main()
{
	//����һ��Ӣ�۽ṹ��
	//��������
	struct hero sarr[5]
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int len = sizeof(sarr) / sizeof(sarr[0]);
	//���������������
	bubblesort(sarr, len);
	//����ӡ���

	for (int i = 0; i <len; i++)
	{
		cout << "������" << sarr[i].name << "���䣺" << sarr[i].age << "�Ա�" << sarr[i].sex << endl;
	}

	system("pause");
	return 0;
}