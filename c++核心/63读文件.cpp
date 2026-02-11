//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//class person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
//void test01()
//{
//	ifstream ifs("person.txt", ios::in | ios::binary);//ifs是对象，ifstream是类型；
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//
//	person p;
//	ifs.read((char*)&p, sizeof(p));//把 p 的地址强制转换成 char*（这个是一个地址的解引用） 类型（C++ 要求读写字节流时使用字节指针）。
//	//告诉程序要读多少个字节（也就是 p 这个对象占的字节大小）
//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//
//	return 0;
//}