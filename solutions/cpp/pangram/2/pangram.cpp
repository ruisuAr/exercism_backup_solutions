#include "pangram.h"

using namespace std;

namespace pangram {

bool is_pangram(string sentence) {
// "Set" type is a collection that does not allow duplicates and maintains unique elements
    set<char> letters;
    
// Iterate through each character of "sentence" and, in each iteration, "c" takes the value
// of a character
    for(char c : sentence) {
    // isalpha(): Returns true only for letters
        if(isalpha(c)) letters.insert(tolower(c));
    }
    
    return letters.size() == 26;
}

}  // namespace pangram
