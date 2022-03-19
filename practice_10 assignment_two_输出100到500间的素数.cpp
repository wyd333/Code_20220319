#include<iostream>
using namespace std;

int main()
{
	int n = 100;
	int end = n/2;
	
	while(n <= 500)
	{
		for(int i=2;i<=end;i++){
			if(n%i != 0){
				cout << n;
				n++;
			}
		}
		

return 0;
}
