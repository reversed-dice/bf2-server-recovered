// FUNCTION: BF2 0x7433f0
namespace dice { namespace hfe {

extern "C" void* operator_shl_ostream_charptr(void*, const char*);
extern "C" void* std_endl_ostream(void*);
void* fn_0x743410(void* self) {
    void* os = (char*)self + 0x18;
    void* r = operator_shl_ostream_charptr(os, (const char*)0xb98bd2);
    return std_endl_ostream(r);
}

} }
// REVERSED_FUNCTION: dice_hfe_XmlReportFormatter_beginThreads (0x743410)
