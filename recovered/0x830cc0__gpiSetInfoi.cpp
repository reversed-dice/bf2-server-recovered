// FUNCTION: BF2 0x830cc0
// gpiSetInfoi
// BF2_FLAGS: -fcrossjumping
typedef int GPResult;
typedef int GPEnum;
typedef void* GPConnection;

#define GP_NO_ERROR (GPResult)0
#define GP_PARAMETER_ERROR 2

#define GP_MALE          0x0500
#define GP_FEMALE        0x0501
#define GP_PAT           0x0502

#define GP_ICQUIN        0x0706
#define GP_ZIPCODE       0x0708
#define GP_SEX           0x070b
#define GP_CPUBRANDID    0x070c
#define GP_CPUSPEED      0x070d
#define GP_MEMORY        0x070e
#define GP_VIDEOCARD1RAM 0x0710
#define GP_VIDEOCARD2RAM 0x0712
#define GP_CONNECTIONID  0x0713
#define GP_CONNECTIONSPEED 0x0714
#define GP_HASNETWORK    0x0715
#define GP_PIC           0x0718
#define GP_OCCUPATIONID  0x0719
#define GP_INDUSTRYID    0x071a
#define GP_INCOMEID      0x071b
#define GP_MARRIEDID     0x071c
#define GP_CHILDCOUNT    0x071d
#define GP_INTERESTS1    0x071e

extern "C" int sprintf(char* buffer, const char* format, ...);
extern "C" GPResult gpiSendLocalInfo(GPConnection* connection, const char* info, const char* value);
extern "C" GPResult gpiSendUserInfo(GPConnection* connection, const char* info, const char* value);
extern "C" void gpiSetErrorString(GPConnection* connection, const char* string);

#define CHECK_RESULT(x) { GPResult __result__ = (x); if (__result__ != GP_NO_ERROR) { return __result__; } }
#define Error(connection, code, msg) { gpiSetErrorString(connection, msg); return (code); }

GPResult gpiSetInfoi(GPConnection* connection, GPEnum info, int value)
{
	char intValue[16];

	switch (info)
	{
	case GP_ICQUIN:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\icquin\\", intValue));
		break;

	case GP_ZIPCODE:
		if (value < 0)
			Error(connection, GP_PARAMETER_ERROR, "Invalid zipcode.");

		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\zipcode\\", intValue));
		break;

	case GP_SEX:
		switch (value)
		{
		case GP_MALE:
			CHECK_RESULT(gpiSendLocalInfo(connection, "\\sex\\", "0"));
			break;

		case GP_FEMALE:
			CHECK_RESULT(gpiSendLocalInfo(connection, "\\sex\\", "1"));
			break;

		case GP_PAT:
			CHECK_RESULT(gpiSendLocalInfo(connection, "\\sex\\", "2"));
			break;

		default:
			Error(connection, GP_PARAMETER_ERROR, "Invalid sex.");
		}
		break;

	case GP_HASNETWORK:
		if (value)
			value = 1;

		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\hasnetwork\\", intValue));
		break;

	case GP_OCCUPATIONID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\occ\\", intValue));
		break;

	case GP_INDUSTRYID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\ind\\", intValue));
		break;

	case GP_VIDEOCARD1RAM:
		value /= 4;

		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\videocard1ram\\", intValue));
		break;

	case GP_VIDEOCARD2RAM:
		value /= 4;

		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\videocard2ram\\", intValue));
		break;

	case GP_CONNECTIONID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\connectionid\\", intValue));
		break;

	case GP_CONNECTIONSPEED:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\connectionspeed\\", intValue));
		break;

	case GP_CPUSPEED:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\cpuspeed\\", intValue));
		break;

	case GP_MEMORY:
		value /= 16;

		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\memory\\", intValue));
		break;

	case GP_CPUBRANDID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendUserInfo(connection, "\\cpubrandid\\", intValue));
		break;

	case GP_INCOMEID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\inc\\", intValue));
		break;

	case GP_MARRIEDID:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\mar\\", intValue));
		break;

	case GP_CHILDCOUNT:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\chc\\", intValue));
		break;

	case GP_INTERESTS1:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\i1\\", intValue));
		break;

	case GP_PIC:
		sprintf(intValue, "%d", value);
		CHECK_RESULT(gpiSendLocalInfo(connection, "\\pic\\", intValue));
		break;

	default:
		Error(connection, GP_PARAMETER_ERROR, "Invalid info.");
	}

	return GP_NO_ERROR;
}
