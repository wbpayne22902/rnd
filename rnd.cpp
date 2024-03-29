//#include <boost/random/random_device.hpp>
//#include <boost/random/uniform_int_distribution.hpp>
//Cool Program
#include <iostream>
#include <random>
using namespace std;
int main() {
    std::string chars(
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "1234567890"
        "!@#$%^&*()"
        "`~-_=+[{]}\\|;:'\",<.>/? ");
    random_device rng;
    uniform_int_distribution<> index_dist(0, chars.size() - 1);
    for(int i = 0; i < 8; ++i) {
        cout << chars[index_dist(rng)];
    }
    cout << endl;
}

