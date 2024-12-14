#ifndef PRODUCTDETAIL_H
#define PRODUCTDETAIL_H

#include<string>
#include <sstream>
#include <iostream>
using namespace std;

class ProductDetail
{
	private:
		
	public:
		string stringulate(int v);
		void ProductDetails(int productId, string customerName);
		void howManyPurchase(int productId, int productDetailId, string customerName);
	protected:
};

#endif
