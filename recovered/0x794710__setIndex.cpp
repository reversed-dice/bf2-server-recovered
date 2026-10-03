// FUNCTION: BF2 0x794710
struct S { char pad[0x8]; int* arr; };
int set(S* s, int i, int v) { return s->arr[i] = v; }
