// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#include "test_duration.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBTestDuration;

namespace djinni_generated {

class TestDuration
{
public:
    using CppType = std::shared_ptr<::testsuite::TestDuration>;
    using ObjcType = DBTestDuration*;

    using Boxed = TestDuration;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

