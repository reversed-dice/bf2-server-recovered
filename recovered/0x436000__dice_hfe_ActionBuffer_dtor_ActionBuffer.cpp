// FUNCTION: BF2 0x436000
namespace dice { namespace hfe {
struct ActionBuffer {
    ~ActionBuffer();
};
void action_buffer_base_dtor(void* self, int flags);
void action_buffer_extra_dtor(void* self);
ActionBuffer::~ActionBuffer() {
    action_buffer_base_dtor(this, 0);
    action_buffer_extra_dtor(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ActionBuffer_dtor_ActionBuffer (0x436000)
