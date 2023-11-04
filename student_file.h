#include <vector>
#include <queue>
using namespace std;
vector<int> Torneo(vector<int> habilidades, int N, int K) {
    queue<int> cola;
    for (size_t i = 2; i < habilidades.size(); ++i) {
        cola.push(habilidades[i]);}
    int Ganados = 0; int set = habilidades[0];int retador = habilidades[1];
    vector<int> result(2);
    for (int game = 1; game <= K; ++game){
        if (set > retador){
            Ganados++;
            result = {retador, set};
            cola.push(retador);
        }else{
            Ganados = 1;
            result = {set, retador};
            cola.push(set);
            set = retador;}
        if (Ganados == N){
            cola.push(set);
            set = cola.front();
            cola.pop();
            Ganados = 0;}
        retador = cola.front(); 
        cola.pop();
    }
    return result;
}
