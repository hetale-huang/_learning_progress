//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	person(int age)//这个是形式参数；
//	{
//		//this指针指向的是 被调用的成员函数 所属的"类"的对象；
//
//		//仅有非静态变量；
//		this->age = age;
//	}
//
//	person personadd(person& p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，而*this指向的就是p2这个对象本体；
//		return *this;//最后这个是*this是一个数，但是person加上&就是取地址，为了保持不重新复制出来一个数；不加&也不会报错
//		//但是无法会重新复制出来多个数，除了第一个加上10，后面复制出来的找不到，只有一个值，所以p2.age=30；
//	}
//	int age;
//};
////1.解决名称冲突
//void test01()
//{
//	person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
////2.返回对象本身用 *this
//void test02()
//{
//	person p1(10);
//	person p2(20);
//	//链式编程思想
//	p2.personadd(p1).personadd(p1).personadd(p1).personadd(p1);
//
//	cout << "p2的年龄：" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}