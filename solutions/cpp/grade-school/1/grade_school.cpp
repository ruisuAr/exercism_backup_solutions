#include "grade_school.h"
using namespace std;

namespace grade_school {

void school::add(string name, int grade) {
// Obtain a reference to the grade's vector (if it doesn't exist, it's created automatically)
    vector<string>& students = students_[grade];

// Search if the name already exists at that grade
    auto it = find(students.begin(), students.end(), name);

// If it doesn't exist, add it
    if (it == students.end()) {
        students.push_back(name);
        sort(students.begin(), students.end());    // Sort alphabetically
    }
}

vector<string> school::grade(int grade) const {
// Search if the grade exists in the map
    auto it = students_.find(grade);

// If the grade exists, return the students' vector
    if (it != students_.end()) {
        return it->second;    // Second is the vector<string>
    }

    return {};
}
    
}  // namespace grade_school
