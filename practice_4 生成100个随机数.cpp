#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
	/*int ii;
	
	srand(time(0));  // ����������ӡ�
	
	for (ii=1;ii<=100;ii++)  // ����100���������
	{
	//	printf("%d ",rand()%51 + 100);  // ��ȡ100-150֮����������
		cout << rand()%51+100 << endl;	
	}
	
	printf("\n");*/
	
	int ii = 1;
	int a = 1;
	srand(time(0));
	
	while(ii<=100)
	{
		cout << rand()%51+100 << "����" << a << endl;
		ii++;
		a++;//�������ǲ��������100����
	}
}
