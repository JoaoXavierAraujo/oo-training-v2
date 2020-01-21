#include "exceptional_server.h"

int Server::compute(long long A, long long B) {
    load += 1;
    if(A < 0) {
        throw invalid_argument("A is negative");
    }
    vector<int> v(A, 0);
    int real = -1, cmplx = sqrt(-1);
    if(B == 0) throw 0;
    real = (A/B)*real;
    int ans = v.at(B);
    return real + A - B*ans;
}

int Server::getLoad(){
    return load;
}

int Server::load = 0;