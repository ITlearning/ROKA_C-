//프렌드 함수 만들기
#include <iostream>
using namespace std;

class Rect; // Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기 위한 선언문
bool equals(Rect r, Rect s); // equals() 함수 선언

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s); // 프렌드 함수 선언
};

bool equals(Rect r, Rect s) { //외부 함수
	if(r.width == s.width && r.height == s.height) return true; // equals() 함수는 private 속성을 가진 width, height 에 접근할 수 있다.
	else return false;
}

int main() {
	Rect a(3,4), b(4,5);
	if(equals(a,b)) cout << "equal" << endl;
	else cout << "Not equal" << endl;
}