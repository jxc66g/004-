#include<iostream>
using namespace std;

int main2() {

	//ѡ��ṹ - ����if���
	//���뿼�Է����������������600����Ϊ����һ��
	//����Ļ�����룬���û���ϣ���ӡδ����һ����ѧ

	//1.���뿼�Է���
	int score = 0;
	cout << "�����뿼�Է����� " << endl;
	cin >> score;

	//2.��ʾ�û�����ķ���
	cout << "������ķ���Ϊ��" << score << endl;
	//3.�жϣ��������600����ӡ����һ���������ӡδ����һ��
	if (score > 600) 
	{
		cout << "��ϲ������һ����ѧ��" << endl;

	}
	else
	{
		cout << "δ����һ����ѧ" << endl;
	}

	system("pause");
	return 0;
}