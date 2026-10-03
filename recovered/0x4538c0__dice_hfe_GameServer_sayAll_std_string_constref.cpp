// FUNCTION: BF2 0x4538c0
typedef bool (*F)(void*, void*, int, int, int, int);
bool f(void* c, void* s) {
    F fn = *(F*)(*(char**)c + 0x258);
    return fn(c, s, 12, 1, 0, *(int*)((char*)c + 0x70));
}
