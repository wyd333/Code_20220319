#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	int ge,shi,bai;
	cout << "please input an integer(100`999):>" << endl;
	//cin >> "num1 = " >> num1;´íÎó´úÂë
	//±¨´í£º[´íÎó] no match for 'operator>>'
	cin >> num1;
	cout << "num1 =" << num1 << endl;
	ge = num1%10;
	shi = num1/10%10;
	bai = num1/100;
	num2 = ge*100+shi*10+bai;
	cout << "After the convert,the result is :" << num2 << endl;
	
	
	
	return 0;
}
