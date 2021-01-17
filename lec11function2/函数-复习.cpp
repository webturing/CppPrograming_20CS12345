#include<bits/stdc++.h>

using namespace std;
const double PI = atan(1.0) * 4;

double Area(double r) {
    return PI * r * r;
}

double Perimeter(double r) {
    return 2 * PI * r;
}

int main() {
    double r;
    cin >> r;
    cout << "Area=" << Area(r) << endl; //call
    cout << "Perimeter=" << Perimeter(r) << endl;
    return 0;
}
