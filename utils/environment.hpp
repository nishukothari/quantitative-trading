#pragma once

#include <fstream>
#include <string>
#include <iostream>

namespace environment {
	const std::string live_trading = "api.alpaca.markets";
	const std::string paper_trading = "paper-api.alpaca.markets";
	const std::string data_trading = "data.alpaca.markets";
	void set_up_environment(bool live);
}
