#include <bits/stdc++.h>
using namespace std;

vector<int>twoNumberSum(vector<int> array, int targetSum) {

    int random=0;
    int a=1;
    for(int num:array) {
        for (int i = a; i < array.size(); i++) {
            if (num + array[i] != targetSum) {
                continue;
            } else {
                return {num, array[i]};
            }
        }
    a++;
    }
    return {};

}
int main(){
    twoNumberSum({3,5, -4, 8, 11, 1, -1, 6},10);
}
