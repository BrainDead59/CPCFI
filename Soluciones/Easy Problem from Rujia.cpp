#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, elemento, k, v;
    vector<vector<int> > number;

    while (scanf("%d %d", &n, &m) != EOF){

        for (int i = 1; i <=1000000; i++) {
            vector<int> v;
            number.push_back(v);
        }

        for (int i = 1; i <= n; i++) {
            scanf("%d", &elemento);
            number[elemento].push_back(i);
        }

        for (int i = 0; i < m; i++){
            scanf("%d %d", &k, &v);

            if (k - 1 < number[v].size()){
                printf("%d\n", number[v][k - 1]);
            }
            else{
                printf("0\n");
            }
        }
    }

    return 0;
}