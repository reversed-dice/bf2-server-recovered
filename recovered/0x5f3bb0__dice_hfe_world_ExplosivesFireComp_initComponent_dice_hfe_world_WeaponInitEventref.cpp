// FUNCTION: BF2 0x5f3bb0
extern "C" void first_call(void*);
extern "C" int compareIgnore(const char*, const char*);
extern "C" void tail_5f3340(void*, unsigned int);
extern "C" void dice_hfe_world_ExplosivesFireComp_initComponent(void* self) {
    first_call(self);
    void* d1 = *(void**)((char*)self + 0x1d8);
    if (*(void**)((char*)*(void**)((char*)d1 + 0xa8) - 0x18) != 0) {
        void* w = *(void**)((char*)self + 0x18);
        void* node = ((void*(*)(void*))(*(void***)w)[0x1e0 / 8])(w);
        if (node != 0) {
            do {
                void* d2 = *(void**)((char*)self + 0x1d8);
                void* obj = *(void**)((char*)node + 0x28);
                const char* n2 = *(char**)((char*)d2 + 0xa8);
                if (compareIgnore(*(char**)(((void*(*)(void*))(*(void***)obj)[0x58 / 8])(obj)), n2) == 0) {
                    *(void**)((char*)self + 0x1c8) = node;
                }
                node = *(void**)((char*)node + 0x58);
            } while (node != 0);
        }
    }
    tail_5f3340(self, 0);
}