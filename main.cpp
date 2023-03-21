#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> fibonnacci (N+1);
    fibonnacci [0] = 1;
    fibonnacci [1] = 1;

    for (int i = 2; i < N+1; i++)
    {
      fibonnacci[i] = fibonnacci[i-2] + fibonnacci[i-1];
    }
    cout << fibonnacci[N] << endl;

    
}