/*
Sample Input
1 6
3 10
3 14
Sample Output
3
5
6
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int f,t;
	while(cin>>f>>t) //첫 회원수와 총 인원 가능하는 인원수 입력; 
	{
		while(f<=t)  
		{
			if(t-f==0) //만약에 뻈는데 0이면 나가서 출력; 
			{
				break;
			}
			t-=f; //아니면 계속 출력; 
			f++;
		}
		cout<<f<<endl;
	}

return 0;
}

