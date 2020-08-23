#include<iostream>
using namespace std;


int main3() {

	//选择结构 多条件if语句
	//输入一个考试分数，如果大于600分，视为考上一本大学，输出
	//大于500分，视为考上二本大学，输出
	//大于400分，视为考上三本大学，输出
	//小于等于400分，视为未考上本科，输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入你的分数：" << endl;
	cin >> score;

	//2.提示用户输入的分数
	cout << "你的分数为：" << score << endl;

	//3.判断
	if(score>600)
	{
		cout << "恭喜你，考上一本大学！" << endl;

	}
	else if (score > 500)
	{
		cout << "恭喜你，考上二本大学！" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你，考上三本大学！" << endl;
	}
	else
	{
		cout << "恭喜你，未考上本科大学!" << endl;
	}

	system("pause");
	return 0;
}