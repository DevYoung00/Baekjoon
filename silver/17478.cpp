#include <iostream>

using namespace std;
int main(){
	int n;
	cin >> n;
	char chat[100];
	cout<< "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
		for(int j=0; j<=n; j++){
		string str = "";
			for(int k=0; k<j; k++) str = str +  "____";
			cout << str << "\"����Լ��� ������?\"\n";
			if(j==n){
			cout << str <<	"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
			break;} 
			cout << str  << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
			cout << str   << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
			cout << str   << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		}
		for(int i=n; i>=0; i--) {
					string str = "";
					for(int k=0; k<i; k++) str = str +  "____";
					cout << str << "��� �亯�Ͽ���.\n";
		}
	}
