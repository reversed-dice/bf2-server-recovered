// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ae5e0
struct _typeobject;
struct _object {
    int ob_refcnt;
    _typeobject* ob_type;
};
struct _typeobject {
    char m_pad0[0x28];
    void (*tp_dealloc)(_object*);
};

class PyRef {
public:
    ~PyRef() {
        if (m_obj) {
            if (--m_obj->ob_refcnt == 0)
                m_obj->ob_type->tp_dealloc(m_obj);
        }
    }
    _object* m_obj;
};

extern void* g_108b660;
extern void fn_430410(PyRef* ret, int const* a);
extern void* fn_4fe7c0();
extern void fn_4feb40(void* host, int ev, void* args);
extern void fn_4a7660(void* self, unsigned int a, int b);

struct ServerGameLogic {
    void runNextLevel();
    char m_pad0[0x4b0];
    int m_field4b0;
};

void ServerGameLogic::runNextLevel() {
    if ((*(int (**)(void*))(*(char**)this + 0x2b0))(this) != 2) {
        m_field4b0 = *(int*)((char*)g_108b660 + 0x9c) - 1;
        {
            int zero = 0;
            PyRef args;
            fn_430410(&args, &zero);
            fn_4feb40(fn_4fe7c0(), 0x1b, args.m_obj);
        }
        if ((*(int (**)(void*))(*(char**)this + 0x2b0))(this) != 2)
            fn_4a7660(this, 0u, 0);
    }
}
