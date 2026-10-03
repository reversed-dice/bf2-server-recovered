// FUNCTION: BF2 0x7d74f0
extern "C" int f_7d74f0(void* a, char* s, unsigned int len) {
  if (len <= 6) return 0;
  return __builtin_memcmp(s, "ABCDEFG", 7) == 0;
}
// REVERSED_FUNCTION: a_memcmp7 (0x7d74f0)
