// FUNCTION: BF2 0x78e600
// BF2_FLAGS: -fno-strict-aliasing
struct V { char p[0x70]; void** b; void** e; };
void* f(V* v, int* st) {
    if (v->e - v->b) { *st = 1; return *v->b; }
    *st = -1;
}
