#include <iostream>
using namespace std;

int sum(int r) {
	int a = 0;
	for (int i = r; i < 11; i++) {
		a = i + a;
	}
	
	return a;
} 

int main() {
	cout << "1���� 10���� ���� ����� " << sum(1) << " �Դϴ�." << endl;
}
