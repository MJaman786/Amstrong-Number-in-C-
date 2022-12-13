#include<iostream>
using namespace std;

int main()
{

	int num,temp,rem,qut=0;
	
	cout<<"Enter number: "<<endl;
	cin>>num;
	
	cout<<"Number is: "<<num<<endl;
	
	temp = num; //This for storing the value 
	
	while(num>0)
	{
		rem	= num % 10;
		
		qut = qut+(rem*rem*rem);
		
		num = num / 10;
		
		
	}
	
	cout<<"Number calculated: "<<qut<<endl;
	
	if(temp==qut)
	{
		cout<<"The number is 'Amstrong' "<<endl;
	}
	else
	{
		cout<<"The number is not 'Amstrong' "<<endl;
	}
	
	return 0;
}