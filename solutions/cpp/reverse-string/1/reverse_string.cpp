#include "reverse_string.h"
using namespace std;

namespace reverse_string {

string reverse_string(string input) {
    string reversed = "";
    
    for(int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }
    return reversed;
}

}  // namespace reverse_string
