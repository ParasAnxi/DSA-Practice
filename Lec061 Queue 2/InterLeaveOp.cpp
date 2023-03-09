#include <bits/stdc++.h>
using namespace std;
 
void interLeaveQueue(queue<int>& q){
    if (q.size() % 2 != 0)
        cout << "Input even number of integers." << endl;
    queue<int> temp;
    int halfSize = q.size() / 2;
    for (int i = 0; i < halfSize; i++) {
        temp.push(q.front());
        q.pop();
    }
    while (!temp.empty()) {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
}