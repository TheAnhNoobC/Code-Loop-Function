#include <cmath>
#include <iomanip>
using namespace std;

double calculate(int n){
    return (n == 1) ? 1 : sqrt(n + calculate(n - 1));
}
