#include <iostream>

using namespace std;

int main()
{

    //Egy állatkereskedõ N napon keresztül forgalmaz állatokat. Minden napra ismerjük, hogy addig
    //mekkora bevétele volt.
    //Készíts programot, amely megadja, hogy a kereskedõ hány napon adott el állatot!
    //
    //Szóval aki nem érti elsõre a feladatot. Azt akarja tõlünk hogy kérjük be a napok számát amit meg akarunk nézni, hogy adott-e el szerencsétlen állatot(napok). Nézzünk 4 napot.
    //Tegyük fel, hogy elsõ nap elad egy birkát szóval árnak(ar) irunk be egy értéket mondjuk 10 000 ez volt az elsõ nap. Ilyenkor növeljük a db változónk értékét egyel hisz
    //a feladat azt akarja, hogy megtudjuk mennyit adott el.
    //Második napon ha nem ad el birkát akkor ismét 10 000 irunk be ilyenkor nem nõ a db számlálónk mert a ár nem nõ
    //Harmadik nap elad megint valamennyiért mondjuk 5 000-ért ekkor már 15 000-et fogunk megadni árnak. mivel nõtt az ár a db-hoz hozzáadunk ismét egyet.
    //Negyedik nap megint elad valamennyiért egy állatot árnak 17 500-at irunk. db változó megint nõ.
    //Program végén kiiratjuk, hogy mennyi állatot adott el az ember, ebben az esetben 3-at


    int napok;    //megadjuk a napok számát azaz hányszor fusson le a ciklusunk
    int db = 0;    //ezzel számoljuk mennyit adott el
    cout << "Adja meg a napok számát\n"; //kiiratás
    cin >> napok;   //bekérés
    int ar[100];    //tömb amibe tároljuk az árakat
    cin >> ar[0];   //itt muszáj bekérni az elsõ árat hogy adjunk egy kezdõ értéket a tömbünknek mert másképp nem mûködik a for ciklusunkba a számlálás. lehetne 1-tõl feltölteni de az hogy néz már ki :/ meg akkor a for ciklusunkba napok+1   -ig kéne menni
    if (ar[0] > 0)  // megnézzük, hogy az elsõ elem amit az elöbb bekértünk az nagyobb-e mint nulla
    {               
        db++;       //ha igen akkor hozzáadunk a db számllónkhoz 1-et 
    }
    for (int i = 1; i < napok; i++)  //itt a for ciklusunk addig tart amekkora értéket adtunk meg a napok változónak a program elején. Azért 1-rõl indul nem 0-ról mert már az elsõ helyre ami a 0. adtunk már meg a ciklus elött egy értéket
    {
        cin >> ar[i];               //bekérünk egy árat (ez már ugye a 2. árunk hiszen már elötte adtunk meg egyet)
        if (ar[i-1] < ar[i])        //megnézzük hogy az elõzõ árunk az kisebb-e mint az ujonnan bekért mert ha kisebb akkor db++ ha ugyanaz akkor semmi nem történik
        {                           //magyarázat: ha(ár[1-1] < ár[1]) akkor db+1 )
            db++;
        }
    }
    cout << db;                     //kiiratjuk hogy mennyiszer nõ az ár szóval mennyit adott el


    return 0;
}

// HA kisebb számot adsz meg mint az elõzõ szám szóval ha 1. ár 1000 és 2. szám 500 akkor nem fog rendesen számolni mert ez nem az a feladat ahol erre is figyelünk
// lehet irni rá egy ugymond "hülyebiztos" dolgot, hogyha kisebbet ir be akkor mondja neki hogy nem lehet kevesebb vagy akár olyat is lehetne hogyha kevesebb pénze lesz másik napra akkor db-- 
//el lehet szórakozni de a feladat nem kérte csak annyit amit itt irtunk
