// FUNCTION: BF2 0x787f10
typedef unsigned int (*vfn)(void*);
void fn_0x787f10(void* self, void* strParam) {
    void* g = *(void**)(0x010ade00);
    unsigned int r = ((vfn)(*(void***)g)[0xa8/8])(g);
    *(unsigned*)((char*)self + 0x20) = (unsigned)r;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateUnit_setEquipmentTypeName_std_string_constref (0x787f10)
