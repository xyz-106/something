#include <iostream>
using namespace std;
class Fraction
{
    int num, den;
public:
    Fraction(int n,  int d) { num = n; den = d; }
  
    // conversion operator: return float value of fraction
    operator float() const {
        return float(num) / float(den);
    }
};
  //?:,::,
int main() {
    Fraction f(2, 5);
    float val = f;//f float(2,5)
    cout << val;
    return 0;
}