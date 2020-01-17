#include<iostream>
using namespace std;
int gcd_recursion(int num1,int num2)
{
	if(num2==0)
		return num1;
	else if(num1<0||num2<0)
		return -1;
	else
		return gcd_recursion(num2,num1%num2);
	
}
int gcd_iterative(int num1,int num2)
{
	int temp;
	while(num2!=0)
	{
		temp=num1;
		num1=num2;
		num2=temp%num1;
	}
	return num1;
}
void factorial_iterative(int num)
{
	if(num<0)
		cout<<"INVALID CHOICE";
	else
	{	
	int a=1;
	int fact=1;
	for(int i=1;i<=num;i++)
		fact*=i;
	cout<<fact;
	}
}
int factorial_recursion(int num)
{
	if(num>1)
	return num*factorial_recursion(num-1);
	else
	 return 1;
}
void power_iterative(int m,int n)
{
	double result=1;
	for(int i=1;i<=n;i++)
		result*=m;
	if(n<0)
		cout<<1/result;
	else
		cout<<result;
}
int power_recursion(int m,int n)
{
	if(n!=0)
		return (m*power_recursion(m,n-1));
	else
	return 1;
}
void fibonacci_iterative(int num)
{
	if(num<=0)
	cout<<"INVALID CHOICE";
	int x=0,y=0,z=0;
	for(int i=1;i<num;i++)
	{
		z=x+y;
		cout<<z<<",";
		x=y;
		y=z;
	}
}
int fibonacci_recursion(int num)
{
	if(num==0||num==1)
		return num;
		
	else 
	return (fibonacci_recursion(num-1)+fibonacci_recursion(num-2));
	
}
int main()
{
	int choice =0,a,b,d=-2;
	string c="no";

	
	do{	
		cout<<"Enter 1 for gcd  of two no."<<endl;
		cout<<"Enter 2 for factorial  of a no."<<endl;
		cout<<"Enter 3 to calculate m to the power n"<<endl;
		cout<<"Enter 4 for fibonacci series upto n terms "<<endl;
		cout<<"Enter 5 for gcd recursion of two no."<<endl;
		cout<<"Enter 6 for factorial of a no.by recursion"<<endl;
		cout<<"Enter 7 to calculate m to the power n by recursion"<<endl;
		cout<<"Enter 8 for fibonacci series upto n terms by recursion"<<endl;
	
		cout<<"\n Enter your choice :";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			cout<<"enter the two no.";
				cin>>a>>b;
			cout<<gcd_iterative(a,b);
			
			case 2:
				cout<<"enter the no. ";
				cin>>a;
				factorial_iterative(a);
				break;
				
			case 3:
				cout<<"enter the base first and then power ";
				cin>>a>>b;
				power_iterative(a,b);
				break;
				
			case 4:
				cout<<"enter the no.";
				cin>>a;
				fibonacci_iterative(a);
				break;
			
			case 5: 
				cout<<"enter the two no.";
				cin>>a>>b;
				d=gcd_recursion(a,b);
				if(d==-1)
					cout<<"Not exist";
				else if(d==0)
					cout<<"1";
				else
				cout<<d;
				break;
				
			case 6:	
				cout<<"enter the no. ";
				cin>>a;
				cout<<factorial_recursion(a);
				break;
				
			case 7:
				cout<<"enter the base first and then power ";
				cin>>a>>b;
				cout<<power_recursion(a,b);
				break;
			
			case 8:
				cout<<"enter the no.";
				cin>>a;
				cout<<fibonacci_recursion(a);
				break;
				
			default :
				cout<<"invalid choice";
		}
		cout<<"\n do you want to continue if yes then enter 'yes' ";
		cin>>c;
	}while(c=="yes");
	
	return 0;

}
