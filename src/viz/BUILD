load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "sim-viz",
    srcs = ["main.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@glfw//:glfw",
        "@glm//:glm",
        "//glad:glad",
        "//src/sim:sim"
    ]
)