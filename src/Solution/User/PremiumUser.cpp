#include "PremiumUser.h"

using namespace std;

PremiumUser::PremiumUser() : User()
{
	// throw("undefined");
	map<int, int>::iterator it;
	for ( it = discounts.begin(); it != discounts.end(); it ++ )
	{
		it->second = 0;
	}
	premiumSubscriptionCost = 0;  
}

PremiumUser::PremiumUser(const string &judetf, const string &localitatef, const string &stradaf, int nr_stradaf, const string &blocf, int apartamentf,
						 const string &judetl, const string &localitatel, const string &stradal, int nr_stradal, const string &blocl, int apartamentl,
						 int id, const string &nume, const string &prenume, const string &email, int premiumSubscriptionCost, const map<int, int> &discounts)
	: User(judetf, localitatef, stradaf, nr_stradaf, blocf, apartamentf, judetl, localitatel, stradal, nr_stradal, blocl, apartamentl, id, nume, prenume, email)
{
	// throw("undefined");
	this->premiumSubscriptionCost = premiumSubscriptionCost;
	this->discounts = discounts;
}

PremiumUser::PremiumUser(const PremiumUser &up) : User(up)
{
	// throw("undefined");
	this->premiumSubscriptionCost = up.premiumSubscriptionCost;
	this->discounts = up.discounts;
}

const PremiumUser &PremiumUser::operator=(const PremiumUser &up)
{
	// throw("undefined");
	User::operator=(up);
	this->premiumSubscriptionCost = up.premiumSubscriptionCost;
	this->discounts = up.discounts;
	return *this;
}

void PremiumUser::displayUser()
{
	throw("undefined");
}

string PremiumUser::getUserType()
{
	// throw("undefined");
	return "Premium User";
}

float PremiumUser::getTransportCost()
{
	// throw("undefined");
	return User::getTransportCost();
}

map<int, int> &PremiumUser::getDiscounts()
{
	// throw("undefined");
	return discounts;
}

void PremiumUser::setDiscounts(map<int, int> red)
{
	// throw("undefined");
	this->discounts = red;
}

void PremiumUser::setPremiumSubscriptionCost(int cap)
{
	// throw("undefined");
	this->premiumSubscriptionCost = cap;
}

int PremiumUser::getPremiumSubscriptionCost()
{
	// throw("undefined");
	return premiumSubscriptionCost;
}

json PremiumUser::toJSON()
{
	return json(*this);
}