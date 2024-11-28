#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main(){
    long long int circle_in_square = 0;
    long long int total = 100000000;
    srand(time(NULL));
    for (int i=0; i<total; i++){
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        //cout << x << " " << y << endl;
        if ((x*x + y*y) <= 1.0)
            circle_in_square++;
    }
    double result = (double(circle_in_square) / total) * 4;
    cout << result << endl;
    return 0;
}