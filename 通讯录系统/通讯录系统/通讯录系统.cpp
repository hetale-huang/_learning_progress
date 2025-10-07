//1.�˵�����1
//2.�˳�����0
//3.�����ϵ��

#include"swap.h"
#define MAX 1000//�궨�岻�ܼӷֺţ�������Ҫ�������д��룻

//3.�ȴ�����ϵ�˺�ͨѶ¼�Ľṹ�壬�����ϵ��

//��ϵ�˽ṹ��
struct person
{
	string m_name;//����
	int m_sex;//�Ա�
	string m_adress;//��ַ
	int m_age;//����
	string m_phone;//�ֻ�����
};

//ͨѶ¼�ṹ��
struct addressbooks
{
	struct person personarray[MAX];//�������飬1000�ˣ�Ҳ����ͨѶ¼�ģ���person��addressbooks��ϵ������
	int m_size;  //ͨѶ¼��ǰ��¼��ϵ�˸���
};

//�����ϵ�˵ĺ���
void addperson(addressbooks * abs)//������ǣ�ѡȡabs�ĵ�ַҲ���Ǽ�ӷ��ʵ�abs������abs����Ҫ��->�����������ֱ����.
{
	if (abs->m_size == MAX)
	{
		cout << "��ϵ���Ѵﵽ���������,ͨѶ¼�����޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		string name;
		cout << "�����ϵ������" << endl;
		cin >> name;
		//�������
		abs->personarray[abs->m_size].m_name = name;//personnarray������ǲ����õ�ַ��������.��ֱ�ӷ��ʣ�

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->m_size].m_sex = sex;
				break;//��������䣬��ֹ���ڲ��ѭ����
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		//����
		int age = 0;
		cout << "����������" << endl;
		cin >> age;
		abs->personarray[abs->m_size].m_age = age;

		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//סַ
		string address;
		cout << "�������ͥסַ:" << endl;
		cin >> address;
		abs->personarray[abs->m_size].m_adress = address;

		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ǰ��ϵ����:" << abs->m_size << endl;

		cout << "��ӳɹ�!" << endl;

		//�����Ļ
		system("pause");//�����������
		system("cls");//�����Ļ������,cls�Ĺ��ܾͻ������Ļ��
	}
};

//��ʾ��ϵ�˵ĺ���
void showaddressbooks(struct addressbooks * abs)
{
	if (abs->m_size == 0)
	{
		cout << "ͨѶ¼û��һ���ˣ���" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "\t" << "������" << abs->personarray[i].m_name << "\t" ;
			if (abs->personarray[i].m_sex == 1)
			{
				cout << "\t" << "�Ա�" << "��" << "\t" ;
			}
			else
			{
				cout << "\t" << "�Ա�" << "Ů" << "\t" ;
			}
			cout << "\t" << "��ַ��" << abs->personarray[i].m_adress << "\t" ;
			cout << "\t" << "�绰���룺" << abs->personarray[i].m_phone << "\t" ;
			cout << "\t" << "���䣺" << abs->personarray[i].m_age << "\t";
		}
		system("pause");
		system("cls");//��һ����Ļ
	}
};



//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
// ����1 ͨѶ¼ ����2 �Ա�����
int isExist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//�ҵ��û����������
		if (abs->personarray[i].m_name == name)
		{
			return i;//�ҵ��ˣ��������������������ڵ��±�
		}
	}
	return -1;//�������������û���ҵ�������-1��
}

//ɾ����ϵ�˵ĺ���
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;
	//��������abs�Ǳ���������Ҫ��&��ȡ��ַ�����������Ѿ��ǵ�ַ�ˣ�����ֱ����abs
	int ret = isExist(abs, name);//��Ϊabs�����Ѿ���һ����ַ�ˣ�����ֱ����abs

	if (ret != -1)//������
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_size; i++)
		{
			//����ǰ��
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->m_size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�!" << endl;
	}
	else
	{
		cout << "���޴���!" << endl;
	}

	system("pause");
	system("cls");
}

