#include "utils/environment.hpp"

void environment::set_up_environment(bool live) {
        std::string api_key_id = "";
        std::string api_secret_key = "";
        std::ifstream id_ifs("api-key-id");
        std::ifstream secret_ifs("api-secret-key");
	
        id_ifs >> api_key_id;
        secret_ifs >> api_secret_key;

        setenv("APCA_API_KEY_ID", api_key_id.c_str(), 1);
        setenv("APCA_API_SECRET_KEY", api_secret_key.c_str(), 1);
	setenv("APCA_API_BASE_URL", (live) ? live_trading.c_str() : paper_trading.c_str(), 1);
        setenv("APCA_API_DATA_URL", data_trading.c_str(), 1);
}
