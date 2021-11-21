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
	
	auto asset = client.getAsset("AMZN");
	if(auto response = asset.first; !response.ok()) {
		std::cout << "Error getting last quote from API: "
		<< response.getMessage()
		<< "\n";
	}
	
	std::cout << "Amazon is of asset class: "
        << asset.second.asset_class 
	<< "\n";
}
