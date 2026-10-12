// BF2_FLAGS: -fno-guess-branch-probability
// FUNCTION: BF2 0x4d0fc0
extern "C" void opdel(void*);
extern void* g_tbl;
extern float s_motion;
extern float s_add;
extern float s_bill;
extern char s_show;
extern void* s_owner;

typedef void* (*F70)(unsigned int);
typedef void (*FA0)(void*, unsigned int);

extern "C" void dtor_4d0fc0(void* self)
{
    *(void**)self = (void*)0xb38c90;
    if (self == s_owner)
    {
        void* o = ((F70*)g_tbl)[14](0);
        float z = 0.0f;
        s_motion = z;
        s_add = z;
        s_bill = z;
        FA0 fa0 = (FA0)(*(void***)o)[20];
        fa0(o, 0);
        s_show = 0;
        s_owner = 0;
    }
    *(void**)self = (void*)0xb38cd0;
    opdel(self);
}
