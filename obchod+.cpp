#include <iostream>
#include <cstdlib>
#include <time.h>
#include<windows.h>
#include <stdlib.h>
using namespace std;

class ovoce {
  public:
    int cena;
    int pocet;
    string puvod;
};

class zvirata {
  public:
    int cena;
    string rychlost;
    string sila;
};

int main() {
    cout << "Vitame vas v nasem krasnem a utulnem obchudku na farme \n";
    Sleep (2000);
    vyber:
    system ("cls");
    cout << "zde si muzete zobrazit nasi nabidku 1 = ovoce 2 = zvirata 3 = smluvni podminky 4 = konec";
    int x;
    cin >> x;

    if (x == 1){
        ovoce jablko;
        jablko.cena = 10;
        jablko.pocet = 69;
        jablko.puvod = "ceska republika";

    ovoce banan;
        banan.cena = 25;
        banan.pocet = 88;
        banan.puvod = "ekvador";

    ovoce vino;
        vino.cena = 169;
        vino.pocet = 21;
        vino.puvod = "italie";

            cout << "\n OVOCE \n";
            cout << "jablka" << " cena - " << jablko.cena << " pocet - " << jablko.pocet << " puvod - " << jablko.puvod << "\n";
            cout << "banany" << " cena - " << banan.cena << " pocet - " << banan.pocet << " puvod - " << banan.puvod << "\n";
            cout << "hraoznove vino" << " cena - " << vino.cena << " pocet - " << vino.pocet << " puvod - " << vino.puvod << "\n";

            cout << "1 nebo cokoliv jineho pro krok zpet";
            int y;
            cin >> y;

        if (y = 1){
                goto vyber;
                }
            }

    else if (x == 2){
        zvirata mravenci;
        mravenci.cena = 1;
        mravenci.rychlost = "4km/h";
        mravenci.sila = "3/10";

        zvirata ovce;
        ovce.cena = 6759;
        ovce.rychlost = "11km/h";
        ovce.sila = "5/10";

        zvirata vcely;
        vcely.cena = 55;
        vcely.rychlost = "12km/h";
        vcely.sila = "8/10";

             cout << "\n ZVIRATA \n";
        cout << "mravenci" << " cena - " << mravenci.cena << " rychlost - " << mravenci.rychlost << " sila - " << mravenci.sila << "\n";
        cout << "ovce" << " cena - " << ovce.cena << " rychlost - " << ovce.rychlost << " sila - " << ovce.sila << "\n";
        cout << "hraoznove vcely" << " cena - " << vcely.cena << " rychlost - " << vcely.rychlost << " sila - " << vcely.sila << "\n";

        cout << "1 nebo cokoliv jineho pro krok zpet";
        int y;
        cin >> y;

    if (y = 1){
            goto vyber;
            }
                else if (x == 4){
                    return 0;
                }
                }else if (x == 3){
                    cout << "neznam \n";
                    cout << "1 nebo cokoliv jineho pro krok zpet";
                        int y;
                        cin >> y;

                        if (y = 1){
                        goto vyber;
                        }
                    }

                else if (x == 4){
                    return 0;
                }

    system ("cls");



}
