#include <iostream>
#include <stdlib.h>
#include<string>
#include "Authentication.h"
#include "Products.h"
#include "BillingDetail.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
		
	cout<<"################ LOGIN ################"<<endl<<endl<<endl;
	
	Authentication authobj;
		
	bool login = authobj.provideLogin();
	if(login == true)
	{
		system("CLS");	// clearing screen;
		
		string customerName;		
		cout<<"Please enter customer name"<<endl;
		cin>>customerName;
	
			
		cout<<endl<<customerName<<"! Welcome to KFC"<<endl;
		
		Products proObj;
		proObj.showProducts();
		
		int choice = 0;
		cin>>choice;									
		proObj.showSelected(choice, customerName);
		
	}
	else
	{
		cout<<"Invalid User Name or password"<<endl;
		char tryAgain;
		cout<<"Try agian? y/n ??"<<endl;
		cin>>tryAgain;
		if(tryAgain == 'y')
		{
			main();
		}
	}
	
	
	getchar();
	return 0;
}
