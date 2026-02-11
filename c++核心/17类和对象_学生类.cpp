//#include"swap.h"
//
////学生类
//class student
//{
//	//类中的属性和行为，我们统一称为成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//
//public://权限
//	string m_name;
//	
//
//	//属性
//	int m_id;
//
//	//行为
//	//显示学生的姓名和学号
//
//	void showstudent()
//	{
//		cout << "姓名：" << m_name << "学号：" << m_id << endl;
//	}
//	//给姓名赋值
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void setid(int id)
//	{
//		m_id = id;
//	}
//};
//
////还有一种可以通过行为去给属性赋值；
//
//int main()
//{
//	student stu;
//
//	//赋值
//	//stu.m_id = 100;
//	//stu.m_name = "张三";
//
//	stu.setname("张三");
//	stu.setid(100);
//	stu.showstudent();
//
//
//
//	system("pause");
//	return 0;
//}