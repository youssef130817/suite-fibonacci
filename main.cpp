#include <iostream>
#include <vector>

using namespace std;



unsigned long long fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long long dernier = 1, avantDernier = 0 ,resultat = 0;

    for (int i = 2; i <= n; i++) {
        resultat = dernier + avantDernier;
        avantDernier = dernier;
        dernier = resultat;
    }
    return resultat;
}
vector<unsigned long long> fubonacci;
unsigned long long fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    if (fubonacci[n] != 0) {
        return fubonacci[n];
    }
    fubonacci[n] = fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);

    return fubonacci[n];
}

int main() {
    int n;
    cout << "Entrez un entier positif pour calculer le n-eme terme de Fibonacci: ";
    cin >> n;

    fubonacci.resize(n + 1, 0);  // Initialisez le tableau de mémoïsation avec des zéros
    cout << "Le " << n << "-eme nombre de Fibonacci est: " << fibonacciIterative(n) << endl;
    cout << "Le " << n << "-eme nombre de Fibonacci (version recursive) est : " << fibonacciRecursive(n) <<endl;

    return 0;
}


