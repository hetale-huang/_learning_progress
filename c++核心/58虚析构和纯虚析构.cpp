//#include<iostream>
//#include<string>
//using namespace std;
//
////虚析构和纯虚析构
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "animal构造函数调用" << endl;
//	}
//	//virtual~Animal()
//	//{
//	//	cout << "Animal析构函数调用" << endl;
//	//}
//	//纯虚函数
//
//	//纯虚析构 需要声明也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象；
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "animal的纯虚析构" << endl;
//}
//class cat :public Animal
//{
//public:
//	cat(string name)
//	{
//		cout << "cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout <<*m_Name<< "小猫在说话" << endl;
//	}
//
//	~cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "cat析构函数调用" << endl;
//			//没走cat的调用
//			//父类指针（animal）在析构时候，不会调用子类（cat）中析构函数，导致子类如果有堆区属性，出现内存泄露
//			//利用虚析构可以解决内存泄露的问题
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string *m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new cat("Tom");
//	animal->speak();
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}