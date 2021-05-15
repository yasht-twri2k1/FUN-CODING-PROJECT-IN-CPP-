//edited by yash tiwari
#include<iostream>
using namespace std;
float balance = 0;
void atmProcss()
{
	int choice;
	cout<<"welcome to axis bank choose ur option";
	cout<<"\n1: Deposit\n"<<"2: Withdraw"<<"\n3: Balance\n";
	cin>>choice;
	
	switch(choice)  {
	case 1:
	float amount;
	int anotherTrans;
	cout<<"Enter your Amount: \n";
	cin>>amount;
	balance = balance+amount;
	cout<<"Amount is deposited: ";cout<<amount;
	cout<<"\n";
	cout<<"Total Balance is:";cout<<balance;
	cout<<"\n";
	cout<<"if you want to continue press 1 for exit press any key: \n";
	cin>>anotherTrans;
	cout<<"\n";
	if(anotherTrans == 1) {
		atmProcss();	
	}
	break;
	case 2:
	float withdraw;
	cout<<"Enter your Amount: \n";
	cin>>withdraw;
	if(withdraw<=balance) {
		balance = balance-withdraw;
	
		cout<<"Amount is withdrawl: ";cout<<withdraw;
		cout<<"\n";
		cout<<"Total Balance is:";cout<<balance;
		cout<<"\n";
		cout<<"if you want to continue press 1 for exit press any key: \n";
		cin>>anotherTrans;
		cout<<"\n";
		if(anotherTrans == 1) {
		atmProcss();	
		}	
	} else {
		cout<<"withdraw amount must be less than account balance \n";
		cout<<"if you want to continue press 1 for exit press any key: \n";
	cin>>anotherTrans;
	cout<<"\n";
	}
	break;
	case 3:
 		
		 cout<<"Total Balance is:";cout<<balance;cout<<"\n";
		cout<<"if you want to continue press 1 for exit press any key: \n";
	cin>>anotherTrans;
	cout<<"\n";
	 
	if(anotherTrans == 1) {
		atmProcss();	
	}
	
	}
	
}
int main()
{
	atmProcss();
}
