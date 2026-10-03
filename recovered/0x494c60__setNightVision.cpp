// FUNCTION: BF2 0x494c60
namespace dice { namespace hfe {
// 0x494c60 Player::setNightVision
extern "C" void* playerManager;  // 0x0112ee38
extern "C" void* gameLogic;      // 0x010b8c08
extern "C" float DAT_00b2d910;
typedef void* (*vfn0p)(void*);
typedef char (*vfn0c)(void*);
typedef void (*vfn2v)(void*, unsigned char);
struct P444 { char pad[0x444]; int f444; char pad2[0x10]; char f458; };
void setNightVision_0x494c60(P444* self, unsigned char nv, char force) {
    if (force == 0) {
        if (*(float*)&self->f444 > DAT_00b2d910) {
            void* pm = *(void**)&playerManager;
            void* p = ((vfn0p*)*(void***)pm)[0x60/8](pm);
            if (self != p) {
                void* gl = *(void**)&gameLogic;
                char c = ((vfn0c*)*(void***)gl)[0x278/8](gl);
                if (c != 0) return;
            } else return;
        }
    }
    self->f444 = 0x3f733333;
    ((vfn2v*)*(void***)self)[0x5c8/8](self, nv);
    self->f458 = (char)nv;
}
} }
