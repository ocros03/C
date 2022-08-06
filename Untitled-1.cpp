#include<iostream>
using namespace std;

int main()
{
	int age;
	int flag=1;

	while(flag==1)
	{
		cout<<"Enter your age: ";
		cin>>age;

		if(age>=21)
		{
			cout<<"Drink"<<endl;
			flag=0;
		}
		//You should put another if statement here to handle less than 21 and the else statement for errors
		else
		{
			cout<<"No Drink"<<endl;
			flag=0;
		}
	}
	return 0;
}
