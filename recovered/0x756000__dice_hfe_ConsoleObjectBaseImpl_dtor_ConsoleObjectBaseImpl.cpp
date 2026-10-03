// FUNCTION: BF2 0x756000
// dice/hfe/ConsoleObjectBaseImpl.cpp

namespace dice::hfe {

// D1/D2 base destructor — vptr reset to hardcoded vtable address
// Ghidra: *param_1 = 0xb980f0
// Target ASM: MOV QWORD PTR [RDI],<ADDR> ; RET  (single-insn store, no LEA)
void ConsoleObjectBaseImpl_dtor(void** self) noexcept
{
    *self = reinterpret_cast<void*>(0xb980f0ULL);
}

} // namespace dice::hfe