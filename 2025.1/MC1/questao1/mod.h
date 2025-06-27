int modulo(int n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

int divMod(int dividendo, int divisor) {
    int divBase = divisor, resto = 0;
    if (dividendo > 0) {
        if (dividendo < modulo(divisor)) {
            return dividendo;
        }
        while (modulo(dividendo) >= modulo(divisor)) {
            resto = modulo(dividendo) - modulo(divisor);
            if (resto == 0) {
                return resto;
            }
            divisor += divBase;
        }
    }
    else {
        do {
            resto = modulo(divisor) - modulo(dividendo);
            if (resto == 0) {
                return resto;
            }
            divisor += divBase;
        } while (resto < 0);
    }
    return resto;
}