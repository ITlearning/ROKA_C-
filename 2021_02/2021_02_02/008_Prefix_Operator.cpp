//전위 ++ 연산자 작성
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	
	void show();
	Power& operator++ (); //매개 변수 없음 
};

void Power::show() {
	cout << "kick = " << kick << ',' << "punch = " << punch << endl;
}

Power& Power::operator++() {
	kick++;
	punch++;
	return *this; //자기 자신을 변경하기 때문에 *this 사용
}

int main() {
	Power a(3,5), b;
	a.show();
	b.show();
	b = ++a;
	a.show();
	b.show();
}