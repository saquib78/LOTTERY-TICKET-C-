#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	
	int slect_people[24];
	int temp;
	int num;
	int ticket;
	int win;
	
	//Taking Input From User
	cout<<"enter number of lottery ticket : ";
	cin>>ticket;	
	cout<<"enter number of winner : ";
	cin>>win;		
	
	/*selecting people*/
	for(int i =1;i<=win;i++)
	{
		
		num = rand()% ticket;
		
		// checking duplication
		for(int j =1;j<=i;j++)
		{
			if(num == slect_people[j])
			{
				j = 0;
				num = rand()%ticket;
			}
		}
		
		slect_people[i] = num;
	}
	
	
	// shorting of people
	for(int j =1;j<=win;j++)
	{
		for(int i =1;i<win;i++)
		{
			if(slect_people[i] > slect_people[i+1])
			{
				temp = slect_people[i];
				slect_people[i] = slect_people[i+1];
				slect_people[i+1] = temp;
			}
		}
	}
	
	
	
	/* display*/
	cout<<"\n\n\tFinal Of Slected People "<<endl;
	cout<<"    *******************************"<<endl;
	for(int i =1;i<=win;i++)
	{
		cout<<"\tLottery Number  :  "<<slect_people[i]<<endl;
	
	}
	cout<<"    *******************************"<<endl;
}
