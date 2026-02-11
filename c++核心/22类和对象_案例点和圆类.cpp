//#include"swap.h"
//using namespace std;
//#include"circle.h"
//#include"point.h"
//
////点和圆关系案例
//
////点类
//class point
//{
//public:
//	//设置x
//	void setx(int x)
//	{
//		m_x = x;
//	}
//	//获取x
//	int getx()
//	{
//		return m_x;
//	}
//	//设置y
//	void sety(int y)
//	{
//		m_y = y;
//	}
//	//获取y
//	int gety()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//
////圆类
//class circle
//{
//public:
//	//设置半径
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	//获取半径
//	int getr()
//	{
//		return m_r;
//	}
//	//设置圆心
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	//获取圆心
//	point getcenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;//半径
//	point m_center;//圆心
//};
//
////判断点和圆关系
//void isincircle(circle &c,point &p)
//{
//	//计算两点之间距离平方
//	int distance =
//		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	//计算半径的平方
//	int rdistance = c.getR() * c.getR();
//
//	//判断关系
//	if (distance == rdistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//		
//}
//
//int main()
//{
//	//创建圆
//	circle c;
//	c.setR(10);
//	point center;
//	center.setx(10);
//	center.sety(0);
//	c.setcenter(center);
//	//创建点
//	point p;
//	p.setx(10);
//	p.sety(10);
//	//判断关系
//	isincircle(c, p);
//
//	system("pause");
//	return 0;
//}