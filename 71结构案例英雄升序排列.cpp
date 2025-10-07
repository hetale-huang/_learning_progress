#include"swap.h"
//定义一个英雄
struct hero
{
	//mingzi
	string name;
	//xinbie
	int age;
	//nianling
	string sex;
};

//进行升序排列
void bubblesort(struct hero sarr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (sarr[j].age > sarr[j + 1].age)
			{
				struct hero temp = sarr[j + 1];//定义一个空的自变量
				sarr[j + 1] = sarr[j];
				sarr[j] = temp;

			}
		}
	}
};

int main()
{
	//定义一个英雄结构体
	//输入内容
	struct hero sarr[5]
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(sarr) / sizeof(sarr[0]);
	//将其进行升序排列
	bubblesort(sarr, len);
	//最后打印输出

	for (int i = 0; i <len; i++)
	{
		cout << "姓名：" << sarr[i].name << "年龄：" << sarr[i].age << "性别：" << sarr[i].sex << endl;
	}

	system("pause");
	return 0;
}