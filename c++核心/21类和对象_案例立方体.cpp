//#include"swap.h"
////立方体类设计
////1.创建立方体类
////2.设计属性
////3.设计行为 获取立方体面积和体积
////4.分别利用全局函数和成员函数 判断两个立方体是否相等
//
//class cube
//{
//public:
//
//	//设置长
//
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getl()
//	{
//		return m_L;
//	}
//	//设置宽
//
//	void setw(int w)
//	{
//		m_w = w;
//	}
//	//获取宽
//
//	int getw()
//	{
//		return m_w;
//	}
//	//设置高
//
//	void seth(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//
//	int geth()
//	{
//		return m_H;
//	}
//	//获取立方体的面积
//
//	int calculateS()
//	{
//		return 2 * m_L * m_w + 2 * m_w * m_H + 2 * m_L * m_H;
//	}
//	//获取立方体的体积
//
//	int calculatev()
//	{
//		return m_L * m_w * m_H;
//	}
//
//	//利用成员函数判断两个立方体是否相等
//	bool issamebyclass(cube& c)
//	{
//		if (m_L == c.getl() && m_w == c.getw() && m_H == c.geth())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//长
//	int m_w;//宽
//	int m_H;//高
//};
//
//bool isSame(cube& c1, cube& c2)
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	cube c1;
//	c1.setL(10);
//	c1.setw(10);
//	c1.seth(10);
//
//	cube c2;
//	c2.setL(10);
//	c2.setw(10);
//	c2.seth(10);
//
//	//600
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	//1000
//	cout << "c1的体积为：" << c1.calculatev() << endl;
//
//
//	bool ret = isSame(c1, c2);
//	if (ret) //完全等价于ret==true；
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//
//	//利用成员函数判断
//	ret = c1.issamebyclass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2是不相等的" << endl;
//	}
//	system("pause");
//	return 0;
//}