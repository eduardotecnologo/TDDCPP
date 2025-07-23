#include <gtest/gtest.h>
#include "domain/value_object/DateRange.h"

TEST(DateRangeTest, CriaIntervaloValido) {
    DateRange range("2024-06-01", "2024-06-10");
    EXPECT_EQ(range.getStartDate(), "2024-06-01");
    EXPECT_EQ(range.getEndDate(), "2024-06-10");
}

TEST(DateRangeTest, NaoPermiteDataInicioMaiorQueFim) {
    EXPECT_THROW(DateRange("2024-06-10", "2024-06-01"), std::invalid_argument);
}
