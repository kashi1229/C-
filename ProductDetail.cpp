#include <iostream>
#include "ProductDetail.h"
#include "BillingDetail.h"

void ProductDetail::ProductDetails(int productId, string customerName)
{
	int choice;
	switch(productId)
	{
			case 1:
				{
					cout<<"You selected Piza, the detail is as under "<<endl;
					cout<<"#################################################"<<endl<<endl;
					cout<<"Select your choice"<<endl<<endl;
					cout<<"1) Small Piza for 200/Rs "<<endl;
					cout<<"2) Medium Piza for 300/Rs "<<endl;
					cout<<"3) Larg Piza for 500/Rs "<<endl;
					
					cin>>choice;	
					howManyPurchase(1, choice, customerName);				
					break;
				}
			case 2:
				{
					cout<<"You selected Burger, the detail is as under "<<endl;
					cout<<"#################################################"<<endl<<endl;
					cout<<"Select your choice"<<endl<<endl;
					cout<<"1) Small Burger for 200/Rs "<<endl;
					cout<<"2) Medium Burger for 300/Rs "<<endl;
					cout<<"3) Larg Burger for 500/Rs "<<endl;
					
					cin>>choice;		
					howManyPurchase(2, choice, customerName);			
					break;					
				}
			case 3:
				{
					cout<<"You selected Coke, the detail is as under "<<endl;
					cout<<"#################################################"<<endl<<endl;
					cout<<"Select your choice"<<endl<<endl;
					cout<<"1) Regular Coke for 30/Rs "<<endl;
					cout<<"2) 1 ltr Coke for 70/Rs "<<endl;
					cout<<"3) Jumbo Coke for 120/Rs "<<endl;
					
					cin>>choice;
					howManyPurchase(3, choice, customerName);
					
					break;
				}
			case 4:
				{
					cout<<"You selected Chicken, the detail is as under "<<endl;
					cout<<"#################################################"<<endl<<endl;
					cout<<"Select your choice"<<endl<<endl;
					cout<<"1) 1 KG Chicken for 250/Rs "<<endl;						
					
					cin>>choice;
					howManyPurchase(4, choice, customerName);
									
					break;
				}
			case 5:
				{
					cout<<"You selected Siji, the detail is as under "<<endl;
					cout<<"#################################################"<<endl<<endl;
					cout<<"Select your choice"<<endl<<endl;
					cout<<"1) 1 KG Siji for 500/Rs "<<endl;										
					
					cin>>choice;
					howManyPurchase(5, choice, customerName);
					break;
				}					
	}
}
string ProductDetail::stringulate(int v)
{
	std::ostringstream oss;
    oss << v;
    return oss.str();
}

void ProductDetail::howManyPurchase(int productId, int productDetailId, string customerName)
{
	int total;
	BillingDetail objBill;
	if(productId == 1) //pizza
	{
		switch(productDetailId)
		{
			case 1:
				{
					cout<<"You selected Smail pizza "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Small Pizza", stringulate(total) + " Pack(s) ", total, 200, customerName);
					//price 200;
					break;
				}
			case 2:
				{
					cout<<"You selected Medium pizza "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Medium Pizza", stringulate(total) +" Pack(s) ", total, 300, customerName);
					//price 300;
					break;
				}
			case 3:
				{
					cout<<"You selected large pizza "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Large Pizza", stringulate(total) +" Pack(s) ", total, 500, customerName);
					//price 500;
					break;
				}						
		}
	}
	else if(productId == 2) //burger
	{
		switch(productDetailId)
		{
			case 1:
				{
					cout<<"You selected Smail Burger "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Small Burger", stringulate(total) +" Pack(s) ", total, 200, customerName);
					//price 200;
					break;
				}
			case 2:
				{
					cout<<"You selected Medium Burger "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Medium Burger", stringulate(total) +" Pack(s) ", total, 300, customerName);
					//price 300;
					break;
				}
			case 3:
				{
					cout<<"You selected large Burger "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					//price 500;
					objBill.showBillingDetail("Large Burger", stringulate(total) +" Pack(s) ", total, 500, customerName);
					break;
				}						
		}
	}
	else if(productId == 3) //coke
	{
		switch(productDetailId)
		{
			case 1:
				{
					cout<<"You selected regular Coke "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Regular Coke ", stringulate(total) +" bottle(s) ", total, 30, customerName);
					//price 30;
					break;
				}
			case 2:
				{
					cout<<"You selected 1 ltr Coke "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("1 ltr Coke", stringulate(total) +" bottle(s) ", total, 70, customerName);
					//price 70;
					break;
				}
			case 3:
				{
					cout<<"You selected Jumbo Coke "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					objBill.showBillingDetail("Jumbo Coke", stringulate(total) +" bottle(s) ", total, 120, customerName);
					//price 120;
					break;
				}						
		}
	}
	else if(productId == 4) //chicken
	{
		switch(productDetailId)
		{
			case 1:
				{
					cout<<"You selected 1 KG Chicken "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					//price 250;
					objBill.showBillingDetail(total + " KG Chicken", stringulate(total) +" KG Chicken ", total, 250, customerName);
					break;
				}										
		}
	}
	else if(productId == 5) //Siji
	{
		switch(productDetailId)
		{
			case 1:
				{
					cout<<"You selected 1 KG Siji "<<endl;
					cout<<"How many do you want to buy"<<endl;	
					cin>>total;
					//price 500;
					objBill.showBillingDetail(total + " KG Siji", stringulate(total) +" KG Siji ", total, 500, customerName);
					break;
				}										
		}
	}
}
