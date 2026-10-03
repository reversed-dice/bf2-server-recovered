// FUNCTION: BF2 0x751bd0
namespace dice { namespace hfe {
void ConsoleObjectBaseImpl_ctor_0x751bd0(void* self, void* name, void* value) {
    *(void**)self = (void*)0xb97fd0;
    *(void**)((char*)self + 0x10) = name;
    *(void**)((char*)self + 0x18) = value;
}
} }
