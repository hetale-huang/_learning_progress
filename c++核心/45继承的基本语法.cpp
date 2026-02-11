//#include<iostream>
//using namespace std;
////普通实现页面
//
//////java页面
////class java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、注册...(公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////		cout << "java、python、c++、...（公共分类列表）" << endl;
////	}
////	void content()
////	{
////		cout << "java学科视频" << endl;
////	}
////};
////
//////python页面
////class python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、注册...(公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////		cout << "java、python、c++、...（公共分类列表）" << endl;
////	}
////	void content()
////	{
////		cout << "python学科视频" << endl;
////	}
////};
////
//////c++页面
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、注册...(公共头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////		cout << "java、python、c++、...（公共分类列表）" << endl;
////	}
////	void content()
////	{
////		cout << "c++学科视频" << endl;
////	}
////};
//
////继承实现页面
//class basepage
//{
//public:
//		void header()
//		{
//			cout << "首页、公开课、注册...(公共头部）" << endl;
//		}
//		void footer()
//		{
//			cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//		}
//		void left()
//		{
//			cout << "java、python、c++、...（公共分类列表）" << endl;
//		}
//};
////java页面
//class java : public basepage
//{
//public:
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
////python页面
//class python : public basepage
//{
//public:
//	void content()
//	{
//		cout << "python学科视频" << endl;
//	}
//};
////c++页面
//class CPP : public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java下载视频页面如下：" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "---------------------------------" << endl;
//
//	cout << "python下载视频页面如下：" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "---------------------------------" << endl;
//
//	cout << "c++下载视频页面如下：" << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}