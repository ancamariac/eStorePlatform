#include "FoodProduct.h"

FoodProduct::FoodProduct() : Product()
{
	// throw("undefined");
	leiPerKg = 0;
	countryOfOrigin = "";
}

FoodProduct::FoodProduct(const string &categorie, int id, const string &nume, float leiPerKg, const string &taraOrigine, int cantitate) : Product(categorie, id, nume, cantitate)
{
	// throw("undefined");
	this->leiPerKg = leiPerKg;
	this->countryOfOrigin = countryOfOrigin;
}

FoodProduct::FoodProduct(const FoodProduct &pa) : Product(pa)
{
	// throw("undefined");
	this->leiPerKg = pa.leiPerKg;
	this->countryOfOrigin = pa.countryOfOrigin;
}

void FoodProduct::setLeiPerKg(float leiPerKg)
{
	// throw("undefined");
	this->leiPerKg = leiPerKg; 
}

void FoodProduct::setCountryOfOrigin(const string &countryOfOrigin)
{
	// throw("undefined");
	this->countryOfOrigin = countryOfOrigin;
}

float FoodProduct::getLeiPerKg()
{
	// throw("undefined");
	return leiPerKg;
}

string &FoodProduct::getCountryOfOrigin()
{
	// throw("undefined");
	return countryOfOrigin;
}

const FoodProduct &FoodProduct::operator=(const FoodProduct &a)
{
	// throw("undefined");
	Product::operator=(a);
	leiPerKg = a.leiPerKg;
	countryOfOrigin = a.countryOfOrigin;
	return *this;
}

string FoodProduct::getProductType()
{
	// throw("undefined");
	return "FoodProduct";
}

json FoodProduct::toJSON()
{
	return json(*this);
}

void FoodProduct::display()
{
	cout << "Product alimentar" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Categorie : " << this->category << endl;
	cout << "ID : " << this->id << endl;
	cout << "Cantitate (stoc): " << this->quantity << endl;
	cout << "Lei per KG : " << this->leiPerKg << endl;
	cout << "Tara de Origine : " << this->countryOfOrigin << endl
		 << endl;
}