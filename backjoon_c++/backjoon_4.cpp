#include <iostream>
#include <iomanip> // setprecision을 사용하기 위한 헤더파일

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    cout << fixed << setprecision(9) << A / B << endl;

    return 0;
}