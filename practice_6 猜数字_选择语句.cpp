#include<iostream>
using namespace std;

int main()
{
	int magic,guess;
	srand((unsigned)time(NULL));
	magic = rand()%51 + 100;//100`150
	cout << "Guess the number between 100 and 150!'\n'Please input the number you guess:" << endl;
	cin >> guess;
	
	if(guess == magic)
	{
		cout << "You got it! Congratulations!";
	}
	else if(guess < magic)
	{
		cout << "Too low!!" << "the answer is:" << magic;
	}
	else if(guess > magic)
	{
		cout << "Too large!!" << "the answer is:" << magic;
	}
	
	return 0;
	
	
	
	
}
