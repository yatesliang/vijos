//vijos P1307

#include <iostream>
int main() {
    using namespace std;
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = n; i > 0; --i)
        sum += i * i;
    cout << sum << endl;
    return 0;
}