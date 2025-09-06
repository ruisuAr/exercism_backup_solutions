#include <array>
#include <string>
#include <vector>
using namespace std;

vector<int> round_down_scores(vector<double> student_scores) {
    vector<int> scores_truncated;
    for(int i{0}; i < student_scores.size(); i++) {
        scores_truncated.emplace_back(static_cast<int>(student_scores[i]));
    }
    return scores_truncated;
}

int count_failed_students(vector<int> student_scores) {
    int failed_students{0};
    for(int i{0}; i < student_scores.size() ; i++) {
        if(student_scores[i] <= 40) failed_students++;
    }
    return failed_students;
}

array<int, 4> letter_grades(int highest_score) {
    array<int, 4> grades_intervals{41};
    int interval = (highest_score - 40) / 4;
    for(int i{1}; i < 4; i++) {
        grades_intervals[i] = grades_intervals[i-1] + interval;
    }
    return grades_intervals;
}

vector<string> student_ranking(vector<int> student_scores, vector<string> student_names) {
    vector<string> index_matching;
    for(int i{0}; i < student_scores.size() && i < student_names.size(); i++) {
        string format{to_string(i+1) + ". " + student_names[i] + ": " + to_string(student_scores[i])};
        index_matching.emplace_back(format);
    }
    return index_matching;
}

string perfect_score(vector<int> student_scores, vector<string> student_names) {
    for(int i{0}; i < student_scores.size() && i < student_names.size(); i++) {
        if(student_scores[i] == 100) {
            return student_names[i];
            break;
        } else continue;
    }
    return "";
}