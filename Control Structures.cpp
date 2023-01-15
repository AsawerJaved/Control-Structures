#include <iostream>
using namespace std;
int main ()
{
	int choice;
  	cout<<"\t\t\t\t\tThis program is developed by ASAWER JAVED\n\n\n";
 	cout<<"Press [1] - To display specific table from starting and ending values given by user"<<endl;
	cout<<"Press [2] - To display first 10 non-negative whole numbers in decending order"<<endl;
	cout<<"Press [3] - To calculate factorial of a given number"<<endl;
	cout<<"Press [4] - To calculate the sum of first 10 odd numbers"<<endl;
	cout<<"Press [5] - To display whether the input number is prime or not"<<endl<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
  
	while(choice<1||choice>5)
	{
		cout<<"\nSORRY Your required program does not exists...."<<endl;
	  	cout<<"Please enter number from 1 to 5"<<endl;
	  	cout<<"Enter your choice: ";
	    cin>>choice;
	}
	cout<<endl;
	
	if(choice==1)
	{
		int num,start,end;
		
		cout<<"----------- Display a Table from starting and ending values given by user -----------"<<endl<<endl;
		cout<<"Enter an integer: ";
		cin>>num;
		cout<<"Enter starting value: ";
		cin>>start;
		cout<<"Enter ending value: ";
		cin>>end;
		
		cout<<endl;
		for(int a=start;a<=end;a++)
		{
			cout<<num<<" x "<<a<<" = "<<num*a<<endl;
		}
	}
	
	else if(choice==2)
	{
		cout<<"----------- Display first 10 non-negative whole numbers in decending order -----------"<<endl<<endl;
		int nmbr=9;
		for(int a=1;a<=10;a++)
		{
			cout<<a<<" whole number is "<<nmbr--<<endl;
		}
	}
	
	else if(choice==3)
	{
		cout<<"----------- Calculate factorial of a given number -----------"<<endl<<endl;
		int num;
		int fact=1;
		cout<<"Enter an integer: ";
		cin>>num;
		for(int a=num;a>=1;a--)
		{
			fact=fact*a;
		}	
		cout<<endl<<"Factorial of "<<num<<" is "<<fact;
	}
	
	else if(choice==4)
	{
		cout<<"----------- Calculate sum of first 10 odd numbers -----------"<<endl<<endl;
		int sum=0;
		for(int a=1;a<=19;a+=2)
		{
			sum=sum+a;
		    cout<<a<<" + ";
		}
		cout<<"\b\b= "<<sum;
	}
	
	else
	{
		cout<<"----------- Display whether the input number is prime or not -----------"<<endl<<endl;
		int num,factor=0;
		cout<<"Enter an integer: ";
		cin>>num;
		for(int a=2;a<=num/2;a++)
		{
			if(num%a==0)
			factor++;
		}
		if(factor==0)
		cout<<endl<<num<<" is prime";
		else
		cout<<endl<<num<<" is not prime";
	}
	return 0;
}
