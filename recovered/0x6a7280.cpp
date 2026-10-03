#include <string>
extern "C" void* g_mgr;
typedef void* (*vfn1)(void*);

extern "C" void* getObjectFromName_6a7280(void* self, std::string* name)
{
    if (*(long*)((char*)name->c_str() - 0x18) == 0) {
        return ((vfn1)(*(void***)g_mgr)[0x120/8])(g_mgr);
    }
    return ((vfn1)(*(void***)g_mgr)[0x48/8])(g_mgr);
}
