#include"circle.h"

//在这里就是定义circlr中删掉的函数声明；
//设置半径
void circle::setR(int r)
{
	m_R = r;
}
//获取半径
int circle::getR()
{
	return m_R;
}
//设置圆心
void circle::setcenter(point center)
{
	m_center = center;
}
//获取圆心
point circle::getcenter()
{
	return m_center;
}


