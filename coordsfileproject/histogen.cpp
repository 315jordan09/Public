#include <iostream>
#include <cstring>

using namespace std;

void frequency(string s, const char **argl, int p, int d, int ror[]);

int main(int argc, const char *argv[]){
    string a;
    int l, x;
    l = 1;
    x = argc - 1;
    int f = sizeof(argv);
    int ror[f];
    for(int y = 0; y<f; y++){
        ror[y] = 0;
    }
    while(l<=x){
        a = argv[l];
        frequency(a, argv, l, x, ror);
        l++;
    }
}

void frequency(string s, const char **argl, int p, int d, int ror[]){
    if(ror[p]==0){
            cout << s << ": ";
        for(int w = p; w<=d; w++){
            if(s == argl[w]){
                ror[w]+=1;
                cout << "*";
            }
        }
        cout << endl;
    }
}
