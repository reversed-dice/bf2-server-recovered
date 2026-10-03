// FUNCTION: BF2 0x794740
struct S { char pad[0x10]; int* arr; };
int set(S* s, int i, int v) { return s->arr[i] = v; }
