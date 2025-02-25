#include <bits/stdc++.h>
using namespace std;

int clearLastIBits(int n, int i){
    int bitmask = (-1) << i;
    return n & bitmask;
}