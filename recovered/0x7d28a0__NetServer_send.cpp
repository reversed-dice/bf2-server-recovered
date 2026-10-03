// FUNCTION: BF2 0x7d28a0
namespace dice { namespace hfe { namespace io {
// 0x7d28a0 NetServer::send
extern "C" void* fn_7d4d30(void*, void*);   // rb_tree find
extern "C" void fn_74af10(void*);           // Mutex lock
extern "C" void fn_74af20(void*);           // Mutex unlock
extern "C" void fn_7d9380(void*, void*);    // SWConnection send
long send_0x7d28a0(void* self, int id) {
    int key = id;
    void* r = fn_7d4d30((char*)self + 0x10, &key);
    if ((char*)self + 0x18 != r) {
        void* conn = *(void**)((char*)r + 0x28);
        if (conn != 0) {
            fn_74af10((char*)self + 0x578);
            fn_7d9380(conn, *(void**)((char*)self + 0x4c8));
            fn_74af20((char*)self + 0x578);
            return 0;
        }
    }
    return 9;
}
} } }
