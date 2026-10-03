// FUNCTION: BF2 0x82c8b0
bool fn_0x82c8b0(void* self, void* profile) {
    *(long*)((char*)profile+0x8) = 0;
    *(long*)((char*)profile+0x18) = 0;
    *(int*)((char*)profile+0x20) = 0;
    *(long*)((char*)profile+0x28) = 0;
    return true;
}
// REVERSED_FUNCTION: gpiResetProfile (0x82c8b0)
