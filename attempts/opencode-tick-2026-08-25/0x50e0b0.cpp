extern "C" void _ZdlPv_0(void*);
extern "C" void base_bundle_dtor(void*);
extern "C" void dice_hfe_world_AreaObjectTemplate_dtor_AreaObjectTemplate(void* self) {
    void* vec = (char*)self + 0x1f8;
    *(void**)self = (void*)0xb3e470;
    *(void**)((char*)self + 0x10) = (void*)0xb3e700;
    *(void**)((char*)self + 0x68) = (void*)0xb3e738;
    *(void**)((char*)self + 0x1c8) = (void*)0xb3e7b8;
    void* e = *(void**)((char*)vec + 0x8);
    for (void* it = *(void**)vec; ; it = (char*)it + 8) { if (it == e) break; }
    if (*(void**)vec) _ZdlPv_0(*(void**)vec);
    base_bundle_dtor(self);
}
