#pragma once
#include <string>
#include <memory>
#include <iostream>

using namespace std;
class AirlineTicket {
public:
	AirlineTicket();
	~AirlineTicket();

	double calculatePriceInDollars() const;
	const std::string& getPassengerName() const;
	void setPassengerName(const std::string& name);

	int getNumberofMiles() const;
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardsStatus() const;
	void sethasEliteSuperRewardsStatus(bool status);

private:
	std::string mPassengerName;
	int mNumberOfMiles;
	bool mhasEliteSuperRewardsStatus;
};
