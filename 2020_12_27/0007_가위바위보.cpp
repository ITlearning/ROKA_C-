#include <iostream>
#include <string>
using namespace std;

string r(string s, string t) {
	if(s == "����" && t == "��" || s == "����" && t == "����" || s == "��" && t == "����") {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if (s == t){
			cout << "�����ϴ�." << endl;
	} else {
		cout << "�ٸ����� �̰���ϴ�." << endl;
	
	}
}

int main() {
	
	while(true) {
	
		string s;
		cout << "�ι̿� >> ";
		cin >> s;
		
		string t;
		cout << "�ٸ��� >> ";
		cin >> t;
	
		r(s,t);
		
		if(r(s,t) != "�����ϴ�." ) {
			break; 
		}
	} 
	
	
	return 0;
}
