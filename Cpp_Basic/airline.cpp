#include "airline.h"

AirlineTicket::AirlineTicket()
	:mPassengerName("Unknown Passenger")
		, mNumberOfMiles(0)
	, mhasEliteSuperRewardsStatus(false) {}

AirlineTicket::~AirlineTicket()
{
}

double AirlineTicket::calculatePriceInDollars() const
{
	if (hasEliteSuperRewardsStatus()) return 0;
	return getNumberofMiles() * 0.1;
}

const std::string& AirlineTicket::getPassengerName() const
{
	return mPassengerName;
}

void AirlineTicket::setPassengerName(const std::string& name)
{
	mPassengerName = name;
}

int AirlineTicket::getNumberofMiles() const
{
	return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
	mNumberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
	return mhasEliteSuperRewardsStatus;
}

void AirlineTicket::sethasEliteSuperRewardsStatus(bool status)
{
	mhasEliteSuperRewardsStatus = status;
}
