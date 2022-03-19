#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	int ge,shi,bai,qian;
	cout << "please input an integer(10`9999):>" << endl;

	cin >> num1;
	cout << "num1 =" << num1 << endl;
	

	if(num1>=10 && num1<100 )
	{
		ge = num1%10;
		shi = num1/10%10;
		num2 = ge*10+shi;
		cout << "After the convert,the result is :" << num2 << endl;
	}
	else if(num1>=100 && num1<1000)
	{
		ge = num1%10;
		shi = num1/10%10;
		bai = num1/100%10;
		num2 = ge*100+shi*10+bai;
		cout << "After the convert,the result is :" << num2 << endl;
	}
	else if(num1>=1000 && num1<10000)
	{
		ge = num1%10;
		shi = num1/10%10;
		bai = num1/100%10;
		qian = num1/1000%10;
		num2 = ge*1000+shi*100+bai*10+qian;
		cout << "After the convert,the result is :" << num2 << endl;
	}

	
	return 0;
}
