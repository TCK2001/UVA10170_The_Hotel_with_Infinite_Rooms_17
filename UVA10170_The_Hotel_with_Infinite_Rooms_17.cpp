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
	while(cin>>f>>t) //ù ȸ������ �� �ο� �����ϴ� �ο��� �Է�; 
	{
		while(f<=t)  
		{
			if(t-f==0) //���࿡ �Q�µ� 0�̸� ������ ���; 
			{
				break;
			}
			t-=f; //�ƴϸ� ��� ���; 
			f++;
		}
		cout<<f<<endl;
	}

return 0;
}

