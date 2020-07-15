load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "sim-test",
    srcs = ["car-test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//src/sim:sim"
    ]
)