// FUNCTION: BF2 0x787d70
struct S { char pad[0x20]; int* arr; };
int set(S* s, int i, int v) { return s->arr[i] = v; }
