#include <bits/stdc++.h>
using namespace std;

int clearIthBit(int n, int i){
    int bitmask = ~(1 << i);
    return n & bitmask;
}