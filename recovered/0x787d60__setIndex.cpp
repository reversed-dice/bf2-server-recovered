// FUNCTION: BF2 0x787d60
struct S { char pad[0x18]; int* arr; };
int set(S* s, int i, int v) { return s->arr[i] = v; }
