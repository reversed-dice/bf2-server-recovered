// FUNCTION: BF2 0x592e50
// EffectBundle::addNumEmittersPlaying 0x592e50
namespace dice { namespace hfe { namespace world {

extern "C" {
    extern unsigned int dice_hfe_world_CID_EffectBundleTemplate;
}

struct EffectBundle {
    void* vtable;            // 0x00 (8 bytes)
    char pad_08[0x48];       // 0x08-0x4F
    void* field_50;          // 0x50 (8 bytes)
    char pad_58[0x1F1];      // 0x58-0x248
    char m_249;              // 0x249 (1 byte)
    char pad_24A[2];         // 0x24A-0x24B
    int m_24c;               // 0x24C (4 bytes)
};

void addNumEmittersPlaying(EffectBundle* self) {
    if (self->m_249 != 0) return;
    
    if (self->m_24c == 0) {
        // Call vtable[0xc0](self, 0, 1)
        long vtbl = *(long*)self;
        typedef void (*InitFn)(EffectBundle*, int, int);
        InitFn init = (InitFn)(*(long*)(vtbl + 0xc0));
        init(self, 0, 1);
    }
    self->m_24c++;
    
    if (self->field_50 != 0) {
        void* obj = *(void**)((char*)self->field_50 + 0x28);
        // Call getType via vtable[0x20]
        long obj_vtbl = *(long*)obj;
        typedef int (*GetTypeFn)(void*);
        GetTypeFn getType = (GetTypeFn)(*(long*)(obj_vtbl + 0x20));
        int type = getType(obj);
        if (type == dice_hfe_world_CID_EffectBundleTemplate) {
            // Tail call to vtable[0x310]
            void* target = self->field_50;
            long t_vtbl = *(long*)target;
            typedef void (*DispatchFn)(void*);
            DispatchFn dispatch = (DispatchFn)(*(long*)(t_vtbl + 0x310));
            dispatch(target);
            return;
        }
    }
}

} } }
