#include "two_fer.h"
using namespace std;

namespace two_fer {

string two_fer(string name) {
    return name.empty() ?
           "One for you, one for me." :
           "One for " + name + ", one for me.";
}

}  // namespace two_fer
