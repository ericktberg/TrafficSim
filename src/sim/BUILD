load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "sim",
    srcs = ["car-sim.cc"],
    hdrs = ["car-sim.h"],
    visibility = [
        "//src/main:__pkg__", 
        "//src/viz:__pkg__", 
        "//test:__pkg__"
    ],
)


