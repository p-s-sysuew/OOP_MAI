#include <gtest/gtest.h>
#include "../include/plant.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(plant(100,10,910)==10);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(plant(70,10,400)==7);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(plant(150,0,500)==4);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(plant(5,1,35)==9);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}