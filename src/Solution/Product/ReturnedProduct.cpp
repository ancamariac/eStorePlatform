#include "ReturnedProduct.h"

ReturnedProduct::ReturnedProduct() : NonFoodProduct()
{
	// throw("undefined");
	reason = "";
}

ReturnedProduct::ReturnedProduct(const string &categorie, int id, const string &producator, const string &nume, float pret, int garantieAni, const string &motiv, int cantitate)
	: NonFoodProduct(categorie, id, producator, nume, pret, garantieAni, cantitate)
{
	// throw("undefined");
	this->reason = motiv;
}

ReturnedProduct::ReturnedProduct(const ReturnedProduct &prodRet) : NonFoodProduct(prodRet)
{
	// throw("undefined");
	this->reason = prodRet.reason;
}


const ReturnedProduct &ReturnedProduct::operator=(const ReturnedProduct &a)
{
	// throw("undefined");
	NonFoodProduct::operator=(a);
	this->reason = a.reason;
	return *this;
}

string &ReturnedProduct::getReason()
{
	// throw("undefined");
	return reason;
}

void ReturnedProduct::setReason(string &reason)
{
	// throw("undefined");
	this->reason = reason;
}

string ReturnedProduct::getProductType()
{
	// throw("undefined");
	return "Returned Products";		
}

json ReturnedProduct::toJSON()
{
	return json(*this);
}

void ReturnedProduct::display()
{
	cout << "Product Returnat" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl;
	cout << "Motiv : " << this->reason << endl
		 << endl;
}
