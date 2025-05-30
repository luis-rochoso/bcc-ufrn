int sum(int size, int seq[]) {
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return seq[0];
    }
    return seq[0] + sum(size - 1, seq + 1);
}
