#include "DateRange.h"

DateRange::DateRange(const std::string& start, const std::string& end)
    : startDate(start), endDate(end) {
    if (start > end) {
        throw std::invalid_argument("Data de início não pode ser maior que a data de fim!");
    }
}

std::string DateRange::getStartDate() const {
    return startDate;
}

std::string DateRange::getEndDate() const {
    return endDate;
}
