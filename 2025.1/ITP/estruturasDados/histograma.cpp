struct hist {
    int seq [9999];
    int tam;
};
struct plat {
    int iP, iU, val;
};
plat func (hist histograma) {
    int iP, iU, val;
    for (int i = 0; i < histograma.tam - 1; i++) {
        if (histograma.seq[i] == histograma.seq[i+1]) {
            iP = i;
            val = histograma.seq[i];
            for (int j = i + 1; j < histograma.tam - 1; j++) {
                if (histograma.seq[j] != histograma.seq[j+1]) {
                    iU = j;
                    plat final;
                    final.iP = iP;
                    final.iU = iU;
                    final.val = val;
                    return final;
                }
            }
        }
    }
}