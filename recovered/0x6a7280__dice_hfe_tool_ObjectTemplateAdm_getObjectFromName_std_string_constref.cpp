// FUNCTION: BF2 0x6a7280
// 0x6a7280 - ObjectTemplateAdm_getObjectFromName (11 ins, 0 calls)
// Check string length, conditional vtable call
namespace dice { namespace tool {
extern long objectTemplateAdm_0112ee48;
long dice_hfe_tool_ObjectTemplateAdm_getObjectFromName_std_string_constref(long self, long str) {
    long str_ptr = *(long*)str;
    long len = *(long*)(str_ptr - 0x18);
    if (len == 0) {
        long obj = objectTemplateAdm_0112ee48;
        typedef long (*Fn)(long);
        Fn f = (Fn)(*(long*)(*(long*)obj + 0x120));
        return f(obj);
    }
    long obj = objectTemplateAdm_0112ee48;
    typedef long (*Fn)(long, long);
    Fn f = (Fn)(*(long*)(*(long*)obj + 0x48));
    return f(obj, str);
}
} }

// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_getObjectFromName_std_string_constref (0x6a7280)
