// FUNCTION: BF2 0x642f20
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

// No virtual - we set vtable manually
class SimpleTokenizer {
public:
    void* _vtable;
    void* _field8;
    void* _field10;
    void* _field18;
    void* _field20;
    int _field28;
    
    SimpleTokenizer(const void* a, const void* b);
};

extern "C" void SimpleTokenizer_base_init(void* self, const void* a, const void* b);
extern void* const SimpleTokenizer_vtable;

SimpleTokenizer::SimpleTokenizer(const void* a, const void* b) {
    _vtable = (void*)&SimpleTokenizer_vtable;
    char* base = (char*)this + 8;
    *(void**)(base) = 0;       // offset 8
    *(void**)(base + 8) = 0;   // offset 16
    *(void**)(base + 16) = 0;  // offset 24
    *(void**)(base + 24) = 0;  // offset 32
    _field28 = 0;              // offset 40
    SimpleTokenizer_base_init(this, a, b);
}

} }
