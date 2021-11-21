#pragma once

#include <fstream>
#include <string>
#include <iostream>

namespace environment {
	const std::string live_trading = "https://api.alpaca.markets";
	const std::string paper_trading = "https://paper-api.alpaca.markets";
	void set_up_environment(bool live);
}
