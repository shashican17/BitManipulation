#include <bits/stdc++.h>
using namespace std;


int setIthBit(int n, int i){
    int bitmask = 1 << i;
    n = n | bitmask;
    return n;
}