#include <iostream>
#include <conio.h>
using namespace std;

int RecursiveFunction(const int n) {//����Լ�
	if (n <= 1) return n;
	return RecursiveFunction(n - 1) + RecursiveFunction(n - 2);
}

int RepetitiveFunction(const int n) {//�ݺ���
	if (n <= 1) return n;
	int now = 1;
	int prev = 0;
	int temp;
	for (int i = 2; i <= n; i += 1) {
		temp = now;
		now += prev;
		prev = temp;
	}
	return now;
}

int main() {
	int input;
	while (true) {
		cout << "���ϰ��� �ϴ� ���� �Ǻ���ġ ������ ���� (������ ����) �� ";
		cin >> input;

		if (input < 0) return 0;//����

		cout << "����Լ��� ����Ϸ��� 0, �ݺ����� ����Ϸ��� �ٸ� ���� �Է�" << endl;
		cout << "�Ǻ���ġ ���� " << input << "������ ���� " << (_getch() == '0' ? RecursiveFunction(input) : RepetitiveFunction(input)) << endl;
	}
}