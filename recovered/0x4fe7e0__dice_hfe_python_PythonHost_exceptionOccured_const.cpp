// FUNCTION: BF2 0x4fe7e0
// 0x4fe7e0 PythonHost::exceptionOccured
extern "C" void* PythonHost_getCurrentException(void);

int exceptionOccured()
{
    void* exc = PythonHost_getCurrentException();
    return exc != 0 ? 1 : 0;
}
