#include <iostream>
#include <conio.h>
using namespace std;

int RecursiveFunction(const int n) {//재귀함수
	if (n <= 1) return n;
	return RecursiveFunction(n - 1) + RecursiveFunction(n - 2);
}

int RepetitiveFunction(const int n) {//반복문
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
		cout << "구하고자 하는 값의 피보나치 수열의 번지 (음수는 종료) ☞ ";
		cin >> input;

		if (input < 0) return 0;//종료

		cout << "재귀함수를 사용하려면 0, 반복문을 사용하려면 다른 것을 입력" << endl;
		cout << "피보나치 수열 " << input << "번지의 값은 " << (_getch() == '0' ? RecursiveFunction(input) : RepetitiveFunction(input)) << endl;
	}
}