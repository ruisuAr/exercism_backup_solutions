#include "pangram.h"
#include <cctype>
using namespace std;

namespace pangram {

bool is_pangram(string sentence) {
// Convert all letters in the sentence to lowercase
    for(size_t i{0}; i < sentence.size(); i++) {
        sentence[i] = tolower(sentence[i]);
    }    
// Auxiliary variables
    const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
    string alph = "";
    
    for(size_t i{0}; i < sentence.size(); i++) {
        for(size_t j{0}; j < ALPHABET.size(); j++) {
            bool found = false;
            if(sentence[i] != ALPHABET[j]) continue;
            for(size_t k{0}; k < alph.size(); k++) {
                if(ALPHABET[j] == alph[k]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                alph.push_back(ALPHABET[j]);
                if(alph.size() == 26) return true;
                break;
            }
        }
    }
    return false;
}

}  // namespace pangram
