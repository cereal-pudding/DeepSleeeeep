#include<iostream>
#include <Windows.h>
using namespace std;

int main() {

	string a;
	cout << "嗨！我不是DeepSeek" << endl;
	cout << "我不可以帮你搜索、答疑、写作，不要把你的任务交给我吧~" << endl;
	Sleep(1000);
	cout << endl << "是否开启深度思考（R1）？Y为确认N为否定：";
	cin >> a;
	while (1) {

		cout << "给DeepSeek发送消息：";
		cin >> a;

		cout << "正在思考…";
		Sleep(5000);
		cout << endl << "Deepseek：服务器繁忙，请稍后再试。" << endl;
	}

	system("pause");

	return 0;
}