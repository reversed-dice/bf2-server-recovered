// FUNCTION: BF2 0x533760
namespace dice { namespace hfe {
class Obstacle {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void Obstacle::destroy() {
    vtable1 = (void*)0xb48c10;
    vtable2 = (void*)0xb48f20;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Obstacle_dtor_Obstacle (0x533760)
