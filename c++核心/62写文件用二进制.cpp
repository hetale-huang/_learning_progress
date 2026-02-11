//#include<iostream>
//using namespace std;
//#include<fstream>
//
////二进制文件 写文件
//class person
//{
//public:
//	char m_Name[64];//姓名
//	int m_Age;//年龄
//};
//
//int main()
//{
//	//1.写头文件
//	
//	//2.创建流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);//这里用二进制
//	//3.打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//	ofs.open("person.txt", ios::out | ios::binary);
//	//4.写文件
//	person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(person));
//	//5.关闭文件
//	ofs.close();
//
//	system("pause");
//	return 0;
//}