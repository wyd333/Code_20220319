#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
	/*int ii;
	
	srand(time(0));  // 播下随机种子。
	
	for (ii=1;ii<=100;ii++)  // 生成100个随机数。
	{
	//	printf("%d ",rand()%51 + 100);  // 获取100-150之间的随机数。
		cout << rand()%51+100 << endl;	
	}
	
	printf("\n");*/
	
	int ii = 1;
	int a = 1;
	srand(time(0));
	
	while(ii<=100)
	{
		cout << rand()%51+100 << "计数" << a << endl;
		ii++;
		a++;//数数看是不是真的有100个呢
	}
}
