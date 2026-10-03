// FUNCTION: BF2 0x4fe810
namespace dice { namespace hfe { namespace python {
extern void* fn_408528(long a);
extern void* fn_4084d8(double a);
extern void fn_407528(void* a, int b, void* c);
void* to_py_0x4fe810(float* v) {
    void* lst = fn_408528(3);
    for (int i = 0; i != 3; i++) {
        void* py = fn_4084d8((double)v[i]);
        fn_407528(lst, i, py);
    }
    return lst;
}
} } }
