// FUNCTION: BF2 0x4a4c20
// BF2_FLAGS: -fno-strict-aliasing
typedef bool (*BoolFn)(void*);
typedef void* (*PtrFn)(void*);
typedef float (*FloatFn)(void*);

extern "C" float floorf(float);
extern "C" void* dice_hfe_world_playerManager;
extern "C" void* g_0108d650;
extern "C" char fn_4cad90(void*, void*);
extern "C" float fn_4ca470(void*, void*);
extern "C" float fn_4ca2a0(void*, void*);
extern "C" void* getPlayer(void*);

struct Vec3 {
    Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    float x, y, z;
};

typedef void (*GiveDamageFn)(void*, void*, float, void*, void*, void*, int, void*, void*,
                             Vec3, Vec3, int, bool, bool, bool);

extern "C" void fn_0x4a4c20(void* self, float dt)
{
    void* mgr = dice_hfe_world_playerManager;
    void* list = ((PtrFn)(*(void***)mgr)[0x78 / 8])(mgr);
    char* end = (char*)list;
    for (char* node = *(char**)list; node != end; node = *(char**)node) {
        void* pl = getPlayer(*(void**)(node + 0x10));
        if (!((BoolFn)(*(void***)pl)[0xd8 / 8])(pl) || fn_4cad90(g_0108d650, pl) != 0) {
            *(float*)((char*)pl + 0x2e0) = 0.0f;
            continue;
        }
        float t = ((FloatFn)(*(void***)pl)[0x1c0 / 8])(pl) + dt;
        void* obj = ((PtrFn)(*(void***)pl)[0x90 / 8])(pl);
        float allowed = fn_4ca470(g_0108d650, obj);
        if (t > allowed) {
            obj = ((PtrFn)(*(void***)pl)[0x90 / 8])(pl);
            float limit = fn_4ca470(g_0108d650, obj);
            float f = floorf(t / limit);
            GiveDamageFn gd = (GiveDamageFn)(*(void***)self)[0x1c8 / 8];
            gd(self, ((PtrFn)(*(void***)pl)[0x148 / 8])(pl),
               fn_4ca2a0(g_0108d650, ((PtrFn)(*(void***)pl)[0x90 / 8])(pl)) * dt * f * f,
               0, 0, 0, -1, 0, 0, Vec3(), Vec3(0.0f, 1.0f, 0.0f), -1, false, true, false);
            *(float*)((char*)pl + 0x2e0) = t;
        } else {
            *(float*)((char*)pl + 0x2e0) = t;
        }
    }
}
