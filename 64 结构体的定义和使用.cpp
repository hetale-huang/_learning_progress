//#include"swap.h";
////结构体的定义（仅有一种方式）
//struct student
//{
//	string name;
//	int age;
//	int score;
//}st3;
////结构体的变量定义方式
////1。直接定义
////2.括号定义
////3.在结构体定义之后定义
//
//int main()
//{
//	struct student st1;//也可以不写struct  1.
//	st1.age = 18;
//	st1.name = "张三";
//	st1.score = 100;
//	cout << "姓名" << st1.name <<endl<< "年龄" << st1.age <<endl<<"分数" << st1.score << endl;
//
//	//2.
//	student st2 = { "李四",18,90};
//	cout << "姓名" << st2.name << endl << "年龄" << st2.age << endl << "分数" << st2.score << endl;
//
//	//第三种一般都不用
//	return 0;
//}