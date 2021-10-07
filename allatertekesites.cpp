#include <iostream>

using namespace std;

int main()
{

    //Egy �llatkeresked� N napon kereszt�l forgalmaz �llatokat. Minden napra ismerj�k, hogy addig
    //mekkora bev�tele volt.
    //K�sz�ts programot, amely megadja, hogy a keresked� h�ny napon adott el �llatot!
    //
    //Sz�val aki nem �rti els�re a feladatot. Azt akarja t�l�nk hogy k�rj�k be a napok sz�m�t amit meg akarunk n�zni, hogy adott-e el szerencs�tlen �llatot(napok). N�zz�nk 4 napot.
    //Tegy�k fel, hogy els� nap elad egy birk�t sz�val �rnak(ar) irunk be egy �rt�ket mondjuk 10 000 ez volt az els� nap. Ilyenkor n�velj�k a db v�ltoz�nk �rt�k�t egyel hisz
    //a feladat azt akarja, hogy megtudjuk mennyit adott el.
    //M�sodik napon ha nem ad el birk�t akkor ism�t 10 000 irunk be ilyenkor nem n� a db sz�ml�l�nk mert a �r nem n�
    //Harmadik nap elad megint valamennyi�rt mondjuk 5 000-�rt ekkor m�r 15 000-et fogunk megadni �rnak. mivel n�tt az �r a db-hoz hozz�adunk ism�t egyet.
    //Negyedik nap megint elad valamennyi�rt egy �llatot �rnak 17 500-at irunk. db v�ltoz� megint n�.
    //Program v�g�n kiiratjuk, hogy mennyi �llatot adott el az ember, ebben az esetben 3-at


    int napok;    //megadjuk a napok sz�m�t azaz h�nyszor fusson le a ciklusunk
    int db = 0;    //ezzel sz�moljuk mennyit adott el
    cout << "Adja meg a napok sz�m�t\n"; //kiirat�s
    cin >> napok;   //bek�r�s
    int ar[100];    //t�mb amibe t�roljuk az �rakat
    cin >> ar[0];   //itt musz�j bek�rni az els� �rat hogy adjunk egy kezd� �rt�ket a t�mb�nknek mert m�sk�pp nem m�k�dik a for ciklusunkba a sz�ml�l�s. lehetne 1-t�l felt�lteni de az hogy n�z m�r ki :/ meg akkor a for ciklusunkba napok+1   -ig k�ne menni
    if (ar[0] > 0)  // megn�zz�k, hogy az els� elem amit az el�bb bek�rt�nk az nagyobb-e mint nulla
    {               
        db++;       //ha igen akkor hozz�adunk a db sz�mll�nkhoz 1-et 
    }
    for (int i = 1; i < napok; i++)  //itt a for ciklusunk addig tart amekkora �rt�ket adtunk meg a napok v�ltoz�nak a program elej�n. Az�rt 1-r�l indul nem 0-r�l mert m�r az els� helyre ami a 0. adtunk m�r meg a ciklus el�tt egy �rt�ket
    {
        cin >> ar[i];               //bek�r�nk egy �rat (ez m�r ugye a 2. �runk hiszen m�r el�tte adtunk meg egyet)
        if (ar[i-1] < ar[i])        //megn�zz�k hogy az el�z� �runk az kisebb-e mint az ujonnan bek�rt mert ha kisebb akkor db++ ha ugyanaz akkor semmi nem t�rt�nik
        {                           //magyar�zat: ha(�r[1-1] < �r[1]) akkor db+1 )
            db++;
        }
    }
    cout << db;                     //kiiratjuk hogy mennyiszer n� az �r sz�val mennyit adott el


    return 0;
}

// HA kisebb sz�mot adsz meg mint az el�z� sz�m sz�val ha 1. �r 1000 �s 2. sz�m 500 akkor nem fog rendesen sz�molni mert ez nem az a feladat ahol erre is figyel�nk
// lehet irni r� egy ugymond "h�lyebiztos" dolgot, hogyha kisebbet ir be akkor mondja neki hogy nem lehet kevesebb vagy ak�r olyat is lehetne hogyha kevesebb p�nze lesz m�sik napra akkor db-- 
//el lehet sz�rakozni de a feladat nem k�rte csak annyit amit itt irtunk
