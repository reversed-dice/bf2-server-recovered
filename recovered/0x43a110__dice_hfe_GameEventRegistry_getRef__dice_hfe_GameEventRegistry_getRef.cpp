// FUNCTION: BF2 0x43a110
int dice_hfe_GameEventRegistry_getRef(void* self) {
    return *(int*)((unsigned long)self + 8);
}