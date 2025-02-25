#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i){
    int bitmask = 1 << i;
    if((n & bitmask) == 0){
        return 0;
    }else{
        return 1;
    }
}