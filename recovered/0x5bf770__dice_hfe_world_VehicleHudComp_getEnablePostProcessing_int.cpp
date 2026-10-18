// BF2_FLAGS: -fcrossjumping -fno-tree-pre
// FUNCTION: BF2 0x5bf770
namespace dice { namespace hfe { namespace world {

extern "C" int IID_IPlayerControlObject;

class VehicleHudComp {
public:
    char _pad[0x10];
    void* m_pTemplate;   // 0x10
    void* m_pOwner;      // 0x18
    void* getEnablePostProcessing(int index);
};

static inline void* findPCO(void* owner) {
    for (void* n = owner; n != 0; n = *(void**)((char*)n + 0x50)) {
        void* p = ((void*(*)(void*,int))(*(void***)n)[0x18/8])(n, IID_IPlayerControlObject);
        if (p) return p;
    }
    return 0;
}

void* VehicleHudComp::getEnablePostProcessing(int index) {
    if ( ((int(*)(void*))(*(void***)m_pTemplate)[0x60/8])(m_pTemplate) == index &&
         index == ((int(*)(void*))(*(void***)m_pTemplate)[0x1e8/8])(m_pTemplate) )
        return *(void**)((char*)m_pOwner + 0xa0);

    void* p = findPCO(m_pOwner);
    if (!p) return 0;
    void* o = ((void*(*)(void*,int))(*(void***)p)[0xe0/8])(p, 0);
    if (!o) return 0;
    void* q = *(void**)((char*)o + 0xb8);
    if (!q) return 0;
    void* i = ((void*(*)(void*))(*(void***)q)[0xa0/8])(q);
    if (index == *(int*)((char*)i + 0x64))
        return *(void**)((char*)o + 0xa0);

    p = findPCO(m_pOwner);
    o = ((void*(*)(void*,int))(*(void***)p)[0xe0/8])(p, 1);
    if (!o) return 0;
    q = *(void**)((char*)o + 0xb8);
    if (!q) return 0;
    i = ((void*(*)(void*))(*(void***)q)[0xa0/8])(q);
    if (index == *(int*)((char*)i + 0x64))
        return *(void**)((char*)o + 0xa0);
    return 0;
}

}}}
