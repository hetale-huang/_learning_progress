#pragma once        //防止头文件重复包含
#include<iostream>
using namespace std;

//类模板分文件编写以及解决的问题
template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);

	void showperson();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void person<T1, T2>::showperson()
{
	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
}