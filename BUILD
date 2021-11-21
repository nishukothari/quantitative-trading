cc_library(
   name = "utils",
   srcs = ["utils/environment.cpp"],
   hdrs = ["utils/environment.hpp"],
)

cc_binary(
    name = "get_class_of_amazon",
    srcs = ["proof-of-concept/get_class_of_amazon.cpp"],
    deps = [
        "@com_github_marpaia_alpaca_trade_api_cpp//alpaca:alpaca",
	":utils",
    ],
)
