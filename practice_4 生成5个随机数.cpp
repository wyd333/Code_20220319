#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
	int ii;
	
	srand(time(0));  // 播下随机种子
	
	for (ii=0;ii<5;ii++)  // 生成5个随机数
	{
		cout << rand() << endl;  // 获取随机数
	}
	

}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int ii;
	
	srand(time(0));  // 播下随机种子。
	
	for (ii=1;ii<=100;ii++)  // 生成100个随机数。
	{
		printf("%03d ",rand()%51 + 100);  // 获取100-150之间的随机数。
		
	}
	
	printf("\n");
}*/


