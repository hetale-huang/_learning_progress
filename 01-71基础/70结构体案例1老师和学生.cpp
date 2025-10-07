//#include"swap.h"
//struct student
//{
//	string name;
//	int score;
//};//定义学生
//
//struct teacher
//{
//	string name;
//	struct student sarray[5];
//};//定义老师，把老师里面包含学生；
//
////定义给老师和学生赋值的函数
//void allocateSpace(struct teacher tarray[],int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tarray[i].name = "Teacher_";
//		tarray[i].name += nameSeed[i];//名字可以定义string来i++递推；
//		for (int j = 0; j < 5; j++)
//		{
//			tarray[i].sarray[j].name = "student_";
//			tarray[i].sarray[j].name += nameSeed[j];
//
//			int random = rand() % 61 + 40;//....61就是0-60，加上40就是40-100；
//			tarray[i].sarray[j].score = random;//这就是随机结构体的案例
//		}
//
//	}
//};
//
////打印所有信息
//void printinfo(struct teacher tarray[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师的姓名：" << tarray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout <<"\t" << "学生的姓名：" << tarray[i].sarray[j].name << endl
//				<<"\t" << "分数：" << tarray[i].sarray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//创建三名老师的数组
//	struct teacher tarray[3];
//	
//	//给三名老师赋值，再借此给这些学生赋值；
//	int len = sizeof(tarray) / sizeof(tarray[0]);
//	allocateSpace(tarray, len);
//	
//	//打印这些信息
//	printinfo(tarray, len);
//
//	system("pause");
//	return 0;
//}