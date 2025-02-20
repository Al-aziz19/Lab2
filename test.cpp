#include "gtest/gtest.h"
#include "Hello.h"
#include <iostream>


TEST (HelloCheck,CheckFunc){
    std::string a = Hi();
    EXPECT_TRUE (a == "HI Aziz \n");
}