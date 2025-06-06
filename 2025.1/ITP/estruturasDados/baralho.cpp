enum naipe {
    copas, espadas, paus, ouros
};
enum valor {
    ás, dois, três, quatro, cinco, seis, sete, oito, nove, dez, valete, rainha, rei, coringa
};
struct carta {
    valor V;
    naipe N;
};
struct deck {
    int quant;
    carta baralho [54];
};

int main() {
    carta c = {};
    c.V = rainha;
    c.N = ouros;

    deck b = {
        3,
        {{rainha, ouros}, {ás, paus}, {cinco, copas}}
    };
    return 0;
}
