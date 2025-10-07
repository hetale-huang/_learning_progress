//#include"swap.h"
////创建结构体变量
//struct student
//{
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//};
//
////1.值传递
//void printstudent1(student t)
//{
//	cout << "姓名" << t.name << "年龄" << t.age << "分数" << t.score << endl;
//};
//
////2.地址传递
//void printstudent2(struct student* p)
//{
//	cout << "姓名" << p->name << "年龄" << p->age << "分数" << p->score << endl;
//};
//int main()
//{
//	//结构体做函数参数
//	//将学生传入到一个参数中，然后打印所有的信息
//	student t;
//	t.name = "张三";
//	t.age = 18;
//	t.score = 60;
//	//cout << "姓名" << t.name << "年龄" << t.age << "分数" << t.score << endl;
//	//创建结构体变量
//
//	//printstudent1(t);//这个就是值传递
//	printstudent2(&t);//这个就是地址传递
//
//	//同样要关注一点就是，地址传递会改变数据值；值传递不会改变本来数据的值；
//	system("pause");//请按任意值继续
//	return 0;
//}