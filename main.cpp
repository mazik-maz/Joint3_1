//Ilnaz Magizov DSAI-02
//i.magizov@innopolis.university

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    double  v0, k0, a1, a2, b1, b2, t, n, j;
    cin >> v0 >> k0 >> a1 >> b1 >> a2 >> b2 >> t >> n;
    vector <double> vt(n + 1), kt(n + 1);
    cout << "t:\n";
    for(int i = 0; i <= n; ++i){
        j = (t / n) * ((double) i);
        cout << j << ' ';
    }
    cout << "\nv:\n";
    for(int i = 0; i <= n; ++i){
        j = (t / n) * ((double) i);
        vt[i] = a2 / b2 + (v0 - a2/ b2) * cos(sqrt(a1 * a2) * j) - (k0 - a1 / b1) * ((sqrt(a2) * b1) / (b2 * sqrt(a1))) * sin(sqrt(a1 * a2) * j);
        cout << vt[i] << ' ';
    }
    cout << "\nk:\n";
    for(int i = 0; i <= n; ++i){
        j = (t / n) * ((double) i);
        kt[i] = a1 / b1 + (k0 - a1 / b1) * cos(sqrt(a1 * a2) * j) + (v0 - a2 / b2) * ((sqrt(a1) * b2) / (b1 * sqrt(a2))) * sin(sqrt(a1 * a2) * j);
        cout << kt[i] << ' ';
    }
    return 0;
}
