//#include"swap.h"
////�����ṹ�����
//struct student
//{
//	//����
//	string name;
//	//����
//	int age;
//	//����
//	int score;
//};
//
////1.ֵ����
//void printstudent1(student t)
//{
//	cout << "����" << t.name << "����" << t.age << "����" << t.score << endl;
//};
//
////2.��ַ����
//void printstudent2(struct student* p)
//{
//	cout << "����" << p->name << "����" << p->age << "����" << p->score << endl;
//};
//int main()
//{
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У�Ȼ���ӡ���е���Ϣ
//	student t;
//	t.name = "����";
//	t.age = 18;
//	t.score = 60;
//	//cout << "����" << t.name << "����" << t.age << "����" << t.score << endl;
//	//�����ṹ�����
//
//	//printstudent1(t);//�������ֵ����
//	printstudent2(&t);//������ǵ�ַ����
//
//	//ͬ��Ҫ��עһ����ǣ���ַ���ݻ�ı�����ֵ��ֵ���ݲ���ı䱾�����ݵ�ֵ��
//	system("pause");//�밴����ֵ����
//	return 0;
//}