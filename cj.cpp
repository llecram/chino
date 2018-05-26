#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
long long modulo(long long a, long long b){
    if (b == 0) {
		return 0;
	}
    while(a%b<0){
        a+=b;
    }
    return a%b;
}
int main(){
    int x_0=modulo(2,3);
    int x_1=modulo(3,5);
    int x_2=modulo(2,7);
    int p=3*5*7;
    cout<<p;
    int p1=p/3;
//    vector<int>almacen;
    int p2=p/5;
    int p3=p/7;
    cout<<endl<<p1<<" "<<p2<<" "<<p3;
    int q1=modulo(p1,3);
    cout<<q1<<endl;
    int q2=modulo(p2,5);
    cout<<q2<<endl;
    int q3=modulo(p3,7);
    int x0=2*p1*q1 + 3*p2*q2 + 2*p3*q3;
    int xreal=modulo(x0,p);
    cout<<xreal;
}
