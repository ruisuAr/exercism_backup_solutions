#include <string>
#include <vector>
using namespace std;

namespace election {
    
    // The election result struct is already created for you:
    struct ElectionResult {
        // Name of the candidate
        string name{};
        // Number of votes the candidate has
        int votes{};
    };
    
    int vote_count(ElectionResult& candidate) {
        return candidate.votes;
    }
    
    void increment_vote_count(ElectionResult& candidate, int new_votes) {
        candidate.votes += new_votes;
    }
    
    ElectionResult& determine_result(vector<ElectionResult>& final_count) {
        size_t winner_index{0};
        
        for (size_t i = 1; i < final_count.size(); i++) {
            if (final_count[i].votes > final_count[winner_index].votes) winner_index = i;
        }
        final_count[winner_index].name = "President " + final_count[winner_index].name;
        
        return final_count[winner_index];
    }
}  // namespace election
