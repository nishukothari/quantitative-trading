exports_files(["api-key-id", "api-secret-key"])
cc_library(
   name = "utils",
   srcs = ["utils/environment.cpp"],
   hdrs = ["utils/environment.hpp"],
   data = ["//:api-key-id", "//:api-secret-key"],
   deps = [
       "@com_github_marpaia_alpaca_trade_api_cpp//alpaca:alpaca",
    ],
)

cc_binary(
    name = "get_class_of_amazon",
    srcs = ["proof-of-concept/get_class_of_amazon.cpp"],
    deps = [
        "@com_github_marpaia_alpaca_trade_api_cpp//alpaca:alpaca",
	    ":utils",
    ],
)

cc_binary(
    name = "get_current_value_of_amazon",
    srcs = ["proof-of-concept/get_current_value_of_amazon.cpp"],
    deps = [
        "@com_github_marpaia_alpaca_trade_api_cpp//alpaca:alpaca",
	    ":utils",
    ],
)
