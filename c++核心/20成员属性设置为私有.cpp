//#include"swap.h"
//class person
//{
//public:
//	//姓名设置可读可写
//	void setname(string name)
//	{
//		m_name = name;
//	}//可写的函数
//	string getname()
//	{
//		return m_name;
//	}//可读的函数
//
//	int getage()//获取年龄
//	{
//		return m_age;
//	}
//	//设置年龄的范围
//	void setage(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "你这个老妖精！" << endl;
//		}
//		m_age = age;
//	}
//
//	//情人设置
//	void setlover(string lover)
//	{
//		m_lover = lover;
//	}
//
//
//private:
//	string m_name;//可读可写 姓名
//	int m_age;//只读 年龄
//	string m_lover;//只写 情人
//};
//
//int main()
//{
//	person p;
//	//姓名设置
//	p.setname("张三");//写入名字
//	cout << "姓名：" << p.getname() << endl;//读取名字
//
//	//年龄设置
//	p.setage(50);
//	cout << "年龄" << p.getage() << endl;
//
//	//情人设置
//	p.setlover("苍井");
//	//cout<<"情人"<<p.m_lover<<endl;//只写属性，不可以读取；
//
//	system("pause");
//	return 0;
//}