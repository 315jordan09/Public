#include <iostream>

using namespace std;

int main(){
    double *pt;
    pt = new double[3];

    pt[0] = 5;
    cout << pt[0] << endl;
    pt++;
    cout << pt[0];
    pt--;
    return 0;
}
