workspace(name = "nishu_kothari_quantitative_trading")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_marpaia_alpaca_trade_api_cpp",
    strip_prefix = "alpaca-trade-api-cpp-0.0.3",
    urls = ["https://github.com/marpaia/alpaca-trade-api-cpp/archive/v0.0.3.tar.gz"],
    sha256 = "db9efe3dc92f4e1d7eb69d76cb807af6bcf61ea14fe73f30e22830002b34f81a",
)
load("@com_github_marpaia_alpaca_trade_api_cpp//bazel:deps.bzl", "alpaca_deps")
alpaca_deps()
