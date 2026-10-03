// FUNCTION: BF2 0x786a10
typedef unsigned int (*vfn)(void*);
void fn_0x786a10(void* self, void* strParam) {
    void* g = *(void**)(0x010ade48);
    unsigned int r = ((vfn)(*(void***)g)[0x38/8])(g);
    *(unsigned*)((char*)self + 0x8) = (unsigned)r;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateMobile_setPathfindingMap_std_string_constref (0x786a10)
