// FUNCTION: BF2 0x4fe660
struct PyComp {
    char pad[0x10];
    void* m_obj; // +0x10
};

void dice_hfe_python_PythonComp_destroy(PyComp* self) {
    void* obj = self->m_obj;
    if (obj != 0) {
        int n = *(int*)obj;
        n--;
        *(int*)obj = n;
        if (n == 0) {
            void* obj2 = *(void* volatile*)((char*)self + 0x10);
            void* type = *(void**)((char*)obj2 + 8);
            typedef void (*vfn)(void*);
            vfn f = *(vfn*)((char*)type + 0x28);
            return f(obj2);
        }
    }
}
