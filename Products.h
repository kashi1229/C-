#ifndef PRODUCTS_H
#define PRODUCTS_H

#include<string>
using namespace std;

class Products
{
	public:
		string* getProducts();
		void showProducts();
		void showSelected(int choice, string customerName);
	protected:
};

#endif
