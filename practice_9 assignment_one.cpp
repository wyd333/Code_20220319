#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

int main()
{
	int num;
	srand((unsigned)time(NULL));
	
	//num = rand()%51+50;这句话如果在for循环之上，则意为print五次同样的结果
	for(int i=1;i<=5;i++){
		num = rand()%51+50;//在循环体内，意为print五次不同的结果
		if(num < 60)
		{
			cout << "bad";
		}
		else if(num >= 60 && num <= 80)
		{
			cout << "soso";
		}
		else
		{
			cout << "good";
		}
	}
	
	return 0;
}
