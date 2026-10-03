// FUNCTION: BF2 0x78cfd0
// BF2_FLAGS: -fno-strict-aliasing
struct V { char p[0x78]; void** b; void** e; };
void* f(V* v, int* st) {
    if (v->e - v->b) { *st = 1; return *v->b; }
    *st = -1;
}
