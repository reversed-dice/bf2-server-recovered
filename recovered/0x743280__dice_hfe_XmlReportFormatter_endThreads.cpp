// FUNCTION: BF2 0x743280
typedef void (*vf_t)(void*);
extern "C" void fn_0x743280(void* self) {
    vf_t f = (*(vf_t**)self)[0x30/8];
    f(self);
}
// REVERSED_FUNCTION: dice_hfe_XmlReportFormatter_endThreads (0x743280)
