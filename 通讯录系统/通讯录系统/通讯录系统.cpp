//1.菜单功能1
//2.退出功能0
//3.添加联系人

#include"swap.h"
#define MAX 1000//宏定义不能加分号，除非他要运行这行代码；

//3.先创建联系人和通讯录的结构体，添加联系人

//联系人结构体
struct person
{
	string m_name;//名字
	int m_sex;//性别
	string m_adress;//地址
	int m_age;//年龄
	string m_phone;//手机号码
};

//通讯录结构体
struct addressbooks
{
	struct person personarray[MAX];//最大的数组，1000人，也就是通讯录的，将person和addressbooks联系起来；
	int m_size;  //通讯录当前记录联系人个数
};

//添加联系人的函数
void addperson(addressbooks * abs)//这里就是，选取abs的地址也就是间接访问的abs；所以abs底下要用->，但是如果是直接用.
{
	if (abs->m_size == MAX)
	{
		cout << "联系人已达到最大上限了,通讯录已满无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		string name;
		cout << "添加联系人姓名" << endl;
		cin >> name;
		//添加姓名
		abs->personarray[abs->m_size].m_name = name;//personnarray里面就是不是用地址，所以用.来直接访问；

		//性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->m_size].m_sex = sex;
				break;//控制流语句，终止最内层的循环；
			}
			else
			{
				cout << "输入有误请重新输入" << endl;
			}
		}

		//年龄
		int age = 0;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personarray[abs->m_size].m_age = age;

		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//住址
		string address;
		cout << "请输入家庭住址:" << endl;
		cin >> address;
		abs->personarray[abs->m_size].m_adress = address;

		//更新通讯录人数
		abs->m_size++;
		cout << "当前联系人数:" << abs->m_size << endl;

		cout << "添加成功!" << endl;

		//清空屏幕
		system("pause");//按任意键继续
		system("cls");//清空屏幕的命令,cls的功能就会清除屏幕；
	}
};

//显示联系人的函数
void showaddressbooks(struct addressbooks * abs)
{
	if (abs->m_size == 0)
	{
		cout << "通讯录没有一个人！！" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "\t" << "姓名：" << abs->personarray[i].m_name << "\t" ;
			if (abs->personarray[i].m_sex == 1)
			{
				cout << "\t" << "性别：" << "男" << "\t" ;
			}
			else
			{
				cout << "\t" << "性别：" << "女" << "\t" ;
			}
			cout << "\t" << "地址：" << abs->personarray[i].m_adress << "\t" ;
			cout << "\t" << "电话号码：" << abs->personarray[i].m_phone << "\t" ;
			cout << "\t" << "年龄：" << abs->personarray[i].m_age << "\t";
		}
		system("pause");
		system("cls");//清一下屏幕
	}
};



//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
// 参数1 通讯录 参数2 对比姓名
int isExist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//找到用户输入的姓名
		if (abs->personarray[i].m_name == name)
		{
			return i;//找到了，返回这个人所在数组存在的下标
		}
	}
	return -1;//如果遍历结束都没有找到，返回-1；
}

//删除联系人的函数
void deleteperson(addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;

	string name;
	cin >> name;
	//主函数中abs是变量，所以要用&来取地址，但是这里已经是地址了，所以直接用abs
	int ret = isExist(abs, name);//因为abs这里已经是一个地址了，所以直接用abs

	if (ret != -1)//不等于
	{
		//查找到人，要进行删除操作
		for (int i = ret; i < abs->m_size; i++)
		{
			//数据前移
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->m_size--;//更新通讯录中的人员数
		cout << "删除成功!" << endl;
	}
	else
	{
		cout << "查无此人!" << endl;
	}

	system("pause");
	system("cls");
}

//查找联系人的函数
void findperson(addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定联系人是否在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "姓名：" << abs->personarray[ret].m_name << endl;
		cout << "年龄：" << abs->personarray[ret].m_age << endl;
		cout << "家庭住址：" << abs->personarray[ret].m_adress << endl;
		cout << "电话号码：" << abs->personarray[ret].m_phone << endl;
		if (abs->personarray[ret].m_sex == 1)
		{
			cout << "性别：男" << endl;
		}
		else
		{
			cout << "性别：女" << endl;
		}

	}
	else
	{
		cout << "未找到联系人！！" << endl;
	}

	system("pause");
	system("cls");
}

//如果要调用前面的函数，那这个子函数一定要在调用的函数后面


//5.修改指定联系人信息
void modifyperson(addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)//意味着有这个人
	{
		//姓名
		string name;
		cout << "请输入您要修改的姓名：" << endl;
		cin >> name;
		abs->personarray[ret].m_name = name;
		//年龄
		int age;
		cout << "请输入您要修改的年龄：" << endl;
		cin >> age;
		abs->personarray[ret].m_name = name;
		//住址
		string address;
		cout << "请输入您要修改的住址：" << endl;
		cin >> address;
		abs->personarray[ret].m_adress = address;

		//电话号码
		string phone;
		cout << "请输入您要修改的电话号码：" << endl;
		cin >> phone;
		abs->personarray[ret].m_phone = phone;

		//性别
		int sex = 0;
		cout << "请输入您要修改的性别：" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personarray[ret].m_sex = sex;
		}
		else
		{
			cout << "输入无效！！" << endl;
		}

	}
	else
	{
		cout << "查无此人！！" << endl;
	}

	system("pause");
	system("cls");
}


//清空联系人的函数
void cleanperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空" << endl;

	//按任意键清屏
	system("pause");
	system("cls");
}

//菜单函数
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;

};

int main()
{
	//创建通讯录结构体变量
	addressbooks abs;
	//初始化当前的联系人人员个数
	abs.m_size = 0;

	while (true)//除了0，以外，都循环，这是一个死循环；
	{
		int select = 0;//创建一个变量，是用户输入的值，来选择功能

		showmenu();//1.菜单函数的调用

		cin >> select;

		//2.编写退出菜单的功能，也就是0号的功能，选择用switch来实现选择功能
		switch (select)
		{
		case 1://1.添加联系人
			addperson(&abs);//把通讯录的变量传进去，要用地址传递，这样就可以修饰实际参数；这是一个传入的函数；
			break;
		case 2://2.显示联系人
			showaddressbooks(&abs);
			break;
		case 3://3.删除联系人
		//{
		//	cout << "请输入删除联系人姓名：" << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "查无此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到此人" << endl;//如果switch下面case的代码很短不会报错
		//	}//但是如果代码很长就会报错

		//}
			deleteperson(&abs);
			break;
		case 4://4.查找联系人
			findperson(&abs);
			break;
		case 5://5.修改联系人
			modifyperson(&abs);
			break;
		case 6://6.清空联系人
			cleanperson(&abs);
			break;
		case 0://0.退出通讯录
			cout << "欢迎下次光临" << endl;
			system("pause");//按任意键执行下一步
			return 0;//退出函数,也就是全部退出,因为为0，所以死循环结束；
			break;
		default://除了这几种结果都执行default；
			break;//break就是打断这个，不然会一直往下走；
		}

	}


	//如果不加上循环，会直接跳到这一步，所以加上while循环
	system("pause");
	return 0;//就是退出这个函数，包括子函数都可以用；
}