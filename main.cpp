#include <iostream>
#include <iomanip>

using namespace std;

const double DESCOMPTE_QUALITAT_ALTA = 10;
int main()
{
    double preu_final;
    char fruita;

    cout << "Peres o castanyes (p/c): ";
    cin >> fruita;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (fruita == 'p'){ //quan les fruites son peres
        int nombre_caixes;
        double preu_caixa, tant_per_cent;

        cout << "Nombre total de caixes de peres: ";
        cin >> nombre_caixes;
        cout << "Preu de la caixa de peres: ";
        cin >> preu_caixa;
        cout << "Tant per cent de descompte: ";
        cin >> tant_per_cent;
        preu_final = nombre_caixes*preu_caixa*(1-tant_per_cent/100);
    }
    else{ //quan les fruites son castanyes
        int nombre_sacs;
        double preu_sac;
        char qualitat;

        cout << "Qualitat de les castanyes: ";
        cin >> qualitat;
        if (qualitat == 'a'){ //quan la qualitat de les castanyes es alta
            int minim_sacs_descompte;

            cout << "Nombre total de sacs: ";
            cin >> nombre_sacs;
            cout << "Preu del sac d'alta qualitat: ";
            cin >> preu_sac;
            cout << "Nombre minim de sacs per fer descompte: ";
            cin >> minim_sacs_descompte;
            if (nombre_sacs >= minim_sacs_descompte)
                preu_final = nombre_sacs*preu_sac*(1-DESCOMPTE_QUALITAT_ALTA/100);
            else
                preu_final = nombre_sacs*preu_sac;
        }
        else{ //quan la qualitat de les castanyes es baixa
            cout << "Nombre total de sacs: ";
            cin >> nombre_sacs;
            cout << "Preu del sac de baixa qualitat: ";
            cin >> preu_sac;
            preu_final = nombre_sacs*preu_sac;
        }
    }
    cout << "El preu final es " << preu_final;

    return 0;
}
