#include<iostream>
using namespace std;

int main4() {

	//输入一个考试分数，如果大于600分，视为考上一本大学，输出
	//大于500分，视为考上二本大学，输出
	//大于400分，视为考上三本大学，输出
	//小于等于400分，视为未考上本科，输出
	//在一本中 大于700分 考入北大
	// 大于650分考入清华
	//大于600分 考入人大


	//1.提示输入分数
	int score = 0;
	cout << "请输入你的分数：" << endl;
	cin >> score;

	//2.显示高考分数
	cout << "你的高考分数为：" << score << endl;

	//3.判断
	if (score > 600)
	{
		cout << "恭喜你，考上一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;

		}
		else if (score > 650)
		{
			cout << "您能考入清华大学" << endl;
		}
		else
		{
			cout << "您能考入人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜你，考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你，考上三本大学" << endl;

	}
	else
	{
		cout << "恭喜你，未考上本科大学" << endl;
	}
	system("pause");
	return 0;
}