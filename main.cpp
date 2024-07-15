#include <iostream>
using namespace std;

int main() {
    int numOfWins1 = 0;
    int numOfWins2 = 0;

    srand(time(0));

    for (int i = 0; i < 10000; i++) {
        int vrataSoNagrada = rand() % 100;
        int izbranaVrata = rand() % 100;

        int vrati[98];
        int index = 0;

        for (int j = 0; j < 100; j++) {
            if (j != vrataSoNagrada && j != izbranaVrata) {
                vrati[index] = j;
                index++;
            }
        }

        int otvorenaVrata = vrati[rand() % 98];

        izbranaVrata = (izbranaVrata + 1) % 100;

        if (izbranaVrata == vrataSoNagrada) {
            numOfWins1++;
            cout<<"Poraz"<<endl;
        }
        else{
            numOfWins2++;
            cout<<"Pobeda"<<endl;
        }

        cout << "Vrtenja " << i + 1 << ":" <<endl;
        cout << "Vrata so nagradata: " << vrataSoNagrada <<endl;
        cout << "Izbrana vrata: " << izbranaVrata << endl;
        cout << "Krajna otvorena vrata(posle smenuvanjeto): " << otvorenaVrata <<endl;
        cout << endl;
    }

    cout << "Broj na pobedi posle 10000 vrtenja ako kutijata ne se zameni so kutijata sto e ostanata: " << numOfWins1<<endl;
    float procent1 = (double)numOfWins1/10000*100;
    cout<<"Procentualno: "<<procent1<<" % (sekogas okolu 1%)"<<endl;

    cout << "Broj na pobedi posle 10000 vrtenja ako kutijata se zameni so kutijata sto e ostanata: " << numOfWins2<<endl;
    float procent2 = (double)numOfWins2/10000*100;
    cout<<"Procentualno: "<<procent2<<" % (sekogas okolu 99%)"<<endl;
    return 0;
}