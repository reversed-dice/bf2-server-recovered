// FUNCTION: BF2 0x4fe880
namespace dice { namespace hfe { namespace python {

class PythonHost {
public:
    unsigned int isInitialized() const;

private:
    void* m_vtable;        // offset 0x0
    unsigned char* m_flag; // offset 0x8
};

unsigned int PythonHost::isInitialized() const {
    return *m_flag;
}

} } }
// REVERSED_FUNCTION: dice_hfe_python_PythonHost_isInitialized_const (0x4fe880)