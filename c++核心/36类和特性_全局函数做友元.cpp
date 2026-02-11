//#include"swap.h"
//
////建筑物的类，全局函数
//class Building
//{
//friend void goodgay(Building* building);//全局函数goodgay是friend的好朋友，所以可以访问私有的函数；
////就是将这一行头一行复制过来，然后加上friend就可以了；
//
//public:
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_sittingroom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
////全局函数；
//void goodgay(Building* building)
//{
//	cout << "好基友全局函数 正在访问：" << building->m_sittingroom << endl;//地址就是用->来进行访问的；
//
//	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;//这是私有的，并无法访问；
//}
//
//void test01()
//{
//	Building building;
//	goodgay(&building);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}