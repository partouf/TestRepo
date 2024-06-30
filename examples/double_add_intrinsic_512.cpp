void double_add_intrinsic_512(double* a, double* b, double* c, int size) {
    for (int i = 0; i < size; i += 8) {
        __m512d x = _mm512_loadu_pd(&a[i]);
        __m512d y = _mm512_loadu_pd(&b[i]);
        __m512d z = _mm512_add_pd(x, y);
        _mm512_storeu_pd(&c[i], z);
    }
}
