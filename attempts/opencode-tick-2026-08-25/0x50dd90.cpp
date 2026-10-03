extern "C" void _ZdlPv_0(void*);
extern "C" void base_bundle_dtor(void*);
extern "C" void dice_hfe_world_AreaObjectTemplate_dtor_AreaObjectTemplate2(void* self) {
    *(void**)self = (void*)0xb3e470;
    *(void**)((char*)self + 0x10) = (void*)0xb3e700;
    *(void**)((char*)self + 0x68) = (void*)0xb3e738;
    *(void**)((char*)self + 0x1c8) = (void*)0xb3e7b8;
    void* b = *(void**)((char*)self + 0x1f8);
    void* e = *(void**)((char*)self + 0x200);
    while (b != e) b = (char*)b + 8;
    if (b != 0) _ZdlPv_0(b);
    base_bundle_dtor(self);
}
