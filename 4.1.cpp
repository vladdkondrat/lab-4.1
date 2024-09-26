#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, N;
    double P;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

   
    P = 1; // Починаємо з 1, оскільки це добуток
    k = N; // Ініціалізуємо k, щоб почати з N
    while (k <= 25)
    {
        P *= sqrt(1 + (N / k));
        k++;
    }
    cout << P << endl;

    P = 1; // Скидаємо P для нового обчислення
    k = N; // Знову ініціалізуємо k для циклу do-while
    do {
        P *= sqrt(1 + (N / k));
        k++;
    } while (k <= 25);
    cout << P << endl;


    P = 1;
    for (k = N; k <= 25; k++)
    {
        P *= sqrt(1 + (double)N / k);
    }
    cout << P << endl;

    return 0;
}
