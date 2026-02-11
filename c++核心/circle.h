#pragma once
#include<iostream>
using namespace std;
#include"point.h"

//圆类，这里只需要出现函数的声明
class circle
{
public:
	//设置半径
	void setR(int r);

	//获取半径
	int getR();

	//设置圆心
	void setcenter(point center);//函数没有定义就会出现绿色的线，不要紧

	//获取圆心
	point getcenter();

private:
	int m_R;//半径
	point m_center;//圆心
};