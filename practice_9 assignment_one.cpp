#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

int main()
{
	int num;
	srand((unsigned)time(NULL));
	
	//num = rand()%51+50;��仰�����forѭ��֮�ϣ�����Ϊprint���ͬ���Ľ��
	for(int i=1;i<=5;i++){
		num = rand()%51+50;//��ѭ�����ڣ���Ϊprint��β�ͬ�Ľ��
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
