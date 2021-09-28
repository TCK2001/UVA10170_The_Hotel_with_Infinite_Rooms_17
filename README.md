## UVA10170_The_Hotel_with_Infinite_Rooms_17
------
```c++
while(f<=t)  
		{
			if(t-f==0) //만약에 Q는데 0이면 나가서 출력; 
			{
				break;
			}
			t-=f; //아니면 계속 출력; 
			f++;
		}
```
------
+ t-f==0 is check -> 1 < 6 -> 1+2 < 6 -> 1+2+3 == 6
+ else t++ then continued to minus in total people;
