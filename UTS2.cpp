#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//define the RetailItemclass
class RetailItem{

//private members
private:
	string description; //stores the description of the item
	int unitsOnHand;
	double price;
//public members
public:
	//constructors
	RetailItem(string d)//a constructor is a function that is called when an object is created
	{
		description=d;
	}
	RetailItem(int u)
	{
		unitsOnHand;		
	}
	RetailItem(double p)
	{
		price=p;
	}
	// Mutators
 	void setDescription(string d)
      { description = d; }

   	void setUnitsOnHand(int u)
      { unitsOnHand = u; }

   	void setPrice(double p)
      { price = p; }
	// Accessors
	string getDesrciption() // getDesciption Member Function - returns the value stored in the private member description
	{
		return description;
	}
	int getUnitsOnHand()
	{
		return unitsOnHand;
	}
	double getPrice()
	{
		return price;
	}
};
void displayItem(RetailItem); 
// Main Function
int main()
{
	// Array of three RetailItem objects.
	RetailItem item1("Jacket", 12,59.95);
   	RetailItem item2("Jeans", 40,34.95);
   	RetailItem item3("Shirt", 20,24.95);
    // Function calls to display each item's data.
   displayItem(item1);
   displayItem(item2);
   displayItem(item3);
	return 0;
}
void displayItem(RetailItem item)
{
   cout << setprecision(2) << fixed << showpoint;
   cout << "Description: " << item.getDescription() << endl;
   cout << "Units on hand: " << item.getUnitsOnHand() << endl;
   cout << "Price: " << item.getPrice() << endl << endl;
}
