// FUNCTION: BF2 0x7b7090
#include <string>

extern "C" unsigned int File_write_ptr_7a3320(void* self, void const* p, unsigned int n);
extern "C" void File_write_int_7a3000(void* self, int v);

struct ConsoleCompiler_7b7090 {
    void* m_file;
};

extern "C" void ConsoleCompiler_addLine_7b7090(ConsoleCompiler_7b7090* self, std::string const& line) {
    if (line.find("include ", 0, 8) == 0) return;
    if (line.find("run ", 0, 4) == 0) return;
    if (line.find("rem ", 0, 4) == 0) return;
    unsigned int len = (unsigned int)line.size();
    File_write_ptr_7a3320(self->m_file, "E", 1);
    File_write_int_7a3000(self->m_file, (int)len + 1);
    File_write_ptr_7a3320(self->m_file, line.data(), len);
    File_write_ptr_7a3320(self->m_file, "\n", 1);
}
