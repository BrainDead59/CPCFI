#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int requestsCount, 
        serverCapacity,
        maxLoad = 1,
        currLoad = 1,
        nextTimeout = 0;

    cin >> requestsCount >> serverCapacity;

    int requests[requestsCount];

    cin >> requests[0];

    for (int i = 1; i < requestsCount; i++) {
        cin >> requests[i];
        currLoad++;
        while ((requests[i] >= requests[nextTimeout] + 1000)) {
            nextTimeout++;
            currLoad--;
        }
        maxLoad = max(maxLoad, currLoad);
    }

    int servers = ceil((double)maxLoad / serverCapacity);
    cout << servers << endl;

    return 0;
}