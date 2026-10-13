// FUNCTION: BF2 0x791cf0
namespace dice { namespace hfe { namespace ai {
typedef void* (*GetObject)(void*, int);
typedef void* (*Query)(void*, int, int);
typedef void* (*GetOrigin)(void*);
extern void* fn_0x005fb510(void*);

void* getProjectileOrigin(void* self) {
    void* holder = *(void**)((char*)self + 0x38);
    void* obj = *(void**)((char*)holder + 0x28);
    void** vtable = *(void***)obj;
    GetObject getTemplate = (GetObject)vtable[0xa0 / 8];
    void* templ = getTemplate(obj, *(int*)0xc7d02c);
    if (templ) {
        vtable = *(void***)obj;
        GetObject getFireTemplate = (GetObject)vtable[0xb8 / 8];
        void* fireTemplate = getFireTemplate(obj, *(int*)0xc75e34);
        vtable = *(void***)fireTemplate;
        GetObject getMulti = (GetObject)vtable[0x50 / 8];
        void* multi = getMulti(fireTemplate, *(int*)0xc7d008);
        if (multi) {
            void* sub = *(void**)((char*)self + 0x38);
            Query query = (Query)(*(void***)sub)[0xb8 / 8];
            int iid = *(int*)0xc75e3c;
            void* result = query(sub, iid, iid);
            return fn_0x005fb510(result ? (void*)((char*)result - 0x20) : (void*)0);
        }
    }
    void* fallback = *(void**)((char*)self + 0x10);
    return ((GetOrigin)(*(void***)fallback)[0xd8 / 8])(fallback);
}
}}}
