// FUNCTION: BF2 0x40a2f0
namespace dice {
namespace hfe {
namespace memory {

struct TraceIdentifierStack {
    int m_index;   // 0x00
};

void dice_hfe_memory_TraceIdentifierStack_TraceIdentifierStack(TraceIdentifierStack* self)
{
    self->m_index = -1;
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_memory_TraceIdentifierStack_TraceIdentifierStack::dice_hfe_memory_TraceIdentifierStack_TraceIdentifierStack (0x40a2f0)