#include <iostream>
using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ��� >> ";
	char address[100];
	
	cin.getline(address, 100, '\n'); //address ���ڹ迭�� , 100 �� ũ��� , \n �� �Էµɶ����� �Է� �ްڴ�. 
	
	cout << "�ּҴ� " << address << "�Դϴ�." << endl; 
} 
