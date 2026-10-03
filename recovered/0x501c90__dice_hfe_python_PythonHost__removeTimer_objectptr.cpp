// FUNCTION: BF2 0x501c90
namespace dice { namespace hfe { namespace python {
class PythonHost {
public:
    void removeTimer_objectptr(void* objectptr);
};

void sub_407e78(void*, void*);

void PythonHost::removeTimer_objectptr(void* objectptr)
{
    if (objectptr) {
        ++static_cast<int*>(objectptr)[0];
    }
    void* base = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x8);
    void* entry = operator new(0x18);
    static_cast<void**>(entry)[2] = objectptr;
    base = static_cast<char*>(base) + 0x68;
    if (objectptr) {
        ++static_cast<int*>(objectptr)[0];
    }
    sub_407e78(entry, base);
    if (objectptr) {
        if (--static_cast<int*>(objectptr)[0] == 0) {
            void* type = static_cast<void**>(objectptr)[1];
            ((void(*)(void*))(static_cast<void**>(type)[5]))(objectptr);
        }
    }
}
// REVERSED_FUNCTION: dice::hfe::python_PythonHost::removeTimer_objectptr (0x501c90)
} } }