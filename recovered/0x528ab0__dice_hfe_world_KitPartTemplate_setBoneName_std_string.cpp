// FUNCTION: BF2 0x528ab0
extern "C" void* copy_ctor_6b6110(void*, void*);
extern "C" unsigned short append_6b6190(void*, void*);
void fn_0x528ab0(void* self, void* boneName) {
    void* tmp = copy_ctor_6b6110(self, boneName);
    unsigned short r = append_6b6190(tmp, boneName);
    *(unsigned short*)((char*)self + 0x1f2) = r;
}
// REVERSED_FUNCTION: dice_hfe_world_KitPartTemplate_setBoneName_std_string (0x528ab0)
