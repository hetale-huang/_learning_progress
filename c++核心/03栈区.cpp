#include"swap.h"

int * function()//Ȼ��Ҫ�����ǺŲ����������10��func����һ����ַ
{
	int a = 10;
	return &a;//������һ����ַ
}
//ջ��ע������---��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ�����������ͷ�

int main()
{
	int * p = function();//function����a�ĵ�ַ������*���ܱ������
	//cout << p << endl;//�ⲻ���ˣ�����ǵ�ַ
	//cout << p << endl;//��Ҳһ��
	cout << *p << endl;//�ⲻ���ˣ�����ǵ�ַ
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//��Ȼ�����ǣ����Ǿֲ�������vs̫ǿ�ˣ����Իᱣ�������ǲ�����ôд
	system("pause");
	return 0;
}