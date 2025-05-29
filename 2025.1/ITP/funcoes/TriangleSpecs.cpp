int triangulo(double l1, double l2, double l3) {
        if (l1 > (l2 + l3) || l2 > (l1 + l3) || l3 > (l1 + l2)) {
        return 3;
    }
    if (l1 == l2 && l2 == l3) {
        return 0;
    }
    else if (l1 != l2 && l1 != l3 && l2 != l3) {
        return 2;
    }
    else {
        return 1;
    }
}
