#include <gtest/gtest.h>

// Exemplo de teste
TEST(ExemploTest, TesteSimples) {
    EXPECT_EQ(1 + 1, 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 