// FUNCTION: BF2 0x4086e0
// anonymous_namespace_get_current_thread_id at 0x4086e0
extern "C" unsigned long pthread_self(void);

unsigned long get_current_thread_id() {
    __typeof__(pthread_self()) __perm_t = pthread_self();
    int __perm_pad1 = 1; (void)__perm_pad1;
    return __perm_t;
}

