#include <iostream>
using namespace std;

int main(){

	//�㫬��J
	int a = 0;
	cout << "�п�J�㫬�ܶq�G" << endl;
	cin >> a;
	cout << "�p����J�� = " << a << endl;

	//�B�I����J
	double d = 0;
	cout << "�п�J�B�I���ܶq�G" << endl;
	cin >> d;
	cout << "�p����J�� = " << d << endl;

	//�r�ū���J
	char ch = 0;
	cout << "�п�J�r�ū��ܶq�G" << endl;
	cin >> ch;
	cout << "�p����J�� = " << ch << endl;

	//�r�Ŧꫬ��J
	string str;
	cout << "�п�J�r�Ŧꫬ�ܶq�G" << endl;
	cin >> str;
	cout << "�p����J�� = " << str << endl;

	//����������J
	bool flag = true;
	cout << "�п�J�������ܶq�G" << endl;
	cin >> flag;
	cout << "�p����J�� = " << flag << endl;

	return EXIT_SUCCESS;
}