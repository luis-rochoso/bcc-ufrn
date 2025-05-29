#include <iostream>
using namespace std;

int main(){

    int idade1 , idade2, idade3;
    bool camila1, camila2, camila3;

    cout << "Digite a idade de cada uma das irmãs: " << endl;
    cin >> idade1 >> idade2 >> idade3;

    camila1 = ((idade2 <= idade1) && (idade1 <= idade3)) || ((idade3 <= idade1) && (idade1 <= idade2));
    camila2 = ((idade1 <= idade2) && (idade2 <= idade3)) || ((idade3 <= idade2) && (idade2 <= idade1));
    camila3 = ((idade1 <= idade3) && (idade3 <= idade2)) || ((idade2 <= idade3) && (idade3 <= idade1));

    
    if (camila1) {
        cout << "A idade de Camila é " << idade1 << endl;
    }
    else if (camila2) {
        cout << "A idade de Camila é " << idade2 << endl;
    }
    else if (camila3) {
        cout << "A idade de Camila é " << idade3 << endl;
    }
    return 0;
}