// FUNCTION: BF2 0x751bd0
namespace dice { namespace hfe {

struct ConsoleObjectBaseImpl {
    void* vptr;            // 0x00
    char pad[8];           // 0x08
    const char* m_name;    // 0x10
    const char* m_value;   // 0x18
};

void ConsoleObjectBaseImpl_ConsoleObjectBaseImpl(
    ConsoleObjectBaseImpl* self, const char* name, const char* value)
{
    self->vptr = reinterpret_cast<void*>(0xb97fd0);
    self->m_name = name;
    self->m_value = value;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice::hfe::ConsoleObjectBaseImpl::ConsoleObjectBaseImpl (0x00751bd0)
