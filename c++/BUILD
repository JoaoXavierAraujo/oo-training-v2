cc_binary(
    name = "main",
    srcs = ["main.cpp", "aux.cpp", "aux.h"] + glob(["exerc/*.cpp"]) + glob(["exerc/*.h"]),
)

cc_test(
    name = "all-tests",
    srcs = glob(["test/*.cpp"]),
    deps = ["//c++:main",
            "@gtest//:gtest",
            "@gtest//:gtest_main"],
)