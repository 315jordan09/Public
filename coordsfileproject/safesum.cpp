#include <iostream>
#include <climits>

using namespace std;

int safesum(int n1, int n2);
class SumTooLargeForInt{};

int main(){
    //cout << "maximum integer valus is: " << INT_MAX << endl; 2147483647
    try{
        cout << safesum(3,9000) << endl;
        cout << safesum(2147483600, 100) << endl;
    }
    catch(SumTooLargeForInt e){
        cerr << "main: Caught SumTooLargeForInt exception" << endl;
    }
    cout << safesum(34412, 100000) << endl;
    cout << safesum(2147483000, 5000) << endl;
    return 0;
}

int safesum(int n1, int n2){
    if(INT_MAX-n1<n2){
        throw SumTooLargeForInt();
    }
    else{
        return n1+n2;
    }
}
