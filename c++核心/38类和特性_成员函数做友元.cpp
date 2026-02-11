//#include"swap.h"
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();//构造函数
//
//	void visit();//让visit函数可以访问building中的私有内容
//	void visit2();//让visit2函数不可以访问building中的私有内容
//
//	Building * building;//一个建筑物；定义一个指针变量building，指针类型就是building这个类；
//};
//class Building
//{
//	//定义一下友元函数，要让visit访问building的私有函数
//	//定义一下visit为goodgay下面成员函数是这个building的友元函数；
//	friend void GoodGay::visit();
//
//public:
//	Building();//构造函数
//public:
//	string m_sittingroom;//客厅，公开可访问
//private:
//	string m_bedroom;//卧室，私有不可访问
// };
//
////类外声明一下这些函数
//Building::Building()//building构造函数
//{
//	m_bedroom = "卧室";
//	m_sittingroom = "客厅";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit函数正在访问：" << building->m_sittingroom << endl;
//	cout << "visit函数正在访问：" << building->m_bedroom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_sittingroom << endl;
//	//cout << "visit2函数正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}