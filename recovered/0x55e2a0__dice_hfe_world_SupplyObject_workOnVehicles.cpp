// BF2_FLAGS: -fcrossjumping -fno-tree-pre
// FUNCTION: BF2 0x55e2a0
typedef void* (*QIFn)(void*, int);
typedef int (*IdFn)(void*);
typedef int (*TypeFn)(void*);
typedef void* (*MapFn)(void*);
typedef void* (*RbInc)(void*);

extern "C" void* dice_hfe_gameLogic;
extern "C" bool testVehicleType(void* tmpl, void* obj);
extern "C" void healAndReload(void* self, void* obj);
extern "C" void* rbTreeIncrement(void* node);

extern "C" int dice_hfe_world_IID_IPlayerControlObject;
extern "C" int dice_hfe_world_CID_SoldierTemplate;

extern "C" void* fn_0x55e2a0(void* self) {
    void* map = ((MapFn)(*(void***)dice_hfe_gameLogic)[0x330/8])(dice_hfe_gameLogic);
    char* node = *(char**)((char*)map + 0x18);
    char* end = (char*)map + 8;
    while (node != end) {
        void* elem = *(void**)(node + 0x28);
        if (*(void**)((char*)elem + 0x50) == 0) {
            void* p = elem;
            void* r = 0;
            while (p != 0) {
                r = ((QIFn)(*(void***)p)[0x18/8])(p, *(int*)&dice_hfe_world_IID_IPlayerControlObject);
                if (r != 0) break;
                p = *(void**)((char*)p + 0x50);
            }
            int id = ((IdFn)(*(void***)r)[0x130/8])(r);
            if (id == *(int*)((char*)self + 0x240) || *(int*)((char*)self + 0x240) == 0) {
                void* child = *(void**)((char*)elem + 0x28);
                int type = ((TypeFn)(*(void***)child)[0x20/8])(child);
                if (type != *(int*)&dice_hfe_world_CID_SoldierTemplate) {
                    if (testVehicleType(*(void**)((char*)self + 0x238), elem)) {
                        healAndReload(self, elem);
                    }
                }
            }
        }
        node = (char*)rbTreeIncrement(node);
    }
}
