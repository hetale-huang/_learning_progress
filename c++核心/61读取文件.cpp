//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
////文本文件 读文件
//void test01()
//{
//	//1.包含头文件
//
//	//2.创建流对象
//	ifstream ifs;
//	//3.打开文件 并且判断是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())//意思是如果文件没有打开，输出以下的字符，！这里是逻辑运算符；会有false，和true，但是这里是如果没有打开的意思。
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4.读文件
//	//第一种
//	//char buf[1024] = { 0 };//字符数组buf
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	string buf;
//	while (getline(ifs, buf))//getline是ifs的成员函数；作用是读取文件中的一整行文本存入字符数组中
//	{
//		cout << buf << endl;
//	}
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file意思是文件的最后一行或者最后部分
//	{
//		cout << c;
//	}
//	//5.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
////挑一种记住他