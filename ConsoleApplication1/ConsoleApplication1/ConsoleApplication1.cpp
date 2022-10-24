// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
using namespace std;
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
int main()
{
	collection;
	int packet, queuesize;
	queue<int> routerqueue;
	cin >> queuesize;
	cin >> packet;
	while (packet != -1)
	{
		if (packet != 0 && routerqueue.size() < queuesize)
		{
			routerqueue.push(packet);
		}
		else if (packet == 0)
		{
			routerqueue.pop();
		}
		cin >> packet;
	}
	if (routerqueue.size() > 0)
	{
		while (routerqueue.size() > 0)
		{
			cout << routerqueue.front() << ' ';
			routerqueue.pop();
		}
	}
	else
	{
		cout << "empty";
	}

}

