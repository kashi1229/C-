#include <iostream>
#include "BillingDetail.h"
#include <stdlib.h>
#include <fstream>
#include <time.h>


void BillingDetail::showBillingDetail(string productName, string detail,int totalItems, int price, string customerName)
{
	system("CLS");	// clearing screen;
	cout<<"################################## BILL DETAIL ##################################"<<endl;
		
	time_t my_time = time(NULL);
	cout<<"Date: "<<my_time<<endl<<endl;
	cout<<endl<<"Dear "<<customerName<<"! The below detail is of your shoping with discounted bill, \n Thanks for shoping here! "<<endl;
	
    cout<<endl<<"Purchased: total "<<detail<<" of "<<productName<<endl;
	int totalprice = totalItems * price;
	cout<<"The price for one piece of "<<productName<<" is "<<price<<endl;
	cout<<"The total price for all your shoping is "<<totalprice<<"/RS"<<endl;
	int discount = totalprice - (0.05 * totalprice);
	
	cout<<"KFC provided 5% discount of every shoping, so your bill for 5% shopping is "<<discount <<" /RS :)";				
	
	ofstream MyFile("bill.txt");

	// Write to the file
	MyFile<<"################################## BILL DETAIL ################################## \n \n";
	MyFile<<"Date: "<<my_time<<endl<<endl;
	MyFile<<"Dear " + customerName +"! The below detail is of your shoping with discounted bill, \n Thanks for shoping here! \n\n";
	MyFile<<"Purchased: total "+ detail + " of "+ productName<<endl;
	MyFile<<"The price for one piece of "<<productName<<" is "<<price<<endl;
	MyFile<<"The total price for all your shoping is "<<totalprice<<"/RS"<<endl;
	MyFile<<"KFC provided 5% discount of every shoping, so your bill for 5% shopping is "<<discount <<" /RS :)";

	// Close the file
	MyFile.close();
		
	
}

