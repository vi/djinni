// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#pragma once

#include "test_helpers.hpp"
#include <memory>

class ExternRecordWithDerivings;

class ExternInterface2 {
public:
    virtual ~ExternInterface2() {}

    virtual ExternRecordWithDerivings foo(const std::shared_ptr<::testsuite::TestHelpers> & i) = 0;
};
