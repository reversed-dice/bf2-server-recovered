// FUNCTION: BF2 0x63ac90
// RotorTemplate::setRotationAxle 0x63ac90 — bound check
namespace dice { namespace hfe { namespace world {

void setRotationAxle(void* self, int axle) {
    if ((unsigned int)axle <= 2)
        *(int*)((char*)self + 0x210) = axle;
}

}}}
