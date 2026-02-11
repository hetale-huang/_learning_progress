//#include"swap.h"
////三种保护权限
////公共保护权限 public 类内可以访问 类外可以访问
////保护权限 protected 类内可以访问 类外不可以访问 继承有父子关系，儿子可以访问父亲中保护的内容
////私有权限 private 类内可以访问 类外不可以访问  儿子不能访问父亲的私有内容
//class person
//{
//	//姓名 公开权限
//public:
//	string m_name;
//
//	//汽车保护权限
//protected:
//	string m_car;
//	//银行卡密码 私有权限
//private:
//	int m_password;
//public:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = 123456;
//	}
//};
//
//int main()
//{
//	person p;
//	p.m_name = "李四";
//	//p.m_car = "奔驰"; 保护类 访问不到
//	//p.m_password = 123; 私有类权限外访问不到
//
//	p.func();
//	system("pause");
//	return 0;
//}