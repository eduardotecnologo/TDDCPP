#ifndef DATERANGE_H
#define DATERANGE_H

#include <string>
#include <stdexcept>

class DateRange {
public:
    DateRange(const std::string& start, const std::string& end);
    std::string getStartDate() const;
    std::string getEndDate() const;
private:
    std::string startDate;
    std::string endDate;
};

#endif // DATERANGE_H
