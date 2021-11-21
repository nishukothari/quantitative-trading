workspace(name = "nishu_kothari_quantitative_trading")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_marpaia_alpaca_trade_api_cpp",
    strip_prefix = "alpaca-trade-api-cpp-0.0.4",
    urls = ["https://github.com/nishukothari/alpaca-trade-api-cpp/archive/v0.0.4.tar.gz"],
    sha256 = "c5bcd847d133c0370c5e905f3b2c6f7520663afad69eb1ae11cd06830cf26b5d",
)
load("@com_github_marpaia_alpaca_trade_api_cpp//bazel:deps.bzl", "alpaca_deps")
alpaca_deps()
