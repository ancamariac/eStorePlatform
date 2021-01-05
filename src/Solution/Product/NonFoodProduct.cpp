#include "NonFoodProduct.h"

NonFoodProduct::NonFoodProduct() : Product()
{
	// throw("undefined");
	producer = "";
	yearsOfWarranty = 0;
	price = 0;
}

NonFoodProduct::NonFoodProduct(const string &category, int id, const string &producer, const string &name, float price, int yearsOfWarranty, int quantity)
	: Product(category, id, name, quantity)
{
	// throw("undefined");
	this->producer = producer;
	this->yearsOfWarranty = yearsOfWarranty;
	this->price = price;
}

NonFoodProduct::NonFoodProduct(const NonFoodProduct &pn) : Product(pn)
{
	// throw("undefined");
	this->producer = pn.producer;
	this->yearsOfWarranty = pn.yearsOfWarranty;
	this->price = pn.price;
}

void NonFoodProduct::setYearsOfWarranty(int garantieAni)
{
	// throw("undefined");
	this->yearsOfWarranty = garantieAni;
}

void NonFoodProduct::setPrice(float price)
{
	// throw("undefined");
	this->price = price;
}

void NonFoodProduct::setProducer(const string &producer)
{
	// throw("undefined");
	this->producer = producer;
}

int NonFoodProduct::getYearsOfWarranty()
{
	// throw("undefined");
	return yearsOfWarranty;
}

float NonFoodProduct::getPrice()
{
	// throw("undefined");
	return price;
}

string &NonFoodProduct::getProducer()
{
	// throw("undefined");
	return producer;
}

// TODO: optimizare
bool NonFoodProduct::operator==(const NonFoodProduct &obj) const
{
	// throw("undefined");
	return (this->name == obj.name && this->quantity == obj.quantity &&
			this->category == obj.category && this->id == obj.id &&
			this->producer == obj.producer && this->yearsOfWarranty == obj.yearsOfWarranty &&
			this->price == obj.price);
}

const NonFoodProduct &NonFoodProduct::operator=(const NonFoodProduct &a)
{
	// throw("undefined");
	Product::operator=(a);
	producer = a.producer;
	yearsOfWarranty = a.yearsOfWarranty;
	price = a.price;
	return *this;
}

string NonFoodProduct::getProductType()
{
	// throw("undefined");
	return "NonFoodProduct";
}

json NonFoodProduct::toJSON()
{
	return json(*this);
}

void NonFoodProduct::display()
{
	cout << "Product Nealimentar" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl
		 << endl;
}
