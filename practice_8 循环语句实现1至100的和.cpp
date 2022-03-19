#include<iostream>
using namespace std;

int main()
{
/*	int result = 0;
	int i = 1;
	while(i<=100)
	{
		result += i;
		i ++;
	}
	cout << result;*/

	/*int result = 0;
	int i = 1;
	do{
		result += i;
		i++;
	}while(i<=100);
	cout << result;*/
	int result = 0;
	for(int i=1;i<=100;i++){
		result += i;
		cout << result << endl;
	}
	cout << result;
}
