#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int guess;
	char ans='y';
	srand(time(0));
	int random_no=((rand()%25)+1);
	
	cout<<"*****Number Guessing Game*****\n";
    cout<<"Guide:\n";
    cout<<"1.Guess a number between 1 to 25\n";
	cout<<"2.Can exit the game anytime\n";
	cout<<"let's play!!\n";

	cout<<"\nEnter your guess:";
	cin>>guess;

	while(ans=='y')
	{
		if(guess<0||guess>25)
		{
			cout<<"\nEnter your guess in the given range:";
			cin>>guess;
		}
		if(guess>0&&guess<26)
		{
			if(guess==random_no)
			{
				cout<<"Congratulations!! you guessed it right";
				break;
			}
			else
			{
				cout<<"--Wrong guess--\n";
				if(guess>random_no)
					cout<<"The correct number is smaller than your guess\n";
				else
					cout<<"The correct number is greater than your guess\n";

				cout<<"\nEnter small 'y' to guess again or any other key to exit:";
        		cin>>ans;
        		if(ans=='y')
        		{
					cout<<"\nEnter your guess:";
    				cin>>guess;
    			}
			}
		}
	}
	return 0;
}
