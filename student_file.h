#include <vector>
#include <queue>
using namespace std;
vector<int> Torneo(vector<int> habilidades, int N, int K) {
    queue<int> cola;
    for (size_t i = 2; i < habilidades.size(); ++i) {
        cola.push(habilidades[i]);
    }
    int wins = 0; int actual = habilidades[0];int retador = habilidades[1];
    vector<int> result(2);
    for (int juego = 1; juego <= K; ++juego) {
        if (wins > retador) 
        {
            wins++;
            result = {retador, wins};
            cola.push(retador);
        } 
        else 
        {
            wins = 1;
            result = {wins, retador};
            cola.push(wins);
            wins = retador;
        }
        if (wins == N) 
        {
            cola.push(wins);
            wins = cola.front();
            cola.pop();
            wins = 0;
        }
        retador = cola.front(); 
        cola.pop();
    }
    return result;
}
