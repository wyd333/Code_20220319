#include<iostream>
using namespace std;

int main()
{
	int magic,guess;
	srand((unsigned)time(NULL));
	magic = rand()%51 + 100;//100`150
	cout << "Guess the number between 100 and 150!'\n'Please input the number you guess:" << endl;
	cin >> guess;
	
	while(guess != magic)
	{
		if(guess > magic){
			cout << "Too large!!" << endl;
		}
		else{
			cout << "Too small!!" << endl;
		}
		cout << "Please try again!:>\n";
		cin >> guess;
	}
	cout << "You got it!!!" << endl;
	

	return 0;
	
	
	
	
}
