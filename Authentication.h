#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include<string>
using namespace std;

class Authentication
{
	public:
		bool provideLogin();
		bool Login(string userName, string password);		
	protected:
		
};

#endif
