#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
	int ii;
	
	srand(time(0));  // �����������
	
	for (ii=0;ii<5;ii++)  // ����5�������
	{
		cout << rand() << endl;  // ��ȡ�����
	}
	

}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int ii;
	
	srand(time(0));  // ����������ӡ�
	
	for (ii=1;ii<=100;ii++)  // ����100���������
	{
		printf("%03d ",rand()%51 + 100);  // ��ȡ100-150֮����������
		
	}
	
	printf("\n");
}*/


