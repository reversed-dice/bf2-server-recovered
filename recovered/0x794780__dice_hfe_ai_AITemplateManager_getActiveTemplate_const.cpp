// FUNCTION: BF2 0x794780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_p;
    void* get() { void* p = m_p; void* r = 0; if (p != 0) r = *(void**)((char*)p + 0x8); return r; }
};
void* get_0x794780(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateManager_getActiveTemplate_const (0x794780)
