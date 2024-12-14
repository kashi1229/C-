#include <iostream>
#include "Authentication.h"

bool Authentication::provideLogin()
{
	string password = "";
	string userName = "";
	
	cout<<"Please enter your user name? ";
	cin>>userName;
	cout<<endl<<"Please enter your password? ";
	cin>>password;
	
	return Login(userName, password);
}
bool Authentication::Login(std::string userName, std::string password)
{
	if(userName == "admin" && password =="admin")
	{
		return true;
	}
	return false;
}
