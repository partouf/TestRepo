void double_add_compiler_opt(double* a, double* b, double* c, int size) {
    for (int i = 0; i < size; ++i) {
        c[i] = a[i] + b[i];
    }
}
