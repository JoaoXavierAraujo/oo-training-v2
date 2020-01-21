#cc_library(
#    name = "aux",
#    srcs = ["aux.cpp"],
#    deps = ["//c++/exerc:all-exerc"],
#    visibility = ["//c++/tests:__pkg__"],
#)

cc_binary(
    name = "main",
    srcs = ["main.cpp", "aux.cpp", "aux.h"] + glob(["exerc/*.cpp"]) + glob(["exerc/*.h"]),
)