load("@requirements//:requirements.bzl", "requirement")
load("@io_bazel_rules_python//python:python.bzl", "py_binary")


cc_library(
    name = "glad",
    srcs = ["glad.c"],
    hdrs = ["glad.h", "khrplatform.h"],
    visibility = ["//visibility:public"],
)