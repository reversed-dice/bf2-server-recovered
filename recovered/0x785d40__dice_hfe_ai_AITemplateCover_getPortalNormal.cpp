// FUNCTION: BF2 0x785d40
extern "C" char* f_785d40(void* self, unsigned int i) { char* b = *(char**)((char*)self + 0x20); return *(char**)(b + 0x18) + (long)i * 12; }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateCover_getPortalNormal (0x785d40)
