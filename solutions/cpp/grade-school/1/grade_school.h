#pragma once
#include <string>
#include <map>
#include <vector>
#include <algorithm>

namespace grade_school {

class school {
private:
    std::map<int, std::vector<std::string>> students_;
public:
// To add students and their grades
    void add(std::string name, int grade);
// To search by grade
    std::vector<std::string> grade(int grade) const;
// To return students's list sorted
    std::map<int, std::vector<std::string>> roster() const { return students_; }
};

}  // namespace grade_school
