#include<iostream>
using namespace std;



int main7() {

	//switch���
	//����Ӱ���д��
	//10~9 ����
	//8~7  �ǳ���
	//6~5  һ��
	//5���� ��Ƭ


	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ���д��" << endl;
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << endl;
	//3.�����û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break; //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case 6:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;
	case 5:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}
	//if��switch����
	//switch ȱ�� �ж�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	//switch �ŵ� �ṹ������ִ��Ч�ʸ�
	system("pause");
	return 0;
}