// FUNCTION: BF2 0x4fe850
extern "C" void* PyFloat_FromDouble(double);
namespace dice { namespace hfe { namespace python {
typedef double (*vfnd)(void*);
void* fn_0x4fe850(void*, void*) {
    void* g = *(void**)0x10aa1a8;
    void** vt = *(void***)g;
    double t = ((vfnd)vt[0x30/8])(g);
    return PyFloat_FromDouble(t);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_timer_getWallTime_objectptr_objectptr (0x4fe850)
