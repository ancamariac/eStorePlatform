#include "Product.h"
using namespace std;

Product::~Product() {}

bool Product::checkQuantity(int requestedQuantity)
{
	// throw("undefined");
	return (quantity >= requestedQuantity);
}

Product::Product(const string &category, int id, const string &name, int quantity) : 
				category(category), id(id), name(name), quantity(quantity)
{
	// throw("undefined");
}

Product::Product(const Product &p) 
{
	// throw("undefined");
	name = p.name;
	quantity = p.quantity;
	category = p.category;
	id = p.id;
}

Product::Product()
{
	// throw("undefined");
	name = "";
	quantity = 0;
	category = "";
	id = 0;
}

void Product::decreaseQuantity(int requestedQuantity)
{
	// throw("undefined");
	quantity -= requestedQuantity;
}

void Product::increaseQuantity(int requestedQuantity)
{
	// throw("undefined");
	quantity += requestedQuantity;
}

void Product::setCategory(const string &category)
{
	// throw("undefined");
	this->category = category;
}

void Product::setId(int id)
{
	// throw("undefined");
	this->id = id;
}

void Product::setQuantity(int quantity)
{
	// throw("undefined");
	this->quantity = quantity;
}

void Product::setName(const string &name)
{
	// throw("undefined");
	this->name = name;
}

string &Product::getCategory()
{
	// throw("undefined");
	return category;
}

int Product::getQuantity()
{
	// throw("undefined");
	return quantity;
}

int Product::getId()
{
	// throw("undefined");
	return id;
}

string &Product::getName()
{
	// throw("undefined");
	return name;
}

const Product &Product::operator=(const Product &a)
{
	// throw("undefined");
	name = a.name;
	quantity = a.quantity;
	category = a.category;
	id = a.id;
	return *this;
}

json Product::toJSON()
{
	return json(*this);
}
