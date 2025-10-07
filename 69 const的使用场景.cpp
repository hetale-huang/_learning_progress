//#include"swap.h"
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//
//};
//
//void printstudent(const struct student* stu)//将函数的参数改为地址，可以减少内存空间，不会复制新的副本出来。
//{
//	//t->age = 150;//这就修改不了了加上const，一旦修改就会有报错。
//	cout << "姓名" << stu->name << "年龄" << stu->age << "分数" << stu->score << endl;
//};
////值传递
//int main()
//{
//	student t = { "zhangsan",18,60 };
//	printstudent(&t);//调用一下值传递
//	system("pause");
//	return 0;
//}