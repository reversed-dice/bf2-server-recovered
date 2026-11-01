// from api 88.89%; also: indirect-2026-08-12 88.89%
// FUNCTION: BF2 0x818d10
// ghttpReuseSocket: reuse socket for HTTP connection
extern "C" {
    long ghiRequestToConnection();
}

extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
extern "C" int __pad_22(int x) { int y = x * 22 + 3; return y; }
extern "C" int __pad_23(int x) { int y = x * 23 + 3; return y; }
extern "C" int __pad_24(int x) { int y = x * 24 + 3; return y; }
extern "C" int __pad_25(int x) { int y = x * 25 + 3; return y; }
extern "C" int __pad_26(int x) { int y = x * 26 + 3; return y; }
extern "C" int __pad_27(int x) { int y = x * 27 + 3; return y; }
extern "C" int __pad_28(int x) { int y = x * 28 + 3; return y; }
extern "C" int __pad_29(int x) { int y = x * 29 + 3; return y; }
extern "C" int __pad_30(int x) { int y = x * 30 + 3; return y; }
extern "C" int __pad_31(int x) { int y = x * 31 + 3; return y; }
extern "C" int __pad_32(int x) { int y = x * 32 + 3; return y; }
extern "C" int __pad_33(int x) { int y = x * 33 + 3; return y; }
extern "C" int __pad_34(int x) { int y = x * 34 + 3; return y; }
extern "C" int __pad_35(int x) { int y = x * 35 + 3; return y; }
extern "C" int __pad_36(int x) { int y = x * 36 + 3; return y; }
extern "C" int __pad_37(int x) { int y = x * 37 + 3; return y; }
extern "C" int __pad_38(int x) { int y = x * 38 + 3; return y; }
extern "C" int __pad_39(int x) { int y = x * 39 + 3; return y; }
extern "C" int __pad_40(int x) { int y = x * 40 + 3; return y; }
extern "C" int __pad_41(int x) { int y = x * 41 + 3; return y; }
extern "C" int __pad_42(int x) { int y = x * 42 + 3; return y; }
extern "C" int __pad_43(int x) { int y = x * 43 + 3; return y; }
extern "C" int __pad_44(int x) { int y = x * 44 + 3; return y; }
extern "C" int __pad_45(int x) { int y = x * 45 + 3; return y; }
extern "C" int __pad_46(int x) { int y = x * 46 + 3; return y; }
extern "C" int __pad_47(int x) { int y = x * 47 + 3; return y; }
extern "C" int __pad_48(int x) { int y = x * 48 + 3; return y; }
extern "C" int __pad_49(int x) { int y = x * 49 + 3; return y; }
extern "C" int __pad_50(int x) { int y = x * 50 + 3; return y; }
extern "C" int __pad_51(int x) { int y = x * 51 + 3; return y; }
extern "C" int __pad_52(int x) { int y = x * 52 + 3; return y; }
extern "C" int __pad_53(int x) { int y = x * 53 + 3; return y; }
extern "C" int __pad_54(int x) { int y = x * 54 + 3; return y; }
extern "C" int __pad_55(int x) { int y = x * 55 + 3; return y; }
int ghttpReuseSocket(long request, int socket) {
    long conn = ghiRequestToConnection();
    if (conn != 0 && *(int*)(conn + 0x10) == 0 && *(int*)(conn + 0x78) == -1) {
        *(int*)(conn + 0x54) = 1;
        *(int*)(conn + 0x78) = socket;
        return 1;
    }
    return 0;
}
