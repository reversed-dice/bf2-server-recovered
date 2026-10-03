// FUNCTION: BF2 0x4fec30
#include <string>
namespace dice { namespace hfe { namespace python {
extern int fn_4f8da0(void*, int, std::string*);
extern void* pyHostData();
extern void* ostream_str(void*, const std::string&);
extern void* ostream_char(void*, char);

void* cb_4fec30(void* self, void* arg) {
    std::string s;
    void* ret = 0;
    if (fn_4f8da0(arg, 0, &s) == 0) {
        char* h = (char*)pyHostData();
        if (*(void**)(h + 0x90) != 0) {
            void* os = ostream_str(*(void**)(h + 0x90), s);
            ostream_char(os, 10);
        }
        (*(int*)0x00f6c850)++;
        ret = (void*)0xf6c850;
    }
    return ret;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_log_write_objectptr_objectptr (0x4fec30)