//������ϵ�˵ĺ���
void findperson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ����ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "������" << abs->personarray[ret].m_name << endl;
		cout << "���䣺" << abs->personarray[ret].m_age << endl;
		cout << "��ͥסַ��" << abs->personarray[ret].m_adress << endl;
		cout << "�绰���룺" << abs->personarray[ret].m_phone << endl;
		if (abs->personarray[ret].m_sex == 1)
		{
			cout << "�Ա���" << endl;
		}
		else
		{
			cout << "�Ա�Ů" << endl;
		}

	}
	else
	{
		cout << "δ�ҵ���ϵ�ˣ���" << endl;
	}

	system("pause");
	system("cls");
}

//���Ҫ����ǰ��ĺ�����������Ӻ���һ��Ҫ�ڵ��õĺ�������


//5.�޸�ָ����ϵ����Ϣ
void modifyperson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)//��ζ���������
	{
		//����
		string name;
		cout << "��������Ҫ�޸ĵ�������" << endl;
		cin >> name;
		abs->personarray[ret].m_name = name;
		//����
		int age;
		cout << "��������Ҫ�޸ĵ����䣺" << endl;
		cin >> age;
		abs->personarray[ret].m_name = name;
		//סַ
		string address;
		cout << "��������Ҫ�޸ĵ�סַ��" << endl;
		cin >> address;
		abs->personarray[ret].m_adress = address;

		//�绰����
		string phone;
		cout << "��������Ҫ�޸ĵĵ绰���룺" << endl;
		cin >> phone;
		abs->personarray[ret].m_phone = phone;

		//�Ա�
		int sex = 0;
		cout << "��������Ҫ�޸ĵ��Ա�" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personarray[ret].m_sex = sex;
		}
		else
		{
			cout << "������Ч����" << endl;
		}

	}
	else
	{
		cout << "���޴��ˣ���" << endl;
	}

	system("pause");
	system("cls");
}


//�����ϵ�˵ĺ���
void cleanperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����" << endl;

	//�����������
	system("pause");
	system("cls");
}

//�˵�����
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;

};

int main()
{
	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	//��ʼ����ǰ����ϵ����Ա����
	abs.m_size = 0;

	while (true)//����0�����⣬��ѭ��������һ����ѭ����
	{
		int select = 0;//����һ�����������û������ֵ����ѡ����

		showmenu();//1.�˵������ĵ���

		cin >> select;

		//2.��д�˳��˵��Ĺ��ܣ�Ҳ����0�ŵĹ��ܣ�ѡ����switch��ʵ��ѡ����
		switch (select)
		{
		case 1://1.�����ϵ��
			addperson(&abs);//��ͨѶ¼�ı�������ȥ��Ҫ�õ�ַ���ݣ������Ϳ�������ʵ�ʲ���������һ������ĺ�����
			break;
		case 2://2.��ʾ��ϵ��
			showaddressbooks(&abs);
			break;
		case 3://3.ɾ����ϵ��
		//{
		//	cout << "������ɾ����ϵ��������" << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ�����" << endl;//���switch����case�Ĵ���̲ܶ��ᱨ��
		//	}//�����������ܳ��ͻᱨ��

		//}
			deleteperson(&abs);
			break;
		case 4://4.������ϵ��
			findperson(&abs);
			break;
		case 5://5.�޸���ϵ��
			modifyperson(&abs);
			break;
		case 6://6.�����ϵ��
			cleanperson(&abs);
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "��ӭ�´ι���" << endl;
			system("pause");//�������ִ����һ��
			return 0;//�˳�����,Ҳ����ȫ���˳�,��ΪΪ0��������ѭ��������
			break;
		default://�����⼸�ֽ����ִ��default��
			break;//break���Ǵ���������Ȼ��һֱ�����ߣ�
		}

	}


	//���������ѭ������ֱ��������һ�������Լ���whileѭ��
	system("pause");
	return 0;//�����˳���������������Ӻ����������ã�
}