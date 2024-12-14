#include <iostream>
#include <stdlib.h>
#include "Products.h"
#include "ProductDetail.h"
string* Products::getProducts()
{
	
	string* names = new string[5];
	names[0] = "Pizza";
 	names[1] = "Burger";
 	names[2] = "Coke"; 
 	names[3] = "Chicken"; 
 	names[4] = "Siji"; 

    return names;
}

void Products::showProducts()
{
	cout<<"########################################################################"<<endl<<endl;			
	cout<<"Please choose item from following list to purchase, please use numbers"<<endl;
		
	string* prod = new string[5];
	prod = getProducts();
		
	cout<<"1) "<<prod[0]<<endl;
	cout<<"2) "<<prod[1]<<endl;
	cout<<"3) "<<prod[2]<<endl;
	cout<<"4) "<<prod[3]<<endl;
	cout<<"5) "<<prod[4]<<endl;
		
}
void Products::showSelected(int choice, string customerName)
{
	system("CLS");
	ProductDetail detailObj;
	string* prod = new string[5];
	prod = getProducts();
	switch(choice)
		{
			case 1:
				{		
				    cout<<endl<<customerName<<"! Welcome to KFC"<<endl;	
					cout<<endl<<"############################################"<<endl;		
					cout<<"you selected "<<prod[0]<<endl;
					cout<<endl<<"############################################"<<endl;
					detailObj.ProductDetails(1, customerName);
					break;
				}
			case 2:
				{
					cout<<endl<<customerName<<"! Welcome to KFC"<<endl;	
					cout<<endl<<"############################################"<<endl;
					cout<<"you selected "<<prod[1]<<endl;
					cout<<endl<<"############################################"<<endl;
					detailObj.ProductDetails(2, customerName);
					break;
				}
			case 3:
				{
					cout<<endl<<customerName<<"! Welcome to KFC"<<endl;	
					cout<<endl<<"############################################"<<endl;
					cout<<"you selected "<<prod[2]<<endl;
					cout<<endl<<"############################################"<<endl;
					detailObj.ProductDetails(3, customerName);
					break;
				}
			case 4:
				{
					cout<<endl<<customerName<<"! Welcome to KFC"<<endl;	
					cout<<endl<<"############################################"<<endl;
					cout<<"you selected "<<prod[3]<<endl;
					cout<<endl<<"############################################"<<endl;
					detailObj.ProductDetails(4, customerName);
					break;
				}
			case 5:
				{
					cout<<endl<<customerName<<"! Welcome to KFC"<<endl;	
					cout<<endl<<"############################################"<<endl;
					cout<<"you selected "<<prod[4]<<endl;
					cout<<endl<<"############################################"<<endl;
					detailObj.ProductDetails(5, customerName);
					break;
				}			
			default:
				{
					cout<<"Invalid Selection";
					char tryAgain;
					cout<<"Try agian? y/n ??"<<endl;
					cin>>tryAgain;
					if(tryAgain == 'y')
					{
						showSelected(choice, customerName);
					}
					break;
				}			
		}
}
