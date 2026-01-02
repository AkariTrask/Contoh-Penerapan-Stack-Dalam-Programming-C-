#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack S_Aksi, S_Redo;
    string aksi;
    int ToTdamage;

    create_stack(S_Aksi);
    create_stack(S_Redo);

    cout << "            Pilih Aksi:" << endl;
    cout << "ATTACK | DEFENSE | UNDO | REDO | END" << endl << endl;
    cout << "(END untuk mengakhiri giliran)" << endl << endl;

    do {
        cout << "Masukkan Aksi: ";
        cin >> aksi;

        if (aksi != "END") {
            manageAction(S_Aksi, S_Redo, aksi);
        }

    } while (aksi != "END");

    ToTdamage = totalDamage(S_Aksi, 0);
    cout << endl;

    cout << "Total Damage = " << ToTdamage << endl;
    return 0;
}
