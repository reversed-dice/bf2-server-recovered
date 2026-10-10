// FUNCTION: BF2 0x453700
namespace dice { namespace hfe {
class Conn {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual char v33(int a, void* out);
};
extern "C" void* fn_4536f0(void* self, int idx);
bool getConnectionIpAndPort(char* self, int idx, void* out) {
    void* cl = fn_4536f0(self, idx);
    if (cl != 0) {
        Conn* conn = *(Conn**)(self + 0xb0);
        char c = conn->v33(*(int*)((char*)cl + 0xf0), out);
        if (c != 0) {
            return 1;
        }
    }
    return 0;
}
} }
