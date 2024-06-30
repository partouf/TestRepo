void double_add_baseline(double* a, double* b, double* c, int size) {
    for (int i = 0; i < size; ++i) {
        asm volatile (
            "movsd (%1,%0,8), %%xmm0\n\t"
            "movsd (%2,%0,8), %%xmm1\n\t"
            "addsd %%xmm1, %%xmm0\n\t"
            "movsd %%xmm0, (%3,%0,8)"
            : 
            : "r"((long)i), "r"(a), "r"(b), "r"(c)
            : "%xmm0", "%xmm1"
        );
    }
}
