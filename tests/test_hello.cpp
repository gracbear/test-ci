#include <sstream>
#include <hello/hello.h>
#include <gtest/gtest.h>

TEST(Hello, gereetings) {
	std::stringstream ss;
    Hello::greetings(ss);
    ASSERT_FALSE(ss.str().empty());
}