#include <iostream>
using namespace std;

int main() {

int n, i = 1;
cin >> n;

while (i <= n)
{
    int j = 1;
    int div = 0;
    while (j <= i)
    {
        if ((i % j) == 0)
        {
            div++;
        }
       j++; 
    }
    if (div == 2) {
        cout << i << endl;
    }
    i++;
}
/* USANDO for FICA DESSE JEITO:
for (i; i <= n; i++) {
    int j = 1;
    int div = 0;
    for (j; j <= i; j++) {
        if ((i % j) == 0) {
        div++;
        }
    }
    if (div == 2) {
        cout << i << endl;
    }
}
*/
    return 0;
}