#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 41;
Batas = 41 + 100;
X = 20;
T = 41;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;
}
