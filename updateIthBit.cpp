#include <bits/stdc++.h>
using namespace std;

int clearIthBit(int n, int i){
    int bitmask = ~(1 << i);
    return n & bitmask;
}

int updateIthBit(int n, int i, int newBit){
    n = clearIthBit(n, i);
    int bitmask = newBit << i;
    return n | bitmask;
}