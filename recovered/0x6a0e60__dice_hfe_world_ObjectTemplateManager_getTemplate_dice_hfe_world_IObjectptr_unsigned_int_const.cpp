// FUNCTION: BF2 0x6a0e60
extern "C" void* dice_hfe_world_ObjectTemplateManager_getTemplate(void* self, void* obj, unsigned int id) {
    if (obj != 0) {
        void* c = *(void**)((char*)obj + 0x28);
        if (c != 0) {
            if (((unsigned int(*)(void*))(*(void***)c)[0x20 / 8])(c) == id)
                return *(void**)((char*)obj + 0x28);
        }
    }
    return 0;
}