//#include"swap.h"
//struct student
//{
//	string name;
//	int score;
//};//����ѧ��
//
//struct teacher
//{
//	string name;
//	struct student sarray[5];
//};//������ʦ������ʦ�������ѧ����
//
////�������ʦ��ѧ����ֵ�ĺ���
//void allocateSpace(struct teacher tarray[],int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tarray[i].name = "Teacher_";
//		tarray[i].name += nameSeed[i];//���ֿ��Զ���string��i++���ƣ�
//		for (int j = 0; j < 5; j++)
//		{
//			tarray[i].sarray[j].name = "student_";
//			tarray[i].sarray[j].name += nameSeed[j];
//
//			int random = rand() % 61 + 40;//....61����0-60������40����40-100��
//			tarray[i].sarray[j].score = random;//���������ṹ��İ���
//		}
//
//	}
//};
//
////��ӡ������Ϣ
//void printinfo(struct teacher tarray[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ��������" << tarray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout <<"\t" << "ѧ����������" << tarray[i].sarray[j].name << endl
//				<<"\t" << "������" << tarray[i].sarray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//����������ʦ������
//	struct teacher tarray[3];
//	
//	//��������ʦ��ֵ���ٽ�˸���Щѧ����ֵ��
//	int len = sizeof(tarray) / sizeof(tarray[0]);
//	allocateSpace(tarray, len);
//	
//	//��ӡ��Щ��Ϣ
//	printinfo(tarray, len);
//
//	system("pause");
//	return 0;
//}