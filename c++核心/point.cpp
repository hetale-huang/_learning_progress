#include"point.h"

//在这里就是定义前面point中删掉的函数声明；
//设置x
void point::setx(int x)
{
	m_X = x;
}
//获取x
int point::getx()
{
	return m_X;
}
//设置y
void point::sety(int y)
{
	m_Y = y;
}
//获取y
int point::gety()
{
	return m_Y;
}
