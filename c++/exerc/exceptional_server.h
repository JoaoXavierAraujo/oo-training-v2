#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>

using namespace std;

class Server {
private:
    static int load;
public:
    static int compute(long long A, long long B);
    static int getLoad();
};