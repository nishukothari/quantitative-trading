#include <iostream>

#include "alpaca/alpaca.h"
#include "utils/environment.hpp"

int main(int argc, char **argv) {
	environment::set_up_environment(true);
	
	alpaca::Environment env;
	if(auto status = env.parse(); !status.ok()) {
		std::cout << "Error parsing config from environment: "
              	  << status.getMessage()
		          << "\n";
		return status.getCode();
	}

	alpaca::Client client(env);
    
	auto price = client.getLastTrade("AMZN");
    if(!price.first.ok()) {
        std::cout << "Error getting last quote from API: "
              	  << price.first.toString()
		          << "\n";
		return price.first.getCode();
    }

    alpaca::LastTrade amzn = price.second;
    std::cout << "Value of AMZN at time " << amzn.trade.timestamp << "is: $" << amzn.trade.price << "\n";
}
