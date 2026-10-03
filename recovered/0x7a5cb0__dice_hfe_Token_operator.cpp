// FUNCTION: BF2 0x7a5cb0
namespace dice { namespace hfe {
extern void func_0x00408238(void*, void*);  // std::string assign
void* Token_op_0x7a5cb0(void* p) {
    unsigned int u = *(unsigned int*)((char*)p + 8);
    if (u < *(unsigned int*)((char*)*(void**)p + 0x18)) {
        u = u + 1;
        *(unsigned int*)((char*)p + 8) = u;
    }
    void* slot = *(void**)p;
    char* pl = (char*)*(void**)slot + (unsigned long)u * 0x20;
    *(void**)p = *(void**)pl;
    *(int*)((char*)p + 8) = *(int*)(pl + 8);
    func_0x00408238((char*)p + 0x10, pl + 0x10);
    *(short*)((char*)p + 0x18) = (short)*(int*)(pl + 0x18);
    *(short*)((char*)p + 0x1a) = *(short*)(pl + 0x1a);
    *(int*)((char*)p + 0x1c) = *(int*)(pl + 0x1c);
    return p;
}
} }
// REVERSED_FUNCTION: dice_hfe_Token_operator (0x7a5cb0)
