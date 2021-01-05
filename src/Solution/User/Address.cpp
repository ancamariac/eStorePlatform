#include "Address.h"

using namespace std;

Address::Address()
{
	// throw("undefined");
	county = "";
	locality = "";
	street = "";
	number = 0;
	block = "";
	apartment = 0;
}

Address::Address(const Address &address)
{
	// throw("undefined");
	this->county = address.county;
	this->locality = address.locality;
	this->street = address.street;
	this->number = address.number;
	this->block = address.block;
	this->apartment = address.apartment;
}

Address::Address(const string &jud, const string &loc, const string &str, int nr, const string &bl, int ap)
{
	// throw("undefined");
	this->county = jud;
	this->locality = loc;
	this->street = str;
	this->number = nr;
	this->block = bl;
	this->apartment = ap;
}

const Address &Address::operator=(const Address &adr)
{
	// throw("undefined");
	this->county = adr.county;
	this->locality = adr.locality;
	this->street = adr.street;
	this->number = adr.number;
	this->block = adr.block;
	this->apartment = adr.apartment;
	return *this;
}

void Address::setStrada(const string &str)
{
	// throw("undefined");
	this->street = str;
}

void Address::setNumber(int nr)
{
	// throw("undefined");
	this->number = nr;
}

void Address::setBlock(const string &bl)
{
	// throw("undefined");
	this->block = bl;
}

void Address::setApartment(int ap)
{
	// throw("undefined");
	this->apartment = ap;
}

void Address::setCounty(const string &jud)
{
	// throw("undefined");
	this->county = jud;
}

void Address::setLocality(const string &loc)
{
	// throw("undefined");
	this->locality = loc;
}

string &Address::getStreet()
{
	// throw("undefined");
	return street;
}

int Address::getNumber()
{
	// throw("undefined");
	return number;
}
string &Address::getBlock()
{
	// throw("undefined");
	return block;
}

int Address::getApartment()
{
	// throw("undefined");
	return apartment;
}

string &Address::getCounty()
{
	// throw("undefined");
	return county;
}

string &Address::getLocality()
{
	// throw("undefined");
	return locality;
}

bool Address::operator==(const Address &address)
{
	// throw("undefined");
	return (this->county == address.county 
	&& this->locality == address.locality
	&& this->street == address.street 
	&& this->number == address.number 
	&& this->block == address.block
	&& this->apartment == address.apartment);
}

bool Address::operator!=(const Address &address)
{
	// throw("undefined");
	return (this->county != address.county 
	|| this->locality != address.locality
	|| this->street != address.street 
	|| this->number != address.number 
	|| this->block != address.block
	|| this->apartment != address.apartment);
}
 
ostream &operator<<(ostream &os, const Address &a)
{
	throw("undefined");
	os << "County: " << a.county << "\n";
	os << "Locality: " << a.locality << "\n";
	os << "Street: " << a.street << "\n";
	os << "Number: " << a.number << "\n";
	os << "Block: " << a.block << "\n";
	os << "Apartment: " << a.apartment << "\n";

}

json Address::toJSON()
{
	return json(*this);
}