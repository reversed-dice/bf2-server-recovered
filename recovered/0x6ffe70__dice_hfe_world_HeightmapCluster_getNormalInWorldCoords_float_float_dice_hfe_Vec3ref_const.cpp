// FUNCTION: BF2 0x6ffe70
namespace dice { namespace hfe { namespace world {

struct Vec3 { float x, y, z; };

void getNormalInWorldCoords_6ffe70(void* self, float x, float y, Vec3& out)
{
    bool ok = ((bool (*)(void*, float, float))(*(void***)self)[40])(self, x, y);
    if (ok)
    {
        void* p = ((void* (*)(void*, float, float))(*(void***)self)[20])(self, x, y);
        if (p != 0)
        {
            ((void (*)(void*, Vec3&, float, float))(*(void***)p)[40])(p, out, x, y);
            return;
        }
    }
    out.x = 0.0f;
    out.y = 1.0f;
    out.z = 0.0f;
}

}}}
