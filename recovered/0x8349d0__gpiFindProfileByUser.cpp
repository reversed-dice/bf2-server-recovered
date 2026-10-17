// FUNCTION: BF2 0x8349d0
struct S { void* x; void* y; void* z; int n; };
extern "C" {
int gpiProfileMap(void*, void*, void*);
int gpiCheckProfileForUser(void);
}

// compile-state padding: 12 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
int gpiFindProfileByUser(void* a, void* b, void* c, void* d) {
    S s;
    s.x = b;
    s.y = c;
    s.z = d;
    s.n = 0;
    gpiProfileMap(a, (void*)gpiCheckProfileForUser, &s);
    if (s.n == 0)
        *(void**)d = 0;
    return 0;
}
