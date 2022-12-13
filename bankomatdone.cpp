#include <iostream>
using namespace std;

int main ()  {
int reset = 1;
while (reset == 1) {

int pposila;
int pz = 500;
int pr = 123;

int jposila;
int jz = 1000;
int jr = 1234;

int kposila;
int kz = 9582;
int kr = 12345;

int a;

vyberuzivatele:

cout << "vyber uyivatele \n PEPA 1 \n JIRKA 2 \n KVIDO 3 \n";
cin >> a;

pepa:
jirka:
kvido:

switch (a) {
    case 1: {
        int z;
        int pp;

        int gg;
            cout << "PIN \n";
            cin >> pp;

            if (pp == pr) {






            cout << "PEPA \n";

            cout << "Co chcete udelat \n 1 = vyber penez \n 2 = Poslat penize\n 3 = zustatek \n 4 = zpet na vyber uzivatele \n 5 = konec more \n" ;
            cin >> z;
                switch (z) {
                    case 1: {
                        cout << "vyber penez \n";


                        cout << "kolik penez chcete vybrat? \n";
                        cin >> gg;

                        if (gg < pz){
                            pz = pz - gg;
                            cout << "investuj \n";
                            goto pepa;
                        }else {
                            cout<< "nemas prachy";
                            goto pepa;
                        }



                        }break;
                        case 2: {

                            int b;
                            cout << "kolik chcete poslat \n";
                            cin >> pposila;
                            cout <<  "\n komu chceste poslat \n 1 = Jirka \n 2 = Kvído \n";
                            cin >> b;
                            if (pposila <= pz){
                            pz = pz - pposila;


                                switch (b){
                                    case 1: {
                                        jz = jz + pposila;
                                        goto pepa;
                                    }break;

                                    case 2: {
                                        kz = kz + pposila;
                                        goto pepa;
                                    }break;
                                }

                            cout << "poslano \n";
                        }else {
                            cout<< "nemas prachy";
                            goto pepa;
                        }
                        }break;
                        case 3: {
                            cout << "zustatek \n";

                            cout << pz ;
                            cout << "\n";
                            goto pepa;
                        }break;
                        case 4: {
                            goto vyberuzivatele;
                        }
                        case 5: {

                            return 0;
                        }break;

                    }
while (pp == pr);




}


    }break;



    case 2: {

        int z;
        int jp;

        int gg;
            cout << "PIN \n";
            cin >> jp;

            if (jp == jr) {




            cout << "Jirka \n";

            cout << "Co chcete udelat \n 1 = vyber penez \n 2 = Poslat penize\n 3 = zustatek \n 4 = zpet na vyber uzivatele \n 5 = konec more \n" ;
            cin >> z;
                switch (z) {
                    case 1: {
                        cout << "vyber penez \n";

                        cout << "kolik penez chcete vybrat? \n";
                        cin >> gg;

                        if (gg < jz){
                            jz = jz - gg;
                            cout << "investuj \n";
                            goto jirka;
                        }else {
                            cout<< "nemas prachy";
                            goto jirka;
                        }



                        }break;
                        case 2: {

                            int b;
                            cout << "kolik chcete poslat";
                            cin >> jposila;
                            cout <<  "\n komu chceste poslat \n 1 = Pepa \n 2 = Kvido \n";
                            cin >> b;
                            if (jposila < jz){
                            jz = jz - jposila;


                                switch (b){
                                    case 1: {
                                        pz = pz + jposila;
                                        goto jirka;
                                    }break;

                                    case 2: {
                                        kz = kz + jposila;
                                        goto jirka;
                                    }break;
                                }

                            cout << "poslano \n";
                        }else {
                            cout<< "nemas prachy";
                            goto jirka;
                        }
                        }break;
                        case 3: {
                            cout << "zustatek \n";
                            cout << jz ;
                            cout << "\n";
                            goto jirka;
                        }break;
                        case 4: {
                            goto vyberuzivatele;
                        }
                        case 5: {

                            return 0;
                        }break;
                    }
while (jp == jr);






}


    }break;

    case 3: {
        int z;
        int kp;

        int gg;
            cout << "PIN \n";
            cin >> kp;

            if (kp == kr) {




            cout << "Kvido \n";

            cout << "Co chcete udelat \n 1 = vyber penez \n 2 = Poslat penize\n 3 = zustatek \n 4 = zpet na vyber uzivatele \n 5 = konec more \n" ;
            cin >> z;
                switch (z) {
                    case 1: {
                        cout << "vyber penez \n";

                        cout << "kolik penez chcete vybrat? \n";
                        cin >> gg;

                        if (gg < kz){
                            kz = kz - gg;
                            cout << "investuj \n";
                            goto kvido;
                        }else {
                            cout<< "nemas prachy";
                            goto kvido;
                        }



                        }break;
                        case 2: {
                            int kposila;
                            int b;
                            cout << "kolik chcete poslat";
                            cin >> kposila;
                            cout <<  "\n komu chceste poslat \n 1 = Pepa \n 2 = Jirka \n";
                            cin >> b;
                            if (kposila < kz){
                            kz = kz - kposila;


                                switch (b){
                                    case 1: {
                                        pz = pz + kposila;
                                        goto kvido;
                                    }break;

                                    case 2: {
                                        jz = jz + kposila;
                                        goto kvido;
                                    }break;
                                }

                            cout << "poslano \n";
                        }else {
                            cout<< "nemas prachy";
                            goto kvido;
                        }
                        }break;
                        case 3: {
                            cout << "zustatek \n";
                            cout << "\n";
                            cout << kz ;
                            cout << "\n";

                            goto kvido;
                        }break;
                        case 4: {
                            goto vyberuzivatele;
                        }
                        case 5: {

                            return 0;
                        }break;
                    }
while (kp == kr);





}



    }break;
    }
    }
}





