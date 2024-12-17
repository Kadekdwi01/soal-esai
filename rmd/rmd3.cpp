#include <iostream>
using namespace std;

int main () {
     int n, sum = 0;

     cout << "masukkan nilai n: ";
     cin >> n;

     for (int i = 2; i <= n; i += 2) {
          sum += i;
     }
     cout << "jumlah bilangan genap dari 1 hingga " << n << " adalah: " << sum << endl;
     return 0;
}
