// FUNCTION: BF2 0x468780

extern "C" int getMaxPlayers_0x468780(void* self) {
    if (*(char*)((char*)self + 0x145) != '\0') {
        int val = *(int*)((char*)self + 0x7c);
        if (val > 0x10) return val;
        return 0x10;
    }
    return *(int*)((char*)self + 0x7c);
}
