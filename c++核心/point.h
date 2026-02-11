#pragma once//防止这个文件被运行两次以上，也就是只让这个文件在cpp中运行一次；防止同一个头文件被多次包含到同一个编译单元中。
#include <iostream>
using namespace std;

class point
{
public:
	//设置x
	void setx(int x);
	//获取x
	int getx();
	//设置y
	void sety(int y);
	//获取y
	int gety();
private:
	int m_X;
	int m_Y;
};