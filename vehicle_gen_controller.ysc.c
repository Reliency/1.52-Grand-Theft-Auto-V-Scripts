#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_50[68];
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	unk_0x3A396632EB359434(0);
	Local_56.f_5 = -1;
	Local_56 = -1;
	Local_56.f_1 = 99999.99f;
	func_495(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_96334[iVar0 /*3*/][0] = -1;
		Global_96334[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_111858.f_32745.f_4802)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_111858.f_32745.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_111858.f_32745.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_111858.f_32745.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_111858.f_32745.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_111858.f_32745.f_4801 = -15;
		Global_111858.f_32745.f_4802 = 1;
	}
	if (((!func_494() && !func_493()) && !func_492()) && !func_491())
	{
		func_490(60, 0);
		func_490(61, 0);
	}
	func_489();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_488(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (unk_0xED06FD5709A59F02(98))
			{
				if (unk_0xEC7DB118B815F890() == 64)
				{
					if (!Global_76643)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_487();
						func_486();
					}
					Global_76643 = 0;
				}
				else
				{
					func_487();
					func_486();
				}
			}
		}
		wait(0);
		if (unk_0xB9D6B1BA2EE681C0() != 5)
		{
			iLocal_129 = func_484();
			func_448();
			func_446();
			func_414(&iLocal_58);
			func_384();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 7))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xCE990E643CD9D0E5(*iParam0, 6) && unk_0xCE990E643CD9D0E5(*iParam0, 12))
			{
				fVar1 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(2000, 4000)));
						}
						if (!unk_0xCE990E643CD9D0E5(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!unk_0xCE990E643CD9D0E5(*iParam0, 30))
						{
							if (unk_0x8B917081F9836EDD(&(iParam0->f_9), false, -1))
							{
								if (unk_0x578C4EF320340AF7() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										unk_0xBE20AB8238688965(iParam0, 30);
									}
								}
							}
						}
						else if (unk_0x046706CBB367B768(iParam0->f_1))
						{
							unk_0xD2459066EA58CE43(iParam0, 30);
							unk_0xADB6EEE689FE86DE(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xCE990E643CD9D0E5(*iParam0, 23))
				{
					func_2(iParam0);
				}
				unk_0xD2459066EA58CE43(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int iParam0)
{
	unk_0x08020BC2A66F5B71();
	unk_0xD2459066EA58CE43(iParam0, 23);
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 22);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_10012.f_25), 22);
	}
}

void func_4(int iParam0, struct<3> Param1)
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = unk_0x5E54B0823F46079E();
	unk_0x057194D526464DC0(iParam0->f_1, &Var0, Param1, &Var1, false, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
		Var2 = { func_7(iParam0->f_6 - Var1) * Vector(52.5f, 52.5f, 52.5f) };
		Var0 = { Var1 + Var2 };
	}
	return Var0;
}

Vector3 func_7(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x79800E51B3B6D197(0, 36))
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 22);
	}
	bVar0 = unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_10012.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()
{
	var uVar0;
	
	uVar0 = func_10(Global_111858.f_10012.f_25, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)
{
	return shift_right((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)
{
	unk_0x8B917081F9836EDD(sParam1, false, -1);
	unk_0xBE20AB8238688965(iParam0, 23);
}

int func_12(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()
{
	bool bVar0;
	
	bVar0 = unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)
{
	return iParam0 == func_15();
}

int func_15()
{
	return joaat("ig_orleans");
}

int func_16()
{
	return unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7());
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1323180.f_21)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1323180.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1323180[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1323180[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0xE577FF98280346F8(iVar0);
			if (Global_1323180[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1323180[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x39C13838929FE9B6(iVar0);
			}
			else
			{
				fVar2 = unk_0x221A0BBF90575299(iVar0);
			}
			if (Global_1323180[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1323180[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0xB3F3C24BEC0D1B9A(iVar0);
			if (Global_1323180[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1323180[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return unk_0x18DC11A01EEE5483(iParam0);
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				case 18:
					return 22;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x8F678487EEBD8CE4(Global_75654.f_583))
	{
		bVar0 = false;
		if (iLocal_129 != Global_75654.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_75654.f_590)
		{
			if (!func_26(Global_75654.f_584, unk_0x41A1ED9BB4ED4772(Global_75654.f_583), 1056964608, 0) || func_22(Global_75654.f_582, func_23(Global_75654.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_75654.f_591)
		{
			if (!func_26(Global_75654.f_587, unk_0x41A1ED9BB4ED4772(Global_75654.f_583), 1056964608, 0) || func_22(Global_75654.f_582, func_23(Global_75654.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0xAE06B9E39EBDE049(Global_75654.f_581) || !unk_0x80FF6C016CDB0FAF(Global_75654.f_581, 0)) || (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_581, false)))
		{
			if (unk_0xAE06B9E39EBDE049(Global_75654.f_581) && !unk_0x80FF6C016CDB0FAF(Global_75654.f_581, 0))
			{
				Global_75654.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0xAE06B9E39EBDE049(Global_75654.f_581))
		{
			if (unk_0x80FF6C016CDB0FAF(Global_75654.f_581, 0))
			{
				Global_75654.f_587 = { unk_0x3E4D3CCC220BDFB1(Global_75654.f_581, true) };
			}
			else
			{
				Global_75654.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x93370FA10F15BE44(&(Global_75654.f_583));
			Global_75654.f_590 = 0;
			Global_75654.f_591 = 0;
			Global_75654.f_581 = 0;
		}
	}
	else
	{
		Global_75654.f_590 = 0;
		Global_75654.f_591 = 0;
		Global_75654.f_581 = 0;
	}
	if ((((((!unk_0x8F678487EEBD8CE4(Global_75654.f_583) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_96296[iVar2] != 145 && Global_96306[iVar2] != 0) && unk_0xAE06B9E39EBDE049(Global_96286[iVar2])) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar2], 0)) && !unk_0x8F678487EEBD8CE4(unk_0x43ED7EAE11FD94FF(Global_96286[iVar2]))) && Global_96296[iVar2] == iLocal_129) && unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(Global_96286[iVar2])))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_96286[iVar2], false))
				{
					Global_75654.f_581 = Global_96286[iVar2];
					Global_75654.f_582 = iLocal_129;
					Global_75654.f_590 = 0;
					Global_75654.f_583 = unk_0x2BE000892D65EA2A(Global_75654.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x8F678487EEBD8CE4(Global_75654.f_583) && !func_21(Global_75654.f_584, 0f, 0f, 0f, 0))
			{
				Global_75654.f_581 = 0;
				Global_75654.f_582 = iLocal_129;
				Global_75654.f_590 = 1;
				Global_75654.f_583 = unk_0x6820C712C1DD618A(Global_75654.f_584);
			}
			if (!unk_0x8F678487EEBD8CE4(Global_75654.f_583) && !func_21(Global_75654.f_587, 0f, 0f, 0f, 0))
			{
				Global_75654.f_581 = 0;
				Global_75654.f_582 = iLocal_129;
				Global_75654.f_591 = 1;
				Global_75654.f_583 = unk_0x6820C712C1DD618A(Global_75654.f_587);
			}
		}
		else
		{
			Global_75654.f_590 = 0;
			Global_75654.f_591 = 0;
		}
		if (unk_0x8F678487EEBD8CE4(Global_75654.f_583))
		{
			unk_0xE7B8403ABCA0391D(Global_75654.f_583, 225);
			unk_0xB023F5C66F5716C7(Global_75654.f_583, "PVEHICLE");
			unk_0x91136D871CEAF8CC(Global_75654.f_583, false);
			unk_0xE346A71235BB8065(Global_75654.f_583, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			unk_0xECC9A00CF1181EC2(Global_75654.f_583, iVar3);
		}
	}
}

bool func_21(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar1]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar1], 0))
		{
			if (Global_96296[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x36FE6D3220816ADA(Global_96286[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111858.f_9081.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111858.f_9081.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_28()
{
	func_324();
	func_239();
	func_68();
	func_29();
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (((((Local_56.f_29.f_80 && !Local_56.f_29.f_69) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && unk_0x7B70881748D166CD(joaat("michael1")) == 0)
		{
			if (!unk_0xAE06B9E39EBDE049(Local_56.f_113))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
					if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0))
					{
						iVar1 = unk_0x36FE6D3220816ADA(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_113 = iVar0;
						}
					}
				}
			}
			else if (unk_0x80FF6C016CDB0FAF(Local_56.f_113, 0) && func_64(unk_0x36FE6D3220816ADA(Local_56.f_113)))
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_56.f_113, false))
				{
					if (unk_0x1037B9D45CE6B788(Local_56.f_113, Local_56.f_29.f_48, Local_56.f_29.f_51, Local_56.f_29.f_54, 0, true, 0))
					{
						if ((!func_63(Local_56.f_113) && !func_62(Local_56.f_113)) && Local_56.f_113 != Global_75654.f_484[Local_56])
						{
							func_30(Local_56, Local_56.f_113, 1);
						}
						Local_56.f_113 = 0;
					}
				}
			}
			else
			{
				Local_56.f_113 = 0;
			}
		}
		else
		{
			Local_56.f_113 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_61(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 12) && !unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75654.f_555[0 /*21*/].f_4 != unk_0x36FE6D3220816ADA(iParam1))
		{
			return;
		}
	}
	if (Global_76561 != -1 && Global_76561 != iParam0)
	{
		return;
	}
	if (unk_0xAE06B9E39EBDE049(iParam1))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
		{
			if (!unk_0x1758275D343D5BA3(iParam1))
			{
				unk_0x4F3C4F457D44BB0F(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111858.f_32745.f_4801 = func_50();
			}
			if (iParam1 != Global_75654.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_76560 = iParam1;
				Global_76561 = iParam0;
				Global_76562 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, -1, 0);
		if (!unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, -1);
		}
		if (unk_0xAE06B9E39EBDE049(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iVar0))
		{
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111858.f_2359.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111858.f_32745.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111858.f_32745.f_5590 = iParam1;
	Global_76559 = iParam0;
	Global_111858.f_32745.f_5588 = 1;
	func_32(iParam0, &(Global_111858.f_32745.f_5510));
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_66 = unk_0x36FE6D3220816ADA(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x6984AA4EC2FF9734(iParam0), 16);
		*uParam1 = unk_0x999BFF5D72C9701A(iParam0);
		unk_0x255499E0D27A1780(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7E545979AF9FCA10(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA681FAA57125DB66(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA3DDFC0A00C22ED3(iParam0);
		uParam1->f_67 = unk_0x16628A9DDE9875CC(iParam0);
		uParam1->f_69 = unk_0x74BE6BA308A7B62F(iParam0);
		uParam1->f_70 = unk_0xB9FAC5FDE6272EE5(iParam0);
		unk_0x7984C9503C733252(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEC53ED0C29BA8483(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8CC64DFDB61877EA(iParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			uParam1->f_68 = unk_0x4B3B9AC15296615C(iParam0);
		}
		if (unk_0xF9C3E2B9AA9E2294(uParam1->f_66))
		{
			if (unk_0xCA87E17B66918D00(iParam0))
			{
				switch (unk_0x38EAEB8EE9D858CF(iParam0))
				{
					case 3:
					case 0:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x5EF4A66EF7630445(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (unk_0x93846124A64E7DEC(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (unk_0xB41668EFA7045047(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			unk_0x2CB46B57EB6A7F5D(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3FE1C23F43A4E29E(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xAACD889100BCBCFA(iParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x62B133F8490E0B2E(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(iParam0, "IgnoredByQuickSave") && unk_0x84E72BB19D4FDE12(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 27);
		}
	}
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_37(int iParam0)
{
	if ((((((((((!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x36FE6D3220816ADA(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5874D60325749F00(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xCA6AF782C906AC86(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_43())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_494() && !func_493()) && !func_492()) && !func_491()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_492())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				unk_0xBE20AB8238688965(&iVar0, 2);
				unk_0xBE20AB8238688965(&iVar0, 4);
				unk_0xBE20AB8238688965(&iVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	sVar1 = unk_0x6984AA4EC2FF9734(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF005CCA4263DF67F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[24]))
	{
		if (iParam0 == Global_75654.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75654.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 145;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar2], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75654.f_139[iParam0];
}

int func_50()
{
	var uVar0;
	
	func_60(&uVar0, unk_0x1D3A3697182AD8B3());
	func_59(&uVar0, unk_0x81F2E25F8C019191());
	func_58(&uVar0, unk_0x1F596C965B00E290());
	func_53(&uVar0, unk_0x371CFD525753F70C());
	func_52(&uVar0, unk_0xF225116F449A5CC6());
	func_51(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_54(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_55(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_56(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111858.f_32745.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111858.f_32745.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111858.f_32745.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 19))
	{
		if (!func_21(Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 20))
	{
		if (!func_21(Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96316[iVar0]))
		{
			if (Global_96316[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (Global_96286[iVar0] == iParam0 && unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == unk_0x36FE6D3220816ADA(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((unk_0x5874D60325749F00(iParam0) || unk_0x8EB87975F59A9367(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (unk_0x442D6659150AF4B3(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0xB86B8E85030B1552(iParam0) && !unk_0x97AFEF6099069369(iParam0)) && !unk_0x72B9CC2155AEDF58(iParam0)) && !unk_0x0CE6C9C2E6F95026(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xF9C3E2B9AA9E2294(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

void func_68()
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56 == -1 || unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0)) || ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[Local_56], 0)) && (unk_0x424918D1615FDC73(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56]) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56], true)))) || ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]) && unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7())) && ((unk_0x586155E4A4CB828E(unk_0x9B0761B4C3EB8BC7()) - 1f) > 0.15f && unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56])))) || ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]) && unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7())) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56], true))) || (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_238(0) != bLocal_161) || bLocal_142) || func_237(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !Global_74030) && !bLocal_142) && !unk_0x03DB5C6AABF8DA46())
			{
				if ((((((((((Local_56.f_29.f_80 && Local_56.f_2 == 0) && (Global_75654.f_592[0] != -1 || func_236() != 0)) && Local_56 != -1) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_237(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (func_67(Local_56, 0) && func_67(Local_56, 5))
					{
						if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_7, Local_56.f_29.f_10, Local_56.f_29.f_13, 0, true, 0) && !unk_0xDB9E558E914A4D5C(unk_0x9B0761B4C3EB8BC7())) && !unk_0xB77B1396EAA80D8F(unk_0x9B0761B4C3EB8BC7()))
						{
							if ((!unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]) || !unk_0x80FF6C016CDB0FAF(Global_75654.f_484[Local_56], 0)) || (!unk_0x424918D1615FDC73(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56]) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_484[Local_56], true)))
							{
								iVar6 = func_236();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_64(func_232(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_75654.f_592)
								{
									if (Global_75654.f_592[iVar4] != -1)
									{
										if ((func_231(Global_75654.f_592[iVar4], iLocal_129) && Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[Global_75654.f_592[iVar4]] == -15) && (Global_75654.f_592[iVar4] != 200 || !Global_111858.f_25069.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!unk_0xDABD547F0DF2906C())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_230(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_230(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_238(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!unk_0xDABD547F0DF2906C() || func_229("HANGAR_NO"))
										{
											func_228("HANGAR_NO", -1);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!unk_0xDABD547F0DF2906C() || func_229("MARINA_NO"))
										{
											func_228("MARINA_NO", -1);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!unk_0xDABD547F0DF2906C() || func_229("HELIPAD_NO"))
										{
											func_228("HELIPAD_NO", -1);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!unk_0xDABD547F0DF2906C() || func_229(&Var8))
										{
											func_228(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_226(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_225(iLocal_114, 1))
				{
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
					{
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
					}
					else
					{
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 256);
					}
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
						{
							unk_0x0A9768A52FEE2064(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), false);
						}
					}
					func_224();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_223(0, 0);
				func_222(1, 4, 0, 0, 0);
				func_221(1, 2, 1, 1, 1);
				func_220("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0;
				iVar14 = func_236();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_232(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_232(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_75654.f_592)
				{
					if (Global_75654.f_592[iVar12] != -1)
					{
						if ((func_231(Global_75654.f_592[iVar12], iLocal_129) && Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[Global_75654.f_592[iVar12]] == -15) && (Global_75654.f_592[iVar12] != 200 || !Global_111858.f_25069.f_7))
						{
							func_139(Global_75654.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_66)
							{
								iLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == -1)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_236();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_232(iVar12)))
					{
						unk_0xBE20AB8238688965(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_135(iVar13, unk_0xBBF5A53C394969AA(func_232(iVar12)), 0, 1, 0, 0);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_134(iVar13, 4, 0);
						}
						else
						{
							func_134(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_75654.f_592)
				{
					if (Global_75654.f_592[iVar12] != -1)
					{
						if ((func_231(Global_75654.f_592[iVar12], iLocal_129) && Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[Global_75654.f_592[iVar12]] == -15) && (Global_75654.f_592[iVar12] != 200 || !Global_111858.f_25069.f_7))
						{
							unk_0xBE20AB8238688965(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_139(Global_75654.f_592[iVar12], &Var0, 0, iLocal_129, -1, -1);
							if (Global_75654.f_592[iVar12] != 164)
							{
								func_135(iVar13, func_131(Global_75654.f_592[iVar12]), 0, 1, 0, 0);
							}
							else if (Var0.f_67 == 0)
							{
								func_135(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_128(func_131(Global_75654.f_592[iVar12]), 0);
								func_128("VNX_SWFTC", 0);
							}
							else if (Var0.f_67 == 1)
							{
								func_135(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_128(func_131(Global_75654.f_592[iVar12]), 0);
								func_128("VNX_SWFTB", 0);
							}
							else
							{
								func_135(iVar13, func_131(Global_75654.f_592[iVar12]), 0, 1, 0, 0);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_134(iVar13, 4, 0);
							}
							else
							{
								func_134(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_127(iLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0xF8EDFF98A9C94C74())
				{
					if (unk_0x3430895AB97DE4F3(2))
					{
						unk_0x779660A9E5364C4D(0, 1, 1);
						unk_0x779660A9E5364C4D(0, 2, 1);
						unk_0x779660A9E5364C4D(2, 200, 1);
						unk_0x047901495C0572C0(0, 237, 1);
						unk_0x047901495C0572C0(0, 238, 1);
						unk_0x047901495C0572C0(0, 241, 1);
						unk_0x047901495C0572C0(0, 242, 1);
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4269756 != iLocal_109)
							{
								unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_109 = Global_4269756;
								func_127(iLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x1BD7199394D7F19A(2, 188) || unk_0x1BD7199394D7F19A(2, 241))
				{
					iLocal_119 = 1;
					unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (iLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (unk_0xCE990E643CD9D0E5(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							iLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								iLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						func_127(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x1BD7199394D7F19A(2, 187) || unk_0x1BD7199394D7F19A(2, 242))
				{
					iLocal_119 = 1;
					unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (unk_0xCE990E643CD9D0E5(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							iLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (iLocal_109 - 1))
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								iLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_127(iLocal_109, 1, 1);
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					unk_0xC4CC25B68A91D144(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_236();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_64(func_232(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_232(iVar20) || !unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56])) || !unk_0x80FF6C016CDB0FAF(Global_75654.f_484[Local_56], 0)) || Local_56 == 21) || Local_56 == 22) || Local_56 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_232(iVar20)) || (!iLocal_118 && Local_56 == 21)) || (!iLocal_118 && Local_56 == 22)) || (!iLocal_118 && Local_56 == 23))
								{
									func_121("VEH_SELECT_CNFA", 0, 0);
									func_120(-1);
									func_119(201, "ITEM_YES", -1);
									func_119(202, "ITEM_NO", -1);
									iLocal_118 = 1;
									iVar20 = func_236() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_118(func_232(iVar20)))
									{
										iLocal_160 = func_232(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										iLocal_111 = 0;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_232(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_118(func_232(iVar20)))
								{
									iLocal_160 = func_232(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									iLocal_111 = 0;
									iLocal_113++;
								}
								else
								{
									if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]))
									{
										unk_0x4F3C4F457D44BB0F(Global_75654.f_484[Local_56], false, 1);
										unk_0x03A2522C845CFAC6(&(Global_75654.f_484[Local_56]));
									}
									Var1.f_66 = func_232(iVar20);
									unk_0xBE20AB8238688965(&(Var1.f_77), 14);
									func_115(Local_56, &Var1, 0f, 0f, 0f, -1f, 145);
									func_114(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_236() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_75654.f_592)
						{
							if (Global_75654.f_592[iVar20] != -1)
							{
								if ((func_231(Global_75654.f_592[iVar20], iLocal_129) && Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[Global_75654.f_592[iVar20]] == -15) && (Global_75654.f_592[iVar20] != 200 || !Global_111858.f_25069.f_7))
								{
									func_139(Global_75654.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_66 || !unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56])) || !unk_0x80FF6C016CDB0FAF(Global_75654.f_484[Local_56], 0)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_121("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_121("VEH_SELECT_CNFA", 0, 0);
											}
											func_120(-1);
											func_119(201, "ITEM_YES", -1);
											func_119(202, "ITEM_NO", -1);
											iLocal_118 = 1;
											iVar20 = Global_75654.f_592 + 1;
										}
										else if (Var0.f_66 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_75654.f_592 + 1;
										}
										else
										{
											if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]))
											{
												unk_0x4F3C4F457D44BB0F(Global_75654.f_484[Local_56], false, 1);
												unk_0x03A2522C845CFAC6(&(Global_75654.f_484[Local_56]));
											}
											func_139(Global_75654.f_592[iVar20], &Var0, 0, iLocal_129, -1, -1);
											unk_0xBE20AB8238688965(&(Var0.f_77), 14);
											if (unk_0xF9C3E2B9AA9E2294(Var0.f_66))
											{
												unk_0xBE20AB8238688965(&(Var0.f_77), 22);
											}
											func_115(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
											func_114(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_75654.f_592 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 202) || unk_0xC27AEE8B64EE0F8D(2, 238))
				{
					unk_0xC4CC25B68A91D144(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			unk_0xA86915034F55A3BF();
			if (iLocal_119)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_223(0, 0);
				func_222(1, 0, 0, 0, 0);
				func_221(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_220("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_135(iVar23, &Var24, 0, 1, 0, 0);
					unk_0xBE20AB8238688965(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_12 == 0)
				{
					iLocal_111 = Global_111858.f_25178.f_313[200];
				}
				else if (Local_131.f_12 == 1)
				{
					iLocal_111 = Global_111858.f_25178.f_626[200];
				}
				else
				{
					iLocal_111 = Global_111858.f_25178.f_939[200];
				}
				func_127(iLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0xF8EDFF98A9C94C74())
				{
					if (unk_0x3430895AB97DE4F3(2))
					{
						unk_0x779660A9E5364C4D(0, 1, 1);
						unk_0x779660A9E5364C4D(0, 2, 1);
						unk_0x047901495C0572C0(0, 237, 1);
						unk_0x047901495C0572C0(0, 238, 1);
						unk_0x047901495C0572C0(0, 241, 1);
						unk_0x047901495C0572C0(0, 242, 1);
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4269756 != iLocal_111)
							{
								unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_111 = Global_4269756;
								func_127(iLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x1BD7199394D7F19A(2, 188) || unk_0x1BD7199394D7F19A(2, 241))
				{
					iLocal_119 = 1;
					unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (iLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (unk_0xCE990E643CD9D0E5(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							iLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								iLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						func_127(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x1BD7199394D7F19A(2, 187) || unk_0x1BD7199394D7F19A(2, 242))
				{
					iLocal_119 = 1;
					unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (unk_0xCE990E643CD9D0E5(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							iLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (iLocal_111 - 1))
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								iLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_127(iLocal_111, 1, 1);
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					unk_0xC4CC25B68A91D144(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[Local_56]))
					{
						unk_0x4F3C4F457D44BB0F(Global_75654.f_484[Local_56], false, 1);
						unk_0x03A2522C845CFAC6(&(Global_75654.f_484[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_111858.f_25178.f_313[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_111858.f_25178.f_626[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_111858.f_25178.f_939[200] = uVar29;
					}
					func_139(200, &Var0, 0, iLocal_129, -1, -1);
					unk_0xBE20AB8238688965(&(Var0.f_77), 14);
					if (unk_0xF9C3E2B9AA9E2294(Var0.f_66))
					{
						unk_0xBE20AB8238688965(&(Var0.f_77), 22);
					}
					func_115(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
					func_114(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 202) || unk_0xC27AEE8B64EE0F8D(2, 238))
				{
					unk_0xC4CC25B68A91D144(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			unk_0xA86915034F55A3BF();
			if (iLocal_119)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
			{
				if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
				{
					if (!unk_0x00F308F67BEDCB88())
					{
						unk_0x0A9768A52FEE2064(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), true);
					}
				}
			}
			func_71(1, -1);
			iLocal_113 = 0;
			func_69(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && unk_0xDABD547F0DF2906C())
	{
		if (!unk_0x7BCC91F3C1CF24E8(&cLocal_162))
		{
			if ((((func_229("HANGAR_NO") || func_229("MARINA_NO")) || func_229("HELIPAD_NO")) || func_229("CAR_GAR_NO_1")) || func_229("CAR_GAR_NO_2"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		unk_0x610B4083B1F95914(15);
		Global_22550.f_8417 = 0;
	}
	unk_0x530DC1525CA60B00(0f);
	if (Global_22550.f_5628[iVar0])
	{
		unk_0x5D52AA94798846BB(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		unk_0x2DDA2C702A92866E("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		unk_0x2DDA2C702A92866E("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_72(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_72(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x95EF219D38B20CFF(*iParam0))
		{
			unk_0x2E352DDBBF674246(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x25DDB354A40FFCDB() && unk_0x82CC259B7B4F4AD9())
		{
			iParam2 = unk_0x1D39C24C852E6DFA();
		}
	}
	StringCopy(&cVar0, unk_0x6C5C6B207AA78253(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x856D5567211886A2(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22550.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22550.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22550.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_111(0, bParam6))
	{
		return;
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_109(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
	{
		fVar57 = Global_22548;
	}
	else
	{
		fVar57 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x9DD549AAA043F83A(&iVar58, &iVar59);
		fVar61 = unk_0x8940B46482DD0A7D(0);
		if (func_108())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_108())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x8BAB7B3A2C7777A5(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_135(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
			{
				fVar49 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar63, func_107(29), 64);
					StringCopy(&cVar64, func_104(29, 1), 64);
					if (unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_103(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_103(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (unk_0x856D5567211886A2(&(Global_22550.f_1)) != 0)
				{
					func_102();
					unk_0x40A75E32D30C605F(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							unk_0x42710E9E08FA375A(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							unk_0x5BC8B357341A4FEE(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xA434CC17B5517E4E((Global_22547 + 0.00390625f), ((Global_22548 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_102();
					func_100((((Global_22547 + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_102();
						func_100((((Global_22547 + fParam5) - 0.00390625f) - func_101("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22550.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_103(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x282B86763E4DCFC4("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x28DD484BAEAF8437(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x856D5567211886A2(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_109(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_103(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_99(fVar40);
				unk_0x40A75E32D30C605F(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_109(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_98(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4768), func_104(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_109(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_99(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_103(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_99(fVar40);
				unk_0x40A75E32D30C605F(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_109(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_98(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_107(Global_4269680.f_67), func_104(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_90(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xFCC7EAA298CE7AC2(76, 84);
			unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar66 = (Global_22550.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22550.f_8409)
					{
						unk_0x28DD484BAEAF8437(Global_22550.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x28DD484BAEAF8437(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (unk_0xCE990E643CD9D0E5(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[iVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22550.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22550.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22550.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[iVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22550.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x456829A212A690D7(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x842CB5919E31EB1F(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_109(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22550.f_5083[iVar69] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] - Global_22550.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(26), func_104(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(27), func_104(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_87(bVar32);
										}
										unk_0x40A75E32D30C605F(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_109(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_109(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_98(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[(iVar22 + iVar28)]), func_104(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[(iVar22 + iVar28)]), func_104(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[iVar8] == 2)
										{
											unk_0xA434CC17B5517E4E(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xA434CC17B5517E4E((fVar34 + fVar40), fVar35, 0);
											if (func_86() && unk_0x7B70881748D166CD(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_88(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x151E2F6EE4A34CFE(0f, (0.35f * 0.7f));
													unk_0xA11D279671F2289C(255, 255, 255, 150);
													unk_0x8DDE075026DB7EFD((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0x40A75E32D30C605F(&cVar75);
													unk_0x42710E9E08FA375A((Global_22550.f_5738 + iVar30));
													unk_0xA434CC17B5517E4E((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_109(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_109(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_98(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[(iVar22 + iVar14)]), func_104(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[(iVar22 + iVar14)]), func_104(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[(iVar22 + iVar14)]), func_104(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_87(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x42710E9E08FA375A(Global_22550.f_3918[iVar20]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(26), func_104(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(27), func_104(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_85((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_87(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x5BC8B357341A4FEE(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_109(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(26), func_104(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_107(27), func_104(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_88(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_84((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_109(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
											fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_109(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_98(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_107(26), func_104(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_109(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_109(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_98(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_107(27), func_104(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_109(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_98(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x177AA645FB4B3A38(func_107(Global_22550.f_4433[iVar22]), func_104(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_83(Global_22550.f_4433[iVar22])), (fVar37 * func_83(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22550.f_5056[iVar8] == 5)
						{
							if (Global_22550.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							if (Global_22550.f_5075[iVar8])
							{
								if (func_109(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar49;
	Global_22550.f_5878 = unk_0x578C4EF320340AF7();
	unk_0x530DC1525CA60B00(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_76(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		unk_0x4CB4237D8858ADA6(10);
	}
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(8);
	if (bParam0)
	{
		func_75(1);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_75(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_76(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_81(0))
		{
			func_77(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_77(int iParam0)
{
	if (func_82())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_80())
		{
			func_79(1, 1);
		}
		else
		{
			func_79(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_78())
	{
		Global_19681.f_1 = 3;
	}
}

int func_78()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_81(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_80()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_81(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

float func_83(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_84(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x5BC8B357341A4FEE(fParam3, iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

void func_85(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam4);
}

bool func_86()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_87(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
}

void func_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_89(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x28DD484BAEAF8437(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x28DD484BAEAF8437(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
		else
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA11D279671F2289C(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	else
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xBC2BD09DB91678C5(1);
	if (bParam5)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(4);
	}
	else if (bParam6)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(6);
	}
	else
	{
		unk_0xE9FEE5ECCAD48813(0);
	}
	unk_0x86520D0C56F68D3F(0f, 1f);
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_89(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_111(bParam4, bParam8))
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_93(unk_0x460153A63B9477BC(), 0))
		{
			return;
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x913D69ADE739309E() == 0 || unk_0xDFAB5E5CBE16E8B1())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (unk_0x628AF533B14EF310(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0xED026A379B794F61(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0x32F8D6499042A233(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE((1f - (Global_22550.f_5081 / 100f)));
			unk_0xE1FDD153F5858534();
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar1 /*4*/])) != unk_0x856D5567211886A2("PREV"))
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar1);
					func_92(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar2 /*4*/])) == unk_0x856D5567211886A2("PREV"))
					{
						func_92(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_91(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x7899A951E85F4B28(iVar3, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(iVar3);
						}
						unk_0x2042E9CA4306F725();
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (Global_22550.f_5026[iVar1] != 361 && unk_0xCE990E643CD9D0E5(Global_22550.f_5052, iVar1))
						{
							unk_0xF1B28F753235CE2A(true);
							unk_0xAD291B8F75D737AD(Global_22550.f_5026[iVar1]);
						}
						else
						{
							unk_0xF1B28F753235CE2A(false);
							unk_0xAD291B8F75D737AD(361);
						}
					}
					unk_0xE1FDD153F5858534();
				}
				iVar1++;
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_16)) != unk_0x856D5567211886A2(""))
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(Global_22550.f_4769);
				func_92(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_91(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iVar4, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iVar4);
					}
					unk_0x2042E9CA4306F725();
				}
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				unk_0xAD291B8F75D737AD(1);
			}
			else
			{
				unk_0xAD291B8F75D737AD(0);
			}
			unk_0xE1FDD153F5858534();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xAD291B8F75D737AD(iVar1);
					unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iParam2, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iParam2);
					}
					unk_0x2042E9CA4306F725();
					unk_0xE1FDD153F5858534();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xAD291B8F75D737AD(iVar1);
				unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
				if (bParam5)
				{
					unk_0x7899A951E85F4B28(iParam2, 70);
				}
				else
				{
					unk_0x42710E9E08FA375A(iParam2);
				}
				unk_0x2042E9CA4306F725();
				unk_0xE1FDD153F5858534();
			}
		}
		unk_0xFCC7EAA298CE7AC2(76, 66);
		unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				unk_0x36FA9C099416853E(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			unk_0x610B4083B1F95914(15);
			Global_22550.f_8417 = 0;
		}
		unk_0x5C64FD27DB62AF7A();
		if (Global_22550.f_5055)
		{
			unk_0xFCC7EAA298CE7AC2(82, 66);
			unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
			unk_0xE6A03BA84586E67B(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x5C64FD27DB62AF7A();
		}
		else
		{
			unk_0x37FC7E88C7659D33(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_91(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_92(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

bool func_93(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_94(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_95();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_95()
{
	return Global_1312763;
}

int func_96()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_97())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x1F1B1269BB6217F7(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_97()
{
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x28DD484BAEAF8437(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x28DD484BAEAF8437(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_99(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0x7508E89F04871147(2);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_100(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x42710E9E08FA375A(iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

float func_101(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_102();
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x842CB5919E31EB1F(1);
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_103(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_104(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_106(unk_0x460153A63B9477BC()) };
			if (unk_0x716812D32AF6C4C0(&Var2, &uVar1))
			{
				return func_105(&uVar1);
			}
		}
		else
		{
			return func_105(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_105(var uParam0)
{
	return uParam0;
}

struct<13> func_106(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

char* func_107(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_106(unk_0x460153A63B9477BC()) };
			unk_0x716812D32AF6C4C0(&Var1, &uVar0);
			return func_105(&uVar0);
		}
		else
		{
			return func_105(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_108()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x9DD549AAA043F83A(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_107(iParam0), 64);
	StringCopy(&cVar1, func_104(iParam0, bParam1), 64);
	if (unk_0x856D5567211886A2(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x9DD549AAA043F83A(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_108())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_108())
			{
				fVar4 = 1f;
			}
			if (unk_0x7B70881748D166CD(joaat("director_mode")) > 0)
			{
				unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
		}
		Var7 = { unk_0x282B86763E4DCFC4(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_110(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_110(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xE5EF21F14D0F9D25() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_110(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_111(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x87F0CB19476706C3() || (func_113(8, -1) && func_112() != 65)) || (unk_0xCFB49FF4012D7C68() != 0 && !bParam1)) || (unk_0x9CC4D06F5338CA6B() && !bParam0)) || unk_0x954BAB46FBB90036()) || Global_77093) || Global_22550.f_8416) || unk_0x06EBE4F22EC30D45()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_112()
{
	return Global_1312830;
}

bool func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_114(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_75654[iParam0] = 0;
	Global_75654.f_69[iParam0] = 0;
}

void func_115(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_61(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
		{
			func_117(iParam0);
			func_116(uParam1, &(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 11))
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_490(iParam0, 1);
		}
	}
}

void func_116(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_117(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], true, 1);
			unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
			Global_75654.f_139[iParam0] = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			func_490(iParam0, 0);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_119(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xED026A379B794F61(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22550.f_5052 = 0;
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x830F007E19C63E14(Global_22550.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xF1B28F753235CE2A(false);
		unk_0xE1FDD153F5858534();
	}
}

void func_121(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_4690), sParam0, 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = iParam1;
	Global_22550.f_4767 = unk_0x578C4EF320340AF7();
	Global_22550.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
}

int func_122()
{
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (Global_4269756 > -1)
		{
			if (unk_0xC27AEE8B64EE0F8D(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x670AE643E0B07F1D();
	}
	if (Global_4269756 == -6)
	{
		unk_0x80DA25AB4C5012E9(4);
		if (iParam0 && unk_0x22D6FB6153F774D3(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4269756 = -1;
			return 0;
		}
	}
	if (((Global_4269756 > -1 || Global_4269756 == -3) || Global_4269756 == -2) || unk_0x300FEC80FC56D5D9())
	{
		unk_0x80DA25AB4C5012E9(1);
		return 0;
	}
	if (Global_4269756 == -1 && iParam0)
	{
		if (unk_0x22D6FB6153F774D3(2, 237))
		{
			unk_0x80DA25AB4C5012E9(4);
			Global_4269756 = -6;
			return 1;
		}
		else
		{
			unk_0x80DA25AB4C5012E9(3);
			return 0;
		}
	}
	unk_0x80DA25AB4C5012E9(1);
	return 0;
}

void func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		Global_4269756 = -1;
		return;
	}
	unk_0x46448A93D5DC6258(1);
	fVar0 = Global_22547;
	fVar2 = (fVar0 + Global_22549);
	fVar3 = Global_22550.f_5730;
	fVar1 = (Global_22550.f_5730 - (IntToFloat(Global_22550.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22550.f_5732 < 1)
	{
		fVar1 = (Global_22550.f_5730 - 0.034722f);
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE1300BFF7C839435(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE1300BFF7C839435(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x5C64FD27DB62AF7A();
	func_126();
	if (Global_4269756 == -6)
	{
		return;
	}
	Global_4269756 = -1;
	fVar7 = Global_4269750;
	fVar8 = Global_4269751;
	if (Global_22550.f_5733 > Global_22550.f_5732)
	{
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= fVar3) && Global_4269751 < (fVar3 + fVar6))
		{
			Global_4269756 = -2;
			if (bParam3)
			{
				func_125(0);
			}
			return;
		}
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= (fVar3 + fVar6)) && Global_4269751 < (fVar3 + 0.034722f))
		{
			Global_4269756 = -3;
			if (bParam3)
			{
				func_125(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22550.f_5733 == -1)
		{
			Global_4269756 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22550.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xFCC7EAA298CE7AC2(76, 84);
				unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
				func_103(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22549, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x5C64FD27DB62AF7A();
			}
		}
		Global_4269756 = Global_22550.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4269756 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4269756 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4269756 = -4;
		return;
	}
	Global_4269756 = -1;
}

void func_125(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22547;
	fVar1 = Global_22550.f_5730;
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	if (Global_4269756 == -2)
	{
		func_103(fVar0, fVar1, Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4269756 == -3)
	{
		func_103(fVar0, (fVar1 + fVar2), Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_126()
{
	Global_4269752 = Global_4269750;
	Global_4269753 = Global_4269751;
	Global_4269750 = unk_0x9A36B66CB7B51691(2, 239);
	Global_4269751 = unk_0x9A36B66CB7B51691(2, 240);
	Global_4269754 = (Global_4269750 - Global_4269752);
	Global_4269755 = (Global_4269751 - Global_4269753);
}

void func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

void func_128(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam0, 24);
	Global_22550.f_5220++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 1;
	Global_22550.f_5743++;
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_130();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_109(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_129();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

float func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_109(Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xBA269EB4693A8C47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_130()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_88(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		unk_0x456829A212A690D7(&(Global_22550.f_73[Global_22550.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22550.f_5743)
	{
		if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(Global_22550.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 2)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x42710E9E08FA375A(Global_22550.f_3918[((Global_22550.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 3)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x5BC8B357341A4FEE(Global_22550.f_4175[((Global_22550.f_5223 - iVar4) + iVar10)], Global_22550.f_4304[((Global_22550.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 5)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 6)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x6A826E35A3096ED0(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 7)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22550.f_2124[Global_22550.f_5742 /*5*/][iVar7] == 9)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
			{
				unk_0x9EFD301E3BE8324E(&(Global_2462791[((Global_22550.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x856D5567211886A2(&(Global_22550.f_73[Global_22550.f_5742 /*6*/])) != 0)
	{
		fVar0 = unk_0x842CB5919E31EB1F(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_109(Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_131(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_132(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		default:
	}
	return unk_0xBBF5A53C394969AA(iVar0);
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("MPSV_LP0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_74009;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_74010;
		
		case 324:
			return Global_74011;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_74012;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_74013;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_133();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		default:
	}
	return 0;
}

int func_133()
{
	return joaat("kosatka");
}

void func_134(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5224 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 4)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 4)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_22550.f_4433[Global_22550.f_5224] = iParam1;
	Global_22550.f_5224++;
	if (iParam1 != 0)
	{
		func_109(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_109(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar2;
			}
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 4;
}

void func_135(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x7BCC91F3C1CF24E8(sParam1) && !unk_0x3030AE9FCF1BC243(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_138(Global_22550.f_5218, 1);
	}
	else
	{
		func_138(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_137(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_109(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_136(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_136(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_137(char* sParam0)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_88(0, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	return unk_0x842CB5919E31EB1F(1);
}

void func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_139(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_66 = func_132(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_219(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_218(iParam0))
	{
		if (Global_75588)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (func_217(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			uParam1->f_9[42] = 4;
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_75588)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_216(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_75587;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_111858.f_25178.f_313[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_111858.f_25178.f_626[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_111858.f_25178.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 2:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 3:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 4:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 5:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 6:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 7:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 8:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 9:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 10:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 11:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 12:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 13:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 14:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 15:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 16:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 17:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 18:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 19:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 20:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 21:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 22:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 23:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 24:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			case 25:
				func_162(func_163(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = func_149(func_163(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_148(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_147(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_146(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = func_149(func_163(iParam0, iVar1));
					}
				}
				else if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			
			case 2:
				if (func_148(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_147(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_146(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = func_149(func_163(iParam0, iVar1));
					}
				}
				else if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			
			case 3:
				if (func_148(iParam0))
				{
					if (func_147(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_146(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			
			case 4:
				if (func_148(iParam0))
				{
					if (func_147(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_146(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_143(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (unk_0xF005CCA4263DF67F(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 5:
				if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_143(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (unk_0xF005CCA4263DF67F(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			
			case 6:
				if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			
			case 8:
				if (func_218(iParam0))
				{
					if (!Global_75588)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (func_145(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (func_144(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (func_142(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = func_141();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = func_140();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 487)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 144;
		uParam1->f_7 = 105;
		uParam1->f_8 = 144;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 485)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 486)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 102;
		uParam1->f_7 = 105;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	switch (iParam0)
	{
		case 518:
			uParam1->f_66 = func_133();
			uParam1->f_5 = 0;
			uParam1->f_6 = 15;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			break;
		
		case 529:
			uParam1->f_5 = 27;
			uParam1->f_6 = 27;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 532:
			uParam1->f_5 = 155;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 155;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 531:
			uParam1->f_5 = 155;
			uParam1->f_6 = 13;
			uParam1->f_7 = 6;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 528:
			uParam1->f_5 = 154;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 526:
			uParam1->f_5 = 151;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 530:
			uParam1->f_5 = 154;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 527:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 525:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			unk_0xBE20AB8238688965(&(uParam1->f_77), 3);
			break;
		
		case 523:
			uParam1->f_5 = 131;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_9[9] = 4;
			break;
		
		case 524:
			uParam1->f_5 = 12;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		
		case 520:
			uParam1->f_9[24] = 4;
			break;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_140()
{
	return joaat("terbyte");
}

int func_141()
{
	return joaat("avenger");
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_143(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_144(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443) || iParam0 == 459) || iParam0 == 460) || iParam0 == 461) || iParam0 == 462) || iParam0 == 463) || iParam0 == 464) || iParam0 == 465) || iParam0 == 466) || iParam0 == 467) || iParam0 == 468) || iParam0 == 469) || iParam0 == 470) || iParam0 == 471) || iParam0 == 472) || iParam0 == 473) || iParam0 == 474) || iParam0 == 475) || iParam0 == 476) || iParam0 == 477) || iParam0 == 478) || iParam0 == 479) || iParam0 == 489) || iParam0 == 490) || iParam0 == 491) || iParam0 == 492) || iParam0 == 493) || iParam0 == 494) || iParam0 == 495) || iParam0 == 496) || iParam0 == 497) || iParam0 == 498) || iParam0 == 500) || iParam0 == 501) || iParam0 == 502) || iParam0 == 503) || iParam0 == 504) || iParam0 == 505) || iParam0 == 519) || iParam0 == 520) || iParam0 == 521) || iParam0 == 522) || iParam0 == 534) || iParam0 == 535)
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_162(func_163(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_162(func_163(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_148(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_161(unk_0x460153A63B9477BC(), 0))
			{
				return 14;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 1))
			{
				return 13;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 2))
			{
				return 8;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 3))
			{
				return 12;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 4))
			{
				return 11;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 5))
			{
				return 10;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 6))
			{
				return 9;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 7))
			{
				return 7;
			}
			else if (func_161(unk_0x460153A63B9477BC(), 8))
			{
				return 15;
			}
			if (func_150(unk_0x460153A63B9477BC()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_150(int iParam0)
{
	if ((((((((func_160(iParam0) || func_159(iParam0)) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_151(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_2, 0);
}

int func_152()
{
	return -1;
}

bool func_153(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 31);
}

bool func_154(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 30);
}

bool func_155(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 29);
}

bool func_156(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 28);
}

bool func_157(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 27);
}

bool func_158(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 26);
}

bool func_159(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 25);
}

bool func_160(int iParam0)
{
	if (iParam0 == func_152())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 24);
}

int func_161(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_160(iParam0);
		
		case 3:
			return func_159(iParam0);
		
		case 6:
			return func_158(iParam0);
		
		case 1:
			return func_157(iParam0);
		
		case 0:
			return func_156(iParam0);
		
		case 7:
			return func_155(iParam0);
		
		case 2:
			return func_154(iParam0);
		
		case 5:
			return func_153(iParam0);
		
		case 8:
			return func_151(iParam0);
		
		default:
	}
	return 0;
}

int func_162(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("MPSV_LP0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_164(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_164(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

int func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_132(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0x2A4512DFA7EDB2F9())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_215())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x25DDB354A40FFCDB()) || (iParam0 == 207 && unk_0x25DDB354A40FFCDB())) || (iParam0 == 208 && unk_0x25DDB354A40FFCDB())) || (iParam0 == 209 && unk_0x25DDB354A40FFCDB()))
	{
		if (func_43())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_218(iParam0))
	{
		if (Global_75588)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_214(iVar0);
	if (iVar1 != -1)
	{
		if (func_212(func_213(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_211(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_262145.f_19759) || (iParam0 != 205 && Global_262145.f_19758))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_210(iParam0))
	{
		if (func_201(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_200(iVar0);
	if (iVar2 != -1)
	{
		if (func_198(func_199(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_197(iVar0);
	if (iVar3 > 0)
	{
		if (func_195(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_194(iVar0);
	if (iVar4 != -1)
	{
		if (func_192(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_191(iVar0);
	if (iVar5 != -1)
	{
		if (func_186(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_185(iVar0);
	if (iVar6 != -1)
	{
		if (func_178(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_177(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_176(iVar0);
	if (iVar7 != -1)
	{
		if (func_177(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_175(iVar0);
	if (iVar8 != -1)
	{
		if (func_165(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_172(unk_0x460153A63B9477BC(), 0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_171(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_170(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_170(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_170(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_170(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_170(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_166(0, 1) && func_166(1, 1)) && func_166(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_166(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return unk_0xCE990E643CD9D0E5(func_168(9582, -1, 0), iParam0);
	}
	return func_167(unk_0x460153A63B9477BC(), iParam0);
}

int func_167(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_169(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_95();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2587834[iParam0 /*3*/][func_169(iParam1)];
	if (unk_0xB9112C701DE2A810(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_173(iParam0, func_174(iParam1));
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		
		case joaat("winky"):
			return 1;
			break;
		
		case joaat("longfin"):
			return 2;
			break;
		
		case joaat("annihilator2"):
			return 3;
			break;
		
		case joaat("alkonost"):
			return 4;
			break;
		
		case joaat("patrolboat"):
			return 5;
			break;
		
		case joaat("brioso2"):
			return 6;
			break;
		
		case joaat("weevil"):
			return 7;
			break;
		
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("boxville"):
			return 2;
			break;
		
		case joaat("stockade"):
			return 3;
			break;
		
		case joaat("asbo"):
			return 4;
			break;
		
		case joaat("kanjo"):
			return 5;
			break;
		
		case joaat("everon"):
			return 6;
			break;
		
		case joaat("retinue2"):
			return 7;
			break;
		
		case joaat("yosemite2"):
			return 8;
			break;
		
		case joaat("sugoi"):
			return 9;
			break;
		
		case joaat("sultan2"):
			return 10;
			break;
		
		case joaat("outlaw"):
			return 11;
			break;
		
		case joaat("vagrant"):
			return 12;
			break;
		
		case joaat("komoda"):
			return 13;
			break;
		
		case joaat("stryder"):
			return 14;
			break;
		
		case joaat("furia"):
			return 15;
			break;
		
		case joaat("zhaba"):
			return 16;
			break;
		
		case joaat("jugular"):
			return 17;
			break;
		
		case joaat("sentinel3"):
			return 18;
			break;
		
		case joaat("gauntlet3"):
			return 19;
			break;
		
		case joaat("ellie"):
			return 20;
			break;
		
		case joaat("defiler"):
			return 21;
			break;
		
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_177(int iParam0)
{
	int iVar0;
	
	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_168(8834, -1, 0);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 0) || Global_262145.f_27870)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 1) || Global_262145.f_27871)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 2) || Global_262145.f_27872)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 3) || Global_262145.f_27873)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 4) || Global_262145.f_27874)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 5) || Global_262145.f_27875)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 6) || Global_262145.f_27876)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 7) || Global_262145.f_27877)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 8) || Global_262145.f_27878)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 9) || Global_262145.f_27879)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 10) || Global_262145.f_27880)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 11) || Global_262145.f_27881)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 12) || Global_262145.f_27882)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 13) || Global_262145.f_27883)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 14) || Global_262145.f_27884)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 15) || Global_262145.f_27885)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 16) || Global_262145.f_27886)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 17) || Global_262145.f_27887)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 18) || Global_262145.f_27888)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 19) || Global_262145.f_27889)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 20) || Global_262145.f_27890)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 21) || Global_262145.f_27891)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (unk_0xCE990E643CD9D0E5(iVar0, 22) || Global_262145.f_27892)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_185(iParam0) != -1)
	{
		if (func_179(func_184(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_179(int iParam0)
{
	return func_180(func_183(iParam0), -1, -1);
}

int func_180(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_95();
	}
	iVar1 = func_182(iParam0, iParam1);
	uVar2 = func_181(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_95();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case joaat("MPSV_LP0_31"):
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_168(7231, -1, 0) >= func_190(iParam0) || Global_262145.f_24174)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_168(7231, -1, 0) >= func_190(iParam0) || Global_262145.f_24175)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_187(22050, -1, -1) >= func_190(iParam0) || Global_262145.f_24176)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_281.f_7, 1) || Global_262145.f_24178)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_168(7229, -1, 0) >= func_190(iParam0) || Global_262145.f_24179)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_168(7229, -1, 0) >= func_190(iParam0) || Global_262145.f_24180)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("scramjet"):
			if (func_180(22123, -1, -1) || Global_262145.f_24177)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_95();
	}
	iVar0 = 0;
	iVar1 = func_189(iParam0, iParam1);
	iVar2 = func_188(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_95();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24181;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24182;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24183;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24184;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24185;
			break;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("scramjet"):
			return 3;
			break;
		
		case joaat("pbus2"):
			return 4;
			break;
		
		case joaat("patriot2"):
			return 5;
			break;
		
		case joaat("blimp3"):
			return 6;
			break;
	}
	return -1;
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_168(5662, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(1));
		
		case joaat("akula"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(2));
		
		case joaat("riot2"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(6));
		
		case joaat("stromberg"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(7));
		
		case joaat("chernobog"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(10));
		
		case joaat("barrage"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(11));
		
		case joaat("khanjali"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(12));
		
		case joaat("volatol"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(13));
		
		case joaat("thruster"):
			return unk_0xCE990E643CD9D0E5(iVar0, func_193(15));
		
		default:
	}
	return 0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_196();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	return func_168(6114, -1, 0);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22223;
		
		case joaat("rogue"):
			return Global_262145.f_22224;
		
		case joaat("alphaz1"):
			return Global_262145.f_22225;
		
		case joaat("havok"):
			return Global_262145.f_22226;
		
		case joaat("starling"):
			return Global_262145.f_22227;
		
		case joaat("molotok"):
			return Global_262145.f_22228;
		
		case joaat("tula"):
			return Global_262145.f_22229;
		
		case joaat("bombushka"):
			return Global_262145.f_22230;
		
		case joaat("howard"):
			return Global_262145.f_22231;
		
		case joaat("mogul"):
			return Global_262145.f_22232;
		
		case joaat("pyro"):
			return Global_262145.f_22233;
		
		case joaat("seabreeze"):
			return Global_262145.f_22234;
		
		case joaat("nokota"):
			return Global_262145.f_22235;
		
		case joaat("hunter"):
			return Global_262145.f_22236;
		
		default:
	}
	return 0;
}

bool func_198(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(func_168(5464, -1, 0), iParam0);
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (!Global_76833)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_202(iVar0);
}

bool func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_209())
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_203(iVar1));
}

int func_203(int iParam0)
{
	return (iParam0 % 32);
}

var func_204(var uParam0)
{
	var uVar0;
	
	uVar0 = func_168(func_205(uParam0), -1, 0);
	return uVar0;
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_208(iVar0);
	if ((func_207() == 0 || func_206() == 0) || (func_207() == 999 && func_206() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
		}
	}
	return 11771;
}

int func_206()
{
	return Global_30969;
}

int func_207()
{
	return Global_30968;
}

int func_208(int iParam0)
{
	return (iParam0 / 32);
}

bool func_209()
{
	return Global_1312875;
}

int func_210(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)
{
	if (!Global_76833)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(func_168(5327, -1, 0), iParam0);
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_214(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xCE990E643CD9D0E5(Global_25, 5))
	{
		if (unk_0xCE990E643CD9D0E5(Global_25, 1) || unk_0xCE990E643CD9D0E5(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
	{
		if (unk_0xCE990E643CD9D0E5(iVar0, 5))
		{
			if (unk_0xCE990E643CD9D0E5(iVar0, 1) || unk_0xCE990E643CD9D0E5(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x2729CA05B8B04B97(0))
	{
		if (Global_150694.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (unk_0xD2F202166691EDB2(iVar2, &iVar1, -1))
			{
				if (unk_0xCE990E643CD9D0E5(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		iVar3 = unk_0xFCBF95335DD16537(866);
		if (unk_0xCE990E643CD9D0E5(iVar3, 1) || unk_0xCE990E643CD9D0E5(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0x67982D968440F4C9())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				unk_0xBE20AB8238688965(&iVar4, 1);
				unk_0xBE20AB8238688965(&iVar4, 3);
				unk_0xBE20AB8238688965(&iVar4, 5);
				unk_0xBE20AB8238688965(&Global_25, 1);
				unk_0xBE20AB8238688965(&Global_25, 3);
				unk_0xBE20AB8238688965(&Global_25, 5);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar4 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar4, 1);
					unk_0xBE20AB8238688965(&iVar4, 3);
					unk_0xB2B72C9FCE371E70(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_216(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_218(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_219(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xBE20AB8238688965(iParam1, 4);
			break;
		
		case 67:
			unk_0xBE20AB8238688965(iParam1, 4);
			break;
		
		case 72:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 117:
			unk_0xD2459066EA58CE43(iParam1, 1);
			break;
		
		case 49:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 118:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xD2459066EA58CE43(iParam1, 1);
			break;
		
		case 1:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 119:
			unk_0xD2459066EA58CE43(iParam1, 1);
			break;
		
		case 77:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xD2459066EA58CE43(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 120:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 130:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 132:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 135:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 137:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 141:
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 6);
			break;
		
		case 147:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			unk_0xBE20AB8238688965(iParam1, 3);
			unk_0xBE20AB8238688965(iParam1, 4);
			unk_0xBE20AB8238688965(iParam1, 5);
			unk_0xBE20AB8238688965(iParam1, 6);
			unk_0xBE20AB8238688965(iParam1, 7);
			unk_0xBE20AB8238688965(iParam1, 8);
			break;
		
		case 203:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xD2459066EA58CE43(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 100:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			break;
		
		case 170:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xD2459066EA58CE43(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 160:
			unk_0xBE20AB8238688965(iParam1, 15);
			break;
		
		case 161:
			unk_0xBE20AB8238688965(iParam1, 15);
			break;
		
		case 192:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 221:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			break;
		
		case 222:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 172:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 165:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 166:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xD2459066EA58CE43(iParam1, 1);
			break;
		
		case 139:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 104:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 109:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xD2459066EA58CE43(iParam1, 2);
			unk_0xD2459066EA58CE43(iParam1, 4);
			break;
		
		case 97:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 52:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 108:
			unk_0xBE20AB8238688965(iParam1, 1);
			break;
		
		case 237:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 238:
			unk_0xD2459066EA58CE43(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_75588)
			{
				unk_0xBE20AB8238688965(iParam1, 9);
			}
			break;
		
		case 271:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			unk_0xBE20AB8238688965(iParam1, 3);
			unk_0xBE20AB8238688965(iParam1, 4);
			break;
		
		case 272:
			unk_0xBE20AB8238688965(iParam1, 3);
			unk_0xBE20AB8238688965(iParam1, 4);
			break;
		
		case 273:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 281:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 267:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 268:
			unk_0xBE20AB8238688965(iParam1, 0);
			break;
		
		case 292:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 309:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 329:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 364:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 360:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 401:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 6);
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 406:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 404:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 425:
		case 426:
		case 427:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 431:
		case 432:
		case 433:
			unk_0xBE20AB8238688965(iParam1, 9);
			break;
		
		case 471:
			unk_0xBE20AB8238688965(iParam1, 3);
			unk_0xBE20AB8238688965(iParam1, 7);
			break;
		
		case 493:
		case 491:
			unk_0xBE20AB8238688965(iParam1, 0);
			unk_0xBE20AB8238688965(iParam1, 1);
			unk_0xBE20AB8238688965(iParam1, 2);
			unk_0xBE20AB8238688965(iParam1, 3);
			unk_0xBE20AB8238688965(iParam1, 4);
			unk_0xBE20AB8238688965(iParam1, 5);
			unk_0xBE20AB8238688965(iParam1, 6);
			unk_0xBE20AB8238688965(iParam1, 7);
			break;
		
		case 525:
			unk_0xBE20AB8238688965(iParam1, 3);
			break;
		
		default:
			return;
			break;
	}
}

void func_220(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5056[0] = iParam0;
	Global_22550.f_5056[1] = iParam1;
	Global_22550.f_5056[2] = iParam2;
	Global_22550.f_5056[3] = iParam3;
	Global_22550.f_5056[4] = iParam4;
	Global_22550.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22550.f_5226++;
	}
}

void func_223(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2462791[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = unk_0x8940B46482DD0A7D(0);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

void func_224()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x044DAD4CFF5C769B(0.325f, 0.3f);
	}
}

int func_225(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_226(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		unk_0xBAA4D421B8B8A744(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!unk_0xD77C5A1792C02DA1(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x494D5FF88119CDC0("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!unk_0xC7F5A2E99D75A65C("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x494D5FF88119CDC0("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!unk_0xC7F5A2E99D75A65C("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_227(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_227(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				*uParam0 = unk_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x95EF219D38B20CFF(*uParam0))
					{
						uParam0->f_8 = unk_0x578C4EF320340AF7();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_228(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

bool func_229(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_230(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = unk_0x354AD085195C5FA6();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x7BCC91F3C1CF24E8(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_25178[iParam0], iVar0);
}

int func_232(int iParam0)
{
	int iVar0;
	int iVar1[128];
	
	if (func_235(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0x25DDB354A40FFCDB())
	{
		if (func_234(33, 0) && !func_233(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_111858.f_25069.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_111858.f_25069.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_111858.f_25069.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_111858.f_25069.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_111858.f_25069.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_111858.f_7684.f_764)
	{
		if (Global_111858.f_7684.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_235(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_668.f_1313, 2))
		{
			return 1;
		}
	}
	if (unk_0x2A4512DFA7EDB2F9())
	{
		if (!bParam1 || unk_0x0EB6C63A09FD9DF1())
		{
			if (!unk_0x59ED414969A48197() && !unk_0xDCA0815D900F27F8())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xAC9BDC8868BA314A())
		{
			return 0;
		}
	}
	if (unk_0x2A4512DFA7EDB2F9())
	{
		return 1;
	}
	return 0;
}

int func_236()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_235(1, 1))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			iVar0++;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[45 /*6*/], 3))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0x25DDB354A40FFCDB())
	{
		if (func_234(33, 0) && !func_233(1751306471))
		{
			iVar0++;
		}
		if (Global_111858.f_25069.f_3)
		{
			iVar0++;
		}
		if (Global_111858.f_25069.f_4)
		{
			iVar0++;
		}
		if (Global_111858.f_25069.f_5)
		{
			iVar0++;
		}
		if (Global_111858.f_25069.f_6)
		{
			iVar0++;
		}
		if (Global_111858.f_25069.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_237(float fParam0)
{
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x5F2A4D48A767F060(unk_0x9B0761B4C3EB8BC7()) > 0;
		}
		else
		{
			return unk_0x349D91A00D1E6EA9(unk_0x9B0761B4C3EB8BC7(), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), fParam0) > 0;
		}
	}
	return 0;
}

bool func_238(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_239()
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<3> Var14;
	bool bVar15;
	float fVar16;
	int iVar17;
	struct<3> Var18;
	struct<3> Var19;
	int iVar20;
	struct<3> Var21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_29.f_80 && Local_56.f_29.f_69) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && Local_56.f_2 == 0) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_74030) && !func_238(1)) && !func_323()) || (((Local_56.f_3 > 1 && !func_238(0)) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && !func_323()))
	{
		func_322(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		Var5 = { 198.3659f, -1020.273f, -100f };
		Var6 = { Var5 };
		Var7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_321(Local_56);
		switch (Local_56.f_3)
		{
			case 0:
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !unk_0x9CC4D06F5338CA6B())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_320(unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()), Local_56.f_29.f_68, 90f) || unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !unk_0xC0736D5851285045(unk_0x9B0761B4C3EB8BC7())) && !unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) && !unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_319())
					{
						bVar9 = true;
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
						{
							iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), true);
							if (unk_0xAE06B9E39EBDE049(iVar2))
							{
								if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
								{
									iVar10 = unk_0x36FE6D3220816ADA(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0)) || unk_0x7A3E3E24F50F2AAB(iVar2)) || ((!unk_0xB86B8E85030B1552(iVar10) && !unk_0x97AFEF6099069369(iVar10)) && !unk_0x0CE6C9C2E6F95026(iVar10))) || iVar10 == joaat("monster")) || unk_0x0922C2E075A5F18C(iVar2)) || unk_0xD3DD4CF5121550D3(iVar2)) || (unk_0x07404C7FE024EC4F(unk_0x9B0761B4C3EB8BC7()) && unk_0x7B70881748D166CD(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (unk_0xD118DAE62A6B0AE8(sVar4))
						{
							unk_0x131ED02492676000(sVar4);
							if (!unk_0xC614DDE265D18415(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_230(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
						{
							if (!unk_0xDABD547F0DF2906C() || func_229("WEB_VEH_INV"))
							{
								func_228("WEB_VEH_INV", -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!unk_0xDABD547F0DF2906C() || func_229("WEB_VEH_FULL"))
					{
						func_228("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_173 = 0;
						unk_0x131ED02492676000(sVar4);
						if (unk_0xC614DDE265D18415(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						unk_0x1082C25039B168F8(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), true);
					if (unk_0xAE06B9E39EBDE049(iVar2))
					{
						if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
						{
							iVar12 = unk_0x36FE6D3220816ADA(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || unk_0x7A3E3E24F50F2AAB(iVar2)) || ((!unk_0xB86B8E85030B1552(iVar12) && !unk_0x97AFEF6099069369(iVar12)) && !unk_0x0CE6C9C2E6F95026(iVar12))) || iVar12 == joaat("monster")) || unk_0x0922C2E075A5F18C(iVar2)) || unk_0xD3DD4CF5121550D3(iVar2)) || (unk_0x07404C7FE024EC4F(unk_0x9B0761B4C3EB8BC7()) && unk_0x7B70881748D166CD(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && (func_320(unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()), Local_56.f_29.f_68, 90f) || unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && func_319()) && !unk_0xC0736D5851285045(unk_0x9B0761B4C3EB8BC7())) && !unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) && !unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2)) && !func_323()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()) || (unk_0xC614DDE265D18415(sVar4) || !unk_0xD118DAE62A6B0AE8(sVar4)))
					{
						if (func_225(iLocal_115, 1))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_317(47, 0);
						func_312(47, 0);
						Local_56.f_112 = unk_0xC519B5898C2310B1(Var5, "v_garagem_sp");
						if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
						{
							if (!unk_0xEF928B5F0219FDF7(Local_56.f_112))
							{
								if ((unk_0xD3137A576BE9EC5C() % 10) == 0)
								{
									unk_0x05549C0F30BB285D(Local_56.f_112);
								}
							}
							StringCopy(&Global_38353, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !unk_0xE9159DB182CF0841())
						{
							if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
							{
								iVar13 = func_310(Local_56);
								func_61(&Var14, iVar13);
								Var6 = { Var14 };
								unk_0xF16CDD1D05F4411A(Var6, 20f, 0);
							}
							else
							{
								unk_0xF16CDD1D05F4411A(Var7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && unk_0xE9159DB182CF0841())
					{
						unk_0xF990EDED7D25FB88();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_69(&iLocal_115);
					unk_0x1082C25039B168F8(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_317(47, 0);
				func_312(47, 0);
				unk_0x09BA0099935AAA6B(8);
				Global_75654.f_577 = 1;
				Global_75654.f_578 = { Local_56.f_29.f_55 };
				iLocal_155 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				unk_0x912105796D275F9C(unk_0x9B0761B4C3EB8BC7(), 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				unk_0x644F1D0C5427A242(false);
				unk_0x8CFF639CEFF5CF16(false);
				unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
					if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
					{
						if (func_320(unk_0xEF7858F25585F853(iVar2), Local_56.f_29.f_68, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						unk_0x52090984B5C8A3E4(iVar2, true, true, true, true, true, true, 0, false);
						unk_0x4BAC0F0B99F7DCF9(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0x801B883D25479F23(Local_83.f_86[0 /*6*/], 20f, 0);
						unk_0x6D5673CA7E01D619(Local_83.f_86[0 /*6*/], 7f);
						unk_0x03D382CB0B44E2FC(iVar2, Local_83.f_86[0 /*6*/], 1, false, 0, 1);
						if (iLocal_175 && !unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xE922BAA80E8F9324(iVar2, (Local_83.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0xE922BAA80E8F9324(iVar2, Local_83.f_86[0 /*6*/].f_3.f_2);
						}
						if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xB28186F95B71B19D(unk_0x9B0761B4C3EB8BC7(), 0, 0, -1);
							unk_0x6A4846EF125EA7E6(unk_0x9B0761B4C3EB8BC7(), 1);
						}
						unk_0xB11D151E210D4FAC(iVar2, 1084227584);
					}
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
					func_304(1, 1, 1, 0, 0, 0, 0);
					func_303(&(Local_83[1 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 3;
				}
				else
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_168) && !unk_0xA59F96B50B97E63C(iLocal_168, 0))
					{
						if (unk_0x1758275D343D5BA3(iLocal_168) && unk_0x1D2A3118784C0272(iLocal_168, 1))
						{
							unk_0xE730EAF558C97567(&iLocal_168);
						}
					}
					iLocal_168 = unk_0xA5D3CD332CD10EE9();
					if ((((unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x80FF6C016CDB0FAF(iLocal_168, 0)) && !unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(iLocal_168))) && !unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(iLocal_168))) && !unk_0x5874D60325749F00(unk_0x36FE6D3220816ADA(iLocal_168)))
					{
						if (!unk_0x1758275D343D5BA3(iLocal_168))
						{
							unk_0x4F3C4F457D44BB0F(iLocal_168, false, 0);
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x80FF6C016CDB0FAF(iLocal_168, 0))
						{
							if (!bVar15)
							{
								if (unk_0x1037B9D45CE6B788(iLocal_168, Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(24);
								if (func_302(&Local_141, 24))
								{
									func_297(&Local_141, func_484());
									if (unk_0xAE06B9E39EBDE049(iVar17))
									{
										unk_0x03A2522C845CFAC6(&iVar17);
									}
								}
								if (Local_56 == 21)
								{
									unk_0x555EE41D7C7078E6(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_295(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56 == 22)
								{
									unk_0x555EE41D7C7078E6(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_295(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56 == 23)
								{
									unk_0x555EE41D7C7078E6(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_295(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xB11D151E210D4FAC(iLocal_168, 1084227584);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					Var18 = { Local_56.f_29 * Vector(2f, 2f, 2f) + Local_56.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var19 = { Local_56.f_29 * Vector(1f, 1f, 1f) + Local_56.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29, Var18.x, Var18.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x344C570D6F8700DF(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var18.x, Var18.f_1, Local_56.f_29.f_2, Var19.x, Var19.f_1, Local_56.f_29.f_3.f_2, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x344C570D6F8700DF(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var19.x, Var19.f_1, Local_56.f_29.f_2, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x344C570D6F8700DF(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (unk_0x344C570D6F8700DF(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					unk_0x4BAC0F0B99F7DCF9(Local_83.f_73[0 /*4*/], 20f, 0);
					unk_0x801B883D25479F23(Local_83.f_86[0 /*6*/], 20f, 0);
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_83.f_73[0 /*4*/], 1, false, 0, 1);
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), Local_83.f_73[0 /*4*/].f_3);
					iLocal_120 = unk_0xF341A134A5B8D4F6(Local_83.f_73[0 /*4*/], 0f, 0f, Local_83.f_73[0 /*4*/].f_3, 2);
					unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
					func_304(1, 1, 1, 0, 0, 0, 0);
					func_303(&(Local_83[0 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
					Local_56.f_3 = 4;
				}
				Local_56.f_112 = unk_0xC519B5898C2310B1(Var5, "v_garagem_sp");
				if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
				{
					if (!unk_0xEF928B5F0219FDF7(Local_56.f_112))
					{
						unk_0x05549C0F30BB285D(Local_56.f_112);
					}
					StringCopy(&Global_38353, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
					{
						iVar20 = func_310(Local_56);
						func_61(&Var21, iVar20);
						Var6 = { Var21 };
						unk_0xF16CDD1D05F4411A(Var6, 20f, 0);
					}
					else
					{
						unk_0xF16CDD1D05F4411A(Var7, 20f, 0);
					}
				}
				unk_0xBE20AB8238688965(&(Local_131.f_9), 25);
				func_291(198.0043f, -999.7775f, -100f, 50f, 0);
				func_114(Local_56);
				func_114(26);
				func_114(29);
				func_114(32);
				func_114(28);
				func_114(31);
				func_114(34);
				func_114(27);
				func_114(30);
				func_114(33);
				settimera(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!unk_0xE9159DB182CF0841())
				{
				}
				else if (unk_0x0C7F95EB5CFEFB8B())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
				{
					if (!unk_0xEF928B5F0219FDF7(Local_56.f_112))
					{
						unk_0x05549C0F30BB285D(Local_56.f_112);
					}
					StringCopy(&Global_38353, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0xC519B5898C2310B1(Var5, "v_garagem_sp");
				}
				if (func_290())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110) && unk_0x09F689AE170A62EC(Local_56.f_110))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_110))
					{
						bVar22 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (unk_0x40397A9A17EEC1C5(Local_56.f_111) && unk_0x09F689AE170A62EC(Local_56.f_111))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_111))
					{
						bVar22 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[0 /*15*/].f_14 * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xFC5D6FB6EECB392F(iLocal_120))
				{
					fVar23 = unk_0x369E69441C066912(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					unk_0x1D40553EDD51A1B8(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x03DB5C6AABF8DA46())
				{
					iVar24 = unk_0x5E54B0823F46079E();
					unk_0xC4CC25B68A91D144(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0xD4974F3117C9F232(iVar24, "hold", (2250f / 1000f));
					func_304(0, 1, 1, 0, 0, 0, 0);
					unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
					if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
					{
						unk_0x856549C07003344B(Local_56.f_110, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
					}
					if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
					{
						unk_0x856549C07003344B(Local_56.f_111, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_178))
					{
						unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
						unk_0x6A8F948698B360B4(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
					unk_0x09BA0099935AAA6B(8);
					if (unk_0xFC5D6FB6EECB392F(iLocal_120))
					{
						unk_0x14C2D70A19403A5F(iLocal_120);
					}
					iLocal_120 = -1;
					unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 194.5394f, -1026.32f, -100f, 1, false, 0, 1);
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 334.1665f);
					unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), true);
					unk_0x4C4FC7841A5FB983(0f);
					unk_0x7965943E39128B42(0f, 1065353216);
					settimera(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_289(Local_56);
				if (unk_0x03DB5C6AABF8DA46() && timera() > 2250)
				{
					unk_0x1082C25039B168F8(sVar4);
					func_288();
					if (unk_0xE9159DB182CF0841())
					{
						unk_0xF990EDED7D25FB88();
					}
					unk_0xFD45D90342D2A0CD(800);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
					unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
					settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_289(Local_56);
				bVar25 = true;
				if (!unk_0xE9159DB182CF0841())
				{
				}
				else if (unk_0x0C7F95EB5CFEFB8B())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
				{
					if (!unk_0xEF928B5F0219FDF7(Local_56.f_112))
					{
						unk_0x05549C0F30BB285D(Local_56.f_112);
					}
					StringCopy(&Global_38353, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_112 = unk_0xC519B5898C2310B1(Var5, "v_garagem_sp");
				}
				if (func_290())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110) && unk_0x09F689AE170A62EC(Local_56.f_110))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_110))
					{
						bVar25 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (unk_0x40397A9A17EEC1C5(Local_56.f_111) && unk_0x09F689AE170A62EC(Local_56.f_111))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_111))
					{
						bVar25 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[1 /*15*/].f_14 * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_280(unk_0x9B0761B4C3EB8BC7(), Local_83.f_86[0 /*6*/], Local_83.f_66[0 /*3*/], ((Local_83[1 /*15*/].f_14 * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_288();
					settimera(0);
					unk_0x1D40553EDD51A1B8(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_289(Local_56);
				if (IntToFloat(timera()) <= (Local_83.f_61[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_288();
					func_304(0, 1, 1, 0, 0, 0, 0);
					unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
					if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
					{
						unk_0x856549C07003344B(Local_56.f_110, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
					}
					if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
					{
						unk_0x856549C07003344B(Local_56.f_111, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_178))
					{
						unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
						unk_0x6A8F948698B360B4(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
					unk_0x09BA0099935AAA6B(8);
					if (unk_0xE9159DB182CF0841())
					{
						unk_0xF990EDED7D25FB88();
					}
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
						if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
						{
							iVar28 = func_310(Local_56);
							func_61(&Var29, iVar28);
							unk_0x03D382CB0B44E2FC(iVar2, Var29, 1, false, 0, 1);
							unk_0xE922BAA80E8F9324(iVar2, Var29.f_3);
							unk_0xFC34FFD7661206B7(iVar2, 1);
							unk_0xC160551F55D6365A(iVar2, false, true, 0);
							unk_0x289D342D7C2DA52A(iVar2, 4);
							unk_0xE31584C316CDAAB3(iVar2, 1, 0);
							unk_0xE31584C316CDAAB3(iVar2, 0, 0);
							unk_0x0A9768A52FEE2064(iVar2, false);
							unk_0x52090984B5C8A3E4(iVar2, false, false, false, false, false, false, 0, false);
							unk_0x1FBAE3B250A7D06D(unk_0x9B0761B4C3EB8BC7(), iVar2, 0);
							unk_0x6A8F948698B360B4(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_59 = 2;
							func_32(iVar2, &Var30);
							func_115(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_279(iVar2);
						}
						unk_0x4C4FC7841A5FB983(0f);
						unk_0x7965943E39128B42(0f, 1065353216);
					}
					iVar31 = unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((unk_0xAE06B9E39EBDE049(uVar0[iVar32]) && !unk_0x5AEB5DDFFAD43CA5(uVar0[iVar32])) && unk_0xFE6F151E15A69B3A(uVar0[iVar32], unk_0x14A1FF4316FA17CB(unk_0x460153A63B9477BC())))
						{
							unk_0xCBF81D3222C77066(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar32++;
					}
					settimera(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0xFD45D90342D2A0CD(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (timera() < 7000 || !Global_111858.f_32745.f_4800)
				{
					if (!Global_111858.f_32745.f_4800)
					{
						if (iLocal_156 == 0)
						{
							func_228("CAR_GAR_05", -1);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (timera() >= 7000)
							{
								settimera(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_228("CAR_GAR_06", -1);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (timera() >= 7000)
							{
								settimera(0);
								Global_111858.f_32745.f_4800 = 1;
							}
						}
					}
					else
					{
						func_228("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_111858.f_32745.f_4800 = 1;
				}
				iVar33 = 0;
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
					if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
					{
						if (unk_0xE236CECA003D63B9(iVar2) || unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
						{
							if (!(unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) && !unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7())))
							{
								if ((((unk_0xAA5DA46D3DBFD541(0, 71) != 0f || unk_0x1BD7199394D7F19A(0, 71)) || unk_0x22D6FB6153F774D3(0, 71)) || unk_0x79800E51B3B6D197(0, 71)) || unk_0xB9C0D9B37277621D(0, 71))
								{
									iVar33 = 1;
								}
								if ((((unk_0xAA5DA46D3DBFD541(0, 72) != 0f || unk_0x1BD7199394D7F19A(0, 72)) || unk_0x22D6FB6153F774D3(0, 72)) || unk_0x79800E51B3B6D197(0, 72)) || unk_0xB9C0D9B37277621D(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x131ED02492676000(sVar4);
					if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_320(unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							func_230(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (func_225(iLocal_115, 1))
							{
								func_69(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_278())
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) || iLocal_159)
					{
						settimera(0);
						unk_0xF16CDD1D05F4411A(Local_83.f_73[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (unk_0xC614DDE265D18415(sVar4))
					{
						sLocal_176 = "";
						switch (unk_0x344C570D6F8700DF(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = unk_0xF341A134A5B8D4F6(Local_83.f_73[1 /*4*/], 0f, 0f, Local_83.f_73[1 /*4*/].f_3, 2);
						unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
						func_304(1, 1, 1, 0, 0, 0, 0);
						func_303(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
						unk_0xF16CDD1D05F4411A(Local_83.f_73[2 /*4*/], 20f, 0);
						settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!unk_0xD118DAE62A6B0AE8(sVar4))
					{
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_83.f_73[1 /*4*/], 1, false, 0, 1);
						unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), Local_83.f_73[1 /*4*/].f_3);
						func_304(1, 1, 1, 0, 0, 0, 0);
						func_303(&(Local_83[2 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
						unk_0xF16CDD1D05F4411A(Local_83.f_73[2 /*4*/], 20f, 0);
						settimera(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!unk_0xE9159DB182CF0841())
				{
				}
				else if (unk_0x0C7F95EB5CFEFB8B())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_290())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110) && unk_0x09F689AE170A62EC(Local_56.f_110))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_110))
					{
						bVar34 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (unk_0x40397A9A17EEC1C5(Local_56.f_111) && unk_0x09F689AE170A62EC(Local_56.f_111))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_111))
					{
						bVar34 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[2 /*15*/].f_14 * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0xFC5D6FB6EECB392F(iLocal_120))
				{
					fVar35 = unk_0x369E69441C066912(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0x1D40553EDD51A1B8(800);
					settimera(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0x779660A9E5364C4D(0, 75, 1);
				if (timera() > 500)
				{
					iVar36 = func_277();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_59 = 2;
						func_115(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_117(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							func_490(iVar36, 0);
							func_117(iVar36);
						}
					}
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					unk_0x912105796D275F9C(unk_0x9B0761B4C3EB8BC7(), 0, 0);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
					unk_0x1082C25039B168F8(sVar4);
					unk_0x1D40553EDD51A1B8(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x03DB5C6AABF8DA46())
				{
					iVar38 = unk_0x5E54B0823F46079E();
					unk_0xC4CC25B68A91D144(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0xD4974F3117C9F232(iVar38, "hold", (2250f / 1000f));
					unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
					if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
					{
						unk_0x856549C07003344B(Local_56.f_110, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
					}
					if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
					{
						unk_0x856549C07003344B(Local_56.f_111, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_178))
					{
						unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
						unk_0x6A8F948698B360B4(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
					unk_0x09BA0099935AAA6B(8);
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						if (!iLocal_159)
						{
							iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
							if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
							{
								unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
								unk_0x03D382CB0B44E2FC(iVar2, Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
								unk_0xE922BAA80E8F9324(iVar2, Local_56.f_29.f_77[1]);
								unk_0xB11D151E210D4FAC(iVar2, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0xFC5D6FB6EECB392F(iLocal_120))
						{
							unk_0x14C2D70A19403A5F(iLocal_120);
						}
						iLocal_120 = -1;
						unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
						unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_77[1]);
					}
					unk_0x4C4FC7841A5FB983(0f);
					unk_0x7965943E39128B42(0f, 1065353216);
					settimera(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x03DB5C6AABF8DA46() && timera() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						unk_0x78FCB2E22C41B9D5(iLocal_160);
						if (unk_0x7D167B9A0CCDA347(iLocal_160))
						{
							iVar40 = unk_0xCE4780E24AFDFBF9(iLocal_160, Local_56.f_29.f_70[0 /*3*/], Local_56.f_29.f_77[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								unk_0xA6595E9B6170C788(iVar40, 0);
							}
							if (unk_0xAE06B9E39EBDE049(iVar40) && unk_0x80FF6C016CDB0FAF(iVar40, 0))
							{
								unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iVar40, -1);
								unk_0x463F70A7E1EF1482(iVar40, 0f);
								unk_0x74528AC0906CBABE(iLocal_160);
								if (func_118(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											unk_0xA6595E9B6170C788(iVar40, iLocal_111);
											break;
										}
								}
								unk_0xE730EAF558C97567(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!unk_0xE9159DB182CF0841())
					{
					}
					else if (unk_0x0C7F95EB5CFEFB8B())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x80FF6C016CDB0FAF(iLocal_168, 0))
						{
							iVar41 = func_49(24);
							if (func_302(&Local_141, 24))
							{
								func_297(&Local_141, func_484());
								if (unk_0xAE06B9E39EBDE049(iVar41))
								{
									unk_0x03A2522C845CFAC6(&iVar41);
								}
							}
							if (Local_56 == 21)
							{
								unk_0x555EE41D7C7078E6(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								unk_0x03D382CB0B44E2FC(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
								unk_0xE922BAA80E8F9324(iLocal_168, 154.4846f);
								func_295(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56 == 22)
							{
								unk_0x555EE41D7C7078E6(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								unk_0x03D382CB0B44E2FC(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
								unk_0xE922BAA80E8F9324(iLocal_168, 319.6985f);
								func_295(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56 == 23)
							{
								unk_0x555EE41D7C7078E6(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								unk_0x03D382CB0B44E2FC(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
								unk_0xE922BAA80E8F9324(iLocal_168, 270.8741f);
								func_295(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xB11D151E210D4FAC(iLocal_168, 1084227584);
						}
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
						{
							iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
							if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
							{
								unk_0x03D382CB0B44E2FC(iVar2, Local_83.f_66[1 /*3*/], 1, false, 0, 1);
								unk_0xE922BAA80E8F9324(iVar2, Local_56.f_29.f_77[0]);
								unk_0xB11D151E210D4FAC(iVar2, 1084227584);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									unk_0x29B700FB89C9DAC1(iVar2, false);
								}
								else
								{
									unk_0x29B700FB89C9DAC1(iVar2, true);
								}
								if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
								{
									unk_0xB28186F95B71B19D(unk_0x9B0761B4C3EB8BC7(), 0, 0, -1);
									unk_0x6A4846EF125EA7E6(unk_0x9B0761B4C3EB8BC7(), 1);
								}
								unk_0x0A9768A52FEE2064(iVar2, true);
								func_245(func_484(), &iVar2, 3, 1);
							}
							unk_0xFD45D90342D2A0CD(800);
							func_304(1, 1, 1, 0, 0, 0, 0);
							func_303(&(Local_83[3 /*15*/]), &(Local_56.f_110), &(Local_56.f_111));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							unk_0x1082C25039B168F8(sVar4);
							func_288();
							unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
							if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
							{
								unk_0x856549C07003344B(Local_56.f_110, false);
								unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
							}
							if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
							{
								unk_0x856549C07003344B(Local_56.f_111, false);
								unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
							}
							if (unk_0xAE06B9E39EBDE049(iLocal_178))
							{
								unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
								unk_0x6A8F948698B360B4(iLocal_178, false);
								iLocal_178 = 0;
							}
							unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
							unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
							unk_0x09BA0099935AAA6B(8);
							unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
							unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_70[1 /*3*/], 1, false, 0, 1);
							unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_77[1]);
							unk_0xFD45D90342D2A0CD(800);
							settimera(0);
							func_291(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
						}
						unk_0x644F1D0C5427A242(false);
						unk_0x8CFF639CEFF5CF16(false);
						settimera(0);
						unk_0x4C4FC7841A5FB983(0f);
						unk_0x7965943E39128B42(0f, 1065353216);
						iVar42 = unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((unk_0xAE06B9E39EBDE049(uVar0[iVar43]) && !unk_0x5AEB5DDFFAD43CA5(uVar0[iVar43])) && unk_0xFE6F151E15A69B3A(uVar0[iVar43], unk_0x14A1FF4316FA17CB(unk_0x460153A63B9477BC())))
							{
								if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
								{
									iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
									if ((unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0)) && unk_0x99E61B3887CC8E71(iVar2) > iVar43)
									{
										unk_0x13A4BD6CC31F7B8F(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									unk_0xCBF81D3222C77066(uVar0[iVar43], Local_56.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar43++;
						}
						unk_0x09BA0099935AAA6B(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!unk_0xE9159DB182CF0841())
				{
				}
				else if (unk_0x0C7F95EB5CFEFB8B())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_290())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110) && unk_0x09F689AE170A62EC(Local_56.f_110))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_110))
					{
						bVar44 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (unk_0x40397A9A17EEC1C5(Local_56.f_111) && unk_0x09F689AE170A62EC(Local_56.f_111))
				{
					if (unk_0xC70648DE87CC1919(Local_56.f_111))
					{
						bVar44 = false;
					}
					if (IntToFloat(timera()) <= (Local_83[3 /*15*/].f_14 * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					func_280(unk_0x9B0761B4C3EB8BC7(), Local_83.f_86[1 /*6*/], Local_83.f_66[1 /*3*/], ((Local_83[3 /*15*/].f_14 * 1000f) - 500f), Local_83.f_73[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_244(unk_0x9B0761B4C3EB8BC7(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_291(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					settimera(0);
					Local_56.f_3 = 16;
				}
				else
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(timera()) <= (Local_83.f_61[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
				{
					unk_0x1F083D57FD823427(Local_56.f_112);
				}
				StringCopy(&Global_38353, "", 32);
				if (unk_0xE9159DB182CF0841())
				{
					unk_0xF990EDED7D25FB88();
				}
				func_243(47, 1);
				func_241(47, 1);
				Global_75654.f_577 = 0;
				if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
				{
					unk_0xFD45D90342D2A0CD(250);
				}
				settimera(0);
				unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
				{
					unk_0x856549C07003344B(Local_56.f_110, false);
					unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
				{
					unk_0x856549C07003344B(Local_56.f_111, false);
					unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_178))
				{
					unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
					unk_0x6A8F948698B360B4(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
					if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
					{
						unk_0x03D382CB0B44E2FC(iVar2, Local_83.f_73[2 /*4*/], 1, false, 0, 1);
						unk_0xE922BAA80E8F9324(iVar2, Local_83.f_73[2 /*4*/].f_3);
						unk_0xB11D151E210D4FAC(iVar2, 1084227584);
						unk_0x4C4FC7841A5FB983(0f);
						unk_0x7965943E39128B42(0f, 1065353216);
					}
				}
				unk_0x644F1D0C5427A242(true);
				unk_0x8CFF639CEFF5CF16(true);
				func_304(0, 1, 1, 0, 0, 0, 0);
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				if (iLocal_155 > 0)
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), iLocal_155, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
				if (((unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x1758275D343D5BA3(iLocal_168)) && unk_0x1D2A3118784C0272(iLocal_168, 0)) && iLocal_168 != func_49(24))
				{
					unk_0xE730EAF558C97567(&iLocal_168);
				}
				unk_0xD2459066EA58CE43(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x87F0CB19476706C3())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_75654.f_577)
		{
			func_243(47, 1);
			func_241(47, 1);
			Global_75654.f_577 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_75654.f_577)
	{
		unk_0x7A317AF0343FFB46();
		func_240();
		func_76(0);
		unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), true);
		unk_0x26A60F42A1132477(2, 202);
		unk_0x779660A9E5364C4D(0, 37, 1);
		unk_0x779660A9E5364C4D(0, 157, 1);
		unk_0x779660A9E5364C4D(0, 158, 1);
		unk_0x779660A9E5364C4D(0, 159, 1);
		unk_0x779660A9E5364C4D(0, 160, 1);
		unk_0x779660A9E5364C4D(0, 161, 1);
		unk_0x779660A9E5364C4D(0, 162, 1);
		unk_0x779660A9E5364C4D(0, 163, 1);
		unk_0x779660A9E5364C4D(0, 164, 1);
		unk_0x779660A9E5364C4D(0, 165, 1);
		unk_0x779660A9E5364C4D(0, 14, 1);
		unk_0x779660A9E5364C4D(0, 15, 1);
		unk_0x779660A9E5364C4D(0, 53, 1);
		unk_0x779660A9E5364C4D(0, 54, 1);
		unk_0x779660A9E5364C4D(0, 140, 1);
		unk_0x779660A9E5364C4D(0, 141, 1);
		unk_0x779660A9E5364C4D(0, 142, 1);
		unk_0x779660A9E5364C4D(0, 143, 1);
		unk_0x779660A9E5364C4D(0, 143, 1);
		unk_0x779660A9E5364C4D(0, 47, 1);
		unk_0x779660A9E5364C4D(0, 38, 1);
		unk_0x779660A9E5364C4D(0, 22, 1);
		unk_0x779660A9E5364C4D(0, 102, 1);
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
		unk_0x779660A9E5364C4D(0, 92, 1);
		unk_0x779660A9E5364C4D(0, 99, 1);
		unk_0x779660A9E5364C4D(0, 115, 1);
		unk_0x779660A9E5364C4D(0, 46, 1);
		unk_0x779660A9E5364C4D(0, 25, 1);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			if (!unk_0x7BCC91F3C1CF24E8(&cLocal_165))
			{
				if ((((func_229("WEB_VEH_INV") || func_229("WEB_VEH_FULL")) || func_229("CAR_GAR_05")) || func_229("CAR_GAR_06")) || func_229("CAR_GAR_EXIT"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_240()
{
	Global_22411.f_6 = 1;
}

void func_241(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_242(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_37408[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_37408[Var0.f_1]), Var0);
	}
}

struct<2> func_242(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_243(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_242(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_37400[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_37400[Var0.f_1]), Var0);
	}
}

float func_244(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, bParam2);
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0xAE06B9E39EBDE049(*iParam1)) && unk_0x80FF6C016CDB0FAF(*iParam1, 0))
	{
		if (iParam2 > Global_111858.f_2359.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0xC71761E30ACCF098(*iParam1) != 0)
		{
			unk_0x249EEEE65626B20C(*iParam1, 0);
		}
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x36FE6D3220816ADA(*iParam1);
		if (unk_0xFF88B5221E8464D2(*iParam1, &iVar1))
		{
			Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x36FE6D3220816ADA(iVar1);
		}
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x6FFF09CC7258818C(*iParam1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x4F5F2FB7AE0EB7AB(*iParam1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xAACD889100BCBCFA(*iParam1, 1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xAACD889100BCBCFA(*iParam1, 2);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xAACD889100BCBCFA(*iParam1, 3);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xAACD889100BCBCFA(*iParam1, 4);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xAACD889100BCBCFA(*iParam1, 5);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xAACD889100BCBCFA(*iParam1, 6);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xAACD889100BCBCFA(*iParam1, 7);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xAACD889100BCBCFA(*iParam1, 8);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xAACD889100BCBCFA(*iParam1, 9);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xAACD889100BCBCFA(*iParam1, 10);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xAACD889100BCBCFA(*iParam1, 11);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xAACD889100BCBCFA(*iParam1, 12);
		if (unk_0xD501F7099396F726(*iParam1, 0))
		{
			iVar2 = unk_0x4B3B9AC15296615C(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x9301B13EC408DE79();
		StringCopy(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x6984AA4EC2FF9734(*iParam1), 16);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x999BFF5D72C9701A(*iParam1);
		unk_0x255499E0D27A1780(*iParam1, &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x7E545979AF9FCA10(*iParam1, &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xA681FAA57125DB66(*iParam1, &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x5EF4A66EF7630445(*iParam1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xA3DDFC0A00C22ED3(*iParam1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x16628A9DDE9875CC(*iParam1);
		Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x74BE6BA308A7B62F(*iParam1);
		unk_0xEC53ED0C29BA8483(*iParam1, &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x8CC64DFDB61877EA(*iParam1, 2))
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x8CC64DFDB61877EA(*iParam1, 3))
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x8CC64DFDB61877EA(*iParam1, 0))
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x8CC64DFDB61877EA(*iParam1, 1))
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_111858.f_2359.f_539.f_4317[iParam0] = 10;
		if (unk_0x456B9315146B66F4(*iParam1) >= 0 && func_248(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_111858.f_20114[iParam0 /*43*/].f_40 = 1;
				Global_111858.f_20114[iParam0 /*43*/] = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_111858.f_20114[iParam0 /*43*/].f_3 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_111858.f_20114[iParam0 /*43*/].f_4 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_111858.f_20114[iParam0 /*43*/].f_5 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_111858.f_20114[iParam0 /*43*/].f_6 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_111858.f_20114[iParam0 /*43*/].f_10 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_111858.f_20114[iParam0 /*43*/].f_16 = !Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_111858.f_20114[iParam0 /*43*/].f_19 = { Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_111858.f_20114[iParam0 /*43*/].f_23 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_111858.f_20114[iParam0 /*43*/].f_7 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_111858.f_20114[iParam0 /*43*/].f_8 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_111858.f_20114[iParam0 /*43*/].f_9 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_111858.f_20114[iParam0 /*43*/].f_11 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_111858.f_20114[iParam0 /*43*/].f_12 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_111858.f_20114[iParam0 /*43*/].f_13 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_111858.f_20114[iParam0 /*43*/].f_14 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_111858.f_20114[iParam0 /*43*/].f_15 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_111858.f_20114[iParam0 /*43*/].f_18 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_111858.f_20114[iParam0 /*43*/].f_17 = Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_111858.f_20114[iParam0 /*43*/].f_24 = unk_0xAB92DA7B6007DAAA(*iParam1, 11) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_25 = unk_0xAB92DA7B6007DAAA(*iParam1, 12) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_26 = unk_0xAB92DA7B6007DAAA(*iParam1, 4) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_27 = unk_0xAB92DA7B6007DAAA(*iParam1, 23) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_28 = unk_0xAB92DA7B6007DAAA(*iParam1, 14) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_29 = unk_0xAB92DA7B6007DAAA(*iParam1, 16) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_30 = unk_0xAB92DA7B6007DAAA(*iParam1, 15) + 1;
				Global_111858.f_20114[iParam0 /*43*/].f_32 = unk_0xC14210B28BA35770(*iParam1);
				Global_111858.f_20114[iParam0 /*43*/].f_33[0] = unk_0x2DB34AFE84500883(*iParam1);
				Global_111858.f_20114[iParam0 /*43*/].f_33[1] = unk_0xEFDEBF9D4310BF8D(*iParam1, 14, 0);
				Global_111858.f_20114[iParam0 /*43*/].f_33[2] = unk_0xEFDEBF9D4310BF8D(*iParam1, 14, 1);
				Global_111858.f_20114[iParam0 /*43*/].f_33[3] = unk_0xEFDEBF9D4310BF8D(*iParam1, 14, 2);
				Global_111858.f_20114[iParam0 /*43*/].f_33[4] = unk_0xEFDEBF9D4310BF8D(*iParam1, 14, 3);
				Global_111858.f_20114[iParam0 /*43*/].f_39 = unk_0x11403B2F9E5CD11E(*iParam1);
				Global_111858.f_20114[iParam0 /*43*/].f_31 = func_247(*iParam1);
				Global_111858.f_20114[iParam0 /*43*/].f_33[0] = unk_0xEE308F9D21DBC7C5(*iParam1);
				unk_0x4BCACBC44D97225B(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_246(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111858.f_20114[iParam0 /*43*/].f_1));
				unk_0x966569DECA0F96F6(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_246(Global_111858.f_2359.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111858.f_20114[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_246(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_143(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0x456B9315146B66F4(iParam0) >= 0)
	{
		if (unk_0x11403B2F9E5CD11E(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x11403B2F9E5CD11E(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x11403B2F9E5CD11E(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x11403B2F9E5CD11E(iParam0) == 0)
		{
			if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_248(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(unk_0x36FE6D3220816ADA(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	if ((!func_275(iVar0, bParam1, uParam2) && !func_274(unk_0x460153A63B9477BC())) && !func_257(iParam0))
	{
		return 0;
	}
	if (func_274(unk_0x460153A63B9477BC()))
	{
		if (func_256(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_255(unk_0x460153A63B9477BC()) && (unk_0x442D6659150AF4B3(iVar0) || unk_0xF9C3E2B9AA9E2294(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x7A3E3E24F50F2AAB(iParam0) && !func_253(iParam0)) && !bVar1) && !(func_252(unk_0x36FE6D3220816ADA(iParam0)) && func_249(unk_0x460153A63B9477BC())))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		if ((func_62(iParam0) && unk_0x36FE6D3220816ADA(iParam0) != joaat("sentinel2")) && unk_0x36FE6D3220816ADA(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_249(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_251(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_254(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	if (func_273(unk_0x460153A63B9477BC()) || func_272(unk_0x460153A63B9477BC()))
	{
		if (func_258(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0)
{
	if ((!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0)) || unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return 0;
	}
	if (func_261(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x871819940BD2E434(iParam0, "Player_Vehicle"))
	{
		if (unk_0x8C0800114C2864BE(iParam0, "Player_Vehicle") == unk_0x69FCAB6112C0ABA7(unk_0x460153A63B9477BC()))
		{
			if (func_259(iParam0))
			{
				return 1;
			}
			switch (unk_0x36FE6D3220816ADA(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
				case joaat("paragon2"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_259(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (func_260(unk_0x36FE6D3220816ADA(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
	}
	return 0;
}

int func_261(int iParam0, bool bParam1)
{
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_263(unk_0x36FE6D3220816ADA(iParam0), 0))
			{
				if (Global_2540384.f_303 == iParam0)
				{
					return 1;
				}
				else if (func_262(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2440049.f_640[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_263(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_271(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_270();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14227)
			{
				return func_269();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14228)
			{
				return func_269();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14226)
			{
				return func_269();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14229)
			{
				return func_269();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14231)
			{
				return func_269();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_268();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18677)
			{
				return func_267();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18679)
			{
				return func_267();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18683)
			{
				return func_267();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18680)
			{
				return func_267();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18687)
			{
				return func_267();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18685)
			{
				return func_267();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18690)
			{
				return func_267();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20635)
			{
				return func_266();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20636)
			{
				return func_266();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_265();
			break;
		
		case joaat("glendale"):
			if (func_265() || func_264())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_265();
			break;
		
		case joaat("issi3"):
			return func_265();
			break;
		
		case joaat("gargoyle"):
			return func_265();
			break;
		
		case joaat("dominator"):
			return func_265();
			break;
		
		case joaat("dominator2"):
			return func_265();
			break;
		
		case joaat("imperator"):
			return func_265();
			break;
		
		case joaat("imperator2"):
			return func_265();
			break;
		
		case joaat("imperator3"):
			return func_265();
			break;
		
		case joaat("deathbike"):
			return func_265();
			break;
		
		case joaat("deathbike2"):
			return func_265();
			break;
		
		case joaat("deathbike3"):
			return func_265();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_265();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_28600)
			{
				return func_264();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_28950)
			{
				return func_264();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_28599)
			{
				return func_264();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_28949)
			{
				return func_264();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_28948)
			{
				return func_264();
			}
			break;
	}
	return 0;
}

bool func_264()
{
	return unk_0x95C5B896CB42B20E(1815791016);
}

bool func_265()
{
	return unk_0x95C5B896CB42B20E(1927191088);
}

bool func_266()
{
	return unk_0x95C5B896CB42B20E(2067165443);
}

bool func_267()
{
	return unk_0x95C5B896CB42B20E(-957277403);
}

bool func_268()
{
	return unk_0x95C5B896CB42B20E(210122941);
}

bool func_269()
{
	return unk_0x95C5B896CB42B20E(-1894522408);
}

bool func_270()
{
	return unk_0x95C5B896CB42B20E(1630677557);
}

int func_271(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_152())
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_152())
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 != func_152())
	{
		if (func_251(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_250(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_255(unk_0x460153A63B9477BC()) && (unk_0x442D6659150AF4B3(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0xB86B8E85030B1552(iParam0) && !unk_0x97AFEF6099069369(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_276(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_277()
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			if (iVar0 == Global_75654.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_75654.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_75654.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_75654.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_75654.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_75654.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_75654.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_75654.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_75654.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_75654.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_75654.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_75654.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_278()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

void func_279(int iParam0)
{
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && iParam0 == Global_76559)
	{
		Global_111858.f_32745.f_5588 = 0;
		Global_76559 = 0;
	}
}

int func_280(int iParam0, struct<4> Param1, var uParam2, var uParam3, struct<3> Param4, float fParam5, struct<4> Param6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param1 };
	Var1 = { Param1.f_3 };
	Var2 = { Param4 };
	Var3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = unk_0xA5D5B1042E8F47BD(iParam0, false);
		iLocal_178 = iVar4;
		unk_0xFC34FFD7661206B7(iLocal_178, 1);
		unk_0x5DC21979EC6C531F(iLocal_178, 1);
		unk_0xB11D151E210D4FAC(iLocal_178, 1084227584);
		unk_0xC160551F55D6365A(iLocal_178, true, true, 0);
		if (unk_0xE4B70EFD14220305(iParam0))
		{
			unk_0xB28186F95B71B19D(iParam0, 0, 0, -1);
			unk_0x6A4846EF125EA7E6(iParam0, 1);
		}
		Var5 = { unk_0x3E4D3CCC220BDFB1(iLocal_178, true) };
		fLocal_179 = (Var5.f_2 - Var0.f_2);
		unk_0x03D382CB0B44E2FC(iLocal_178, Var0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (unk_0x80FF6C016CDB0FAF(iLocal_178, 0))
		{
			unk_0x289D342D7C2DA52A(iLocal_178, 3);
		}
		iLocal_180 = unk_0x578C4EF320340AF7();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_178) && unk_0x80FF6C016CDB0FAF(iLocal_178, 0))
		{
			fVar6 = to_float(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_287(to_float(unk_0x578C4EF320340AF7()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_286(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_285(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_283(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			unk_0x779660A9E5364C4D(0, 72, 1);
			unk_0xCBF81D3222C77066(iLocal_178, func_281(Var0 + Vector(fLocal_179, 0f, 0f), Var2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
			if (iLocal_175 && !unk_0xE4B70EFD14220305(iParam0))
			{
				unk_0xC82085403E46A869(iLocal_178, func_281((0f - Var1.x), (0f - Var1.f_1), (Var1.f_2 + 180f), (0f - Var3.x), (0f - Var3.f_1), (Var3.f_2 + 180f), fVar6, fVar7, fVar8), 2, 1);
			}
			else
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
				{
					if (unk_0xE4B70EFD14220305(iParam0))
					{
						unk_0x8342E6CB98CD545C(iParam0, 236, true);
						unk_0x8342E6CB98CD545C(iParam0, 309, true);
					}
				}
				unk_0xC82085403E46A869(iLocal_178, func_281(Var1, Var3, fVar6, fVar7, fVar8), 2, 1);
			}
			unk_0x58ADF88C51AAFDC5(iLocal_178, false, 0);
			unk_0x6A8F948698B360B4(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (to_float(unk_0x578C4EF320340AF7()) > (to_float(iLocal_180) + fParam5) && to_float(unk_0x578C4EF320340AF7()) > ((to_float(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		unk_0x8342E6CB98CD545C(iParam0, 236, false);
		unk_0x8342E6CB98CD545C(iParam0, 309, false);
		if (unk_0xAE06B9E39EBDE049(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				unk_0x03D382CB0B44E2FC(iLocal_178, Param6, 1, false, 0, 1);
				unk_0xE922BAA80E8F9324(iLocal_178, Param6.f_3);
				unk_0xB11D151E210D4FAC(iLocal_178, 1084227584);
			}
			unk_0x58ADF88C51AAFDC5(iLocal_178, true, 0);
			unk_0x6A8F948698B360B4(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (unk_0xE4B70EFD14220305(iParam0))
		{
			unk_0x9EB88E485EDFD7EB(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_281(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4)
{
	return func_282(Param0.x, Param1.x, fParam2, fParam3, fParam4), func_282(Param0.f_1, Param1.f_1, fParam2, fParam3, fParam4), func_282(Param0.f_2, Param1.f_2, fParam2, fParam3, fParam4);
}

float func_282(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_283(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = sin(func_284(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_284(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_285(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - cos(func_284(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_286(float fParam0)
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - cos(func_284((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_287(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_288()
{
	Global_75654.f_553 = 1;
	Global_75654.f_554 = 0;
}

void func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_111858.f_32745.f_69[iVar1 /*78*/].f_66;
		if (iLocal_49[iVar2] != 0)
		{
			if (!unk_0xCE990E643CD9D0E5(uLocal_48[iVar2], 2))
			{
				unk_0x78FCB2E22C41B9D5(iLocal_49[iVar2]);
				unk_0xBE20AB8238688965(&(uLocal_48[iVar2]), 2);
				func_488(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_290()
{
	return !Global_75654.f_553;
}

void func_291(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_75654.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x272784C60C397DB6(Param0, Global_75654.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_292(iVar0);
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], true, 1);
				unk_0x03A2522C845CFAC6(&(Global_75654.f_139[iParam0]));
			}
		}
		Global_75654[iParam0] = 1;
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_76563.f_66 == 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] != 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] > 3) && (!func_293(0, Global_75654.f_555[0 /*21*/].f_12) || !func_293(1, Global_75654.f_555[0 /*21*/].f_12)))
			{
				func_116(&(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]), &Global_76563);
				Global_76641 = Global_111858.f_32745.f_5591;
			}
			func_490(iParam0, 0);
		}
	}
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_294(&(Global_111858.f_32745.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_294(var uParam0)
{
	return *uParam0;
}

void func_295(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[25]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[25], 0))
			{
				if (Global_75654.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x7A3E3E24F50F2AAB(iParam0) || unk_0x36FE6D3220816ADA(iParam0) == joaat("bus")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_296(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
			fParam2 = unk_0xEF7858F25585F853(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) != joaat("vehicle_gen_controller"))
			{
				Global_76642 = unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253());
			}
		}
		func_115(iParam3, &Var0, Param1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_296(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_117(iParam0);
	func_490(iParam0, 0);
}

int func_297(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_38(uParam0->f_66))
	{
		return 0;
	}
	if (unk_0xAE06B9E39EBDE049(Global_76560))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_293(0, iParam1))
	{
		Global_111858.f_32745.f_5592[iVar0] = 0;
	}
	else if (!func_293(1, iParam1))
	{
		Global_111858.f_32745.f_5592[iVar0] = 1;
	}
	func_298(iParam1, unk_0xBBF5A53C394969AA(uParam0->f_66));
	func_116(uParam0, &(Global_111858.f_32745.f_5038[iVar0 /*157*/][Global_111858.f_32745.f_5592[iVar0] /*78*/]));
	Global_111858.f_32745.f_5592[iVar0]++;
	if (Global_111858.f_32745.f_5592[iVar0] >= func_294(&(Global_111858.f_32745.f_5038[iVar0 /*157*/])))
	{
		Global_111858.f_32745.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_98359[iVar0 /*98*/] == uParam0->f_66 && unk_0xF005CCA4263DF67F(&(Global_98359[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_98359[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_298(int iParam0, char* sParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_111858.f_32745.f_5596[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_299("IMPOUND_HELPM", sParam1, 2, unk_0x344C570D6F8700DF(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_299("IMPOUND_HELPF", sParam1, 2, unk_0x344C570D6F8700DF(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_299("IMPOUND_HELPT", sParam1, 2, unk_0x344C570D6F8700DF(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_111858.f_32745.f_5596[iParam0] = 1;
	}
}

void func_299(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_300(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_300(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF005CCA4263DF67F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (unk_0x578C4EF320340AF7() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((unk_0x578C4EF320340AF7() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_301();
	}
}

void func_301()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_302(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_61(&(Global_75654.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_116(&(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

int func_303(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x40397A9A17EEC1C5(*uParam1))
	{
		unk_0xB8B0F7C8C1548C5B(*uParam1, 0);
	}
	if (unk_0x40397A9A17EEC1C5(*uParam2))
	{
		unk_0xB8B0F7C8C1548C5B(*uParam2, 0);
	}
	*uParam1 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", false);
	if (unk_0x40397A9A17EEC1C5(*uParam1) && unk_0x40397A9A17EEC1C5(*uParam2))
	{
		unk_0x8A3898631CCEC253(*uParam1, *uParam0);
		unk_0xBF92D2A60C7C686E(*uParam1, uParam0->f_3, 2);
		unk_0xD64C2E5B5BA2D347(*uParam1, uParam0->f_12);
		unk_0x8A3898631CCEC253(*uParam2, uParam0->f_6);
		unk_0xBF92D2A60C7C686E(*uParam2, uParam0->f_6.f_3, 2);
		unk_0xD64C2E5B5BA2D347(*uParam2, uParam0->f_12);
		unk_0x2311A669433389E8(*uParam1, "HAND_SHAKE", uParam0->f_13);
		unk_0x2311A669433389E8(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			unk_0xF674D9B2033F5F86(*uParam2, *uParam1, round((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			unk_0x856549C07003344B(*uParam1, true);
		}
		unk_0x3ED9330214992278(true, false, 3000, true, 0, 0);
		return 1;
	}
	return 0;
}

void func_304(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_309(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(false);
			}
			if (!func_78())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_308(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_309(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_308(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_306(unk_0x460153A63B9477BC())) && !func_93(unk_0x460153A63B9477BC(), 0)) && !func_305()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_306(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), false);
		}
		Global_76831 = 0;
	}
}

bool func_305()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_306(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return 1;
	}
	if (func_307())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_307()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_308(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_309(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

int func_310(int iParam0)
{
	func_61(&(Global_75654.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_75654.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_311(26))
			{
				return 26;
			}
			if (!func_311(29))
			{
				return 29;
			}
			if (!func_311(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_75654.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_311(27))
			{
				return 27;
			}
			if (!func_311(30))
			{
				return 30;
			}
			if (!func_311(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_75654.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_311(28))
			{
				return 28;
			}
			if (!func_311(31))
			{
				return 31;
			}
			if (!func_311(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_311(int iParam0)
{
	return func_67(iParam0, 0);
}

void func_312(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_314(iParam0, &iVar1);
	if (!unk_0xF005CCA4263DF67F("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xCDF28E2EBC4CBF45(iVar1))
			{
				return;
			}
			if (unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == iVar1)
			{
				func_241(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xCDF28E2EBC4CBF45(iVar1))
			{
				return;
			}
			if (func_313(iParam0))
			{
				func_241(iParam0, 0);
			}
		}
		unk_0x24F146C25451476B(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_313(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_242(iParam0) };
	if (Var0.f_1 != -1 && unk_0xCE990E643CD9D0E5(Global_37408[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_314(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_315(iParam0) };
	*iParam1 = unk_0xC519B5898C2310B1(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_315(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_316(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_316(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_316(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_316(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_316(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_316(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_316(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049924[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_316(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_316(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_316(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_316(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_316(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_316(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_316(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_316(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_316(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("MPSV_LP0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_316(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_316(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_316(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_316(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_316(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_316(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_316(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_316(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_316(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_316(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_316(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_316(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_316(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_316(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_316(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_316(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_316(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_316(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_316(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_316(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_316(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_316(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_316(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("MPSV_LP0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_317(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_314(iParam0, &iVar1);
	if (!unk_0xF005CCA4263DF67F("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0xE00660AF52DFC40D(iVar1))
		{
			if (unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == iVar1)
			{
				func_243(iParam0, 1);
				return;
			}
			unk_0xA637F4053D6308EF(iVar1, true);
		}
		else if (!bParam1 && unk_0xE00660AF52DFC40D(iVar1))
		{
			if (func_318(iParam0))
			{
				func_243(iParam0, 0);
			}
			unk_0xA637F4053D6308EF(iVar1, false);
		}
		else if (!bParam1)
		{
			if (func_318(iParam0))
			{
				func_243(iParam0, 0);
			}
		}
	}
}

int func_318(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_242(iParam0) };
	if (Var0.f_1 != -1 && unk_0xCE990E643CD9D0E5(Global_37400[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) || func_310(Local_56) != -1)
	{
		return 1;
	}
	return 0;
}

int func_320(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_322(int iParam0, var uParam1)
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_323()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

void func_324()
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_74030)
	{
		if (Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] != -15)
		{
			if (!Global_75654[Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]])
			{
				if (func_378(func_50(), Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[iLocal_143]))
				{
					iVar0 = Global_111858.f_32745.f_1982[iLocal_129 /*939*/][iLocal_143];
					func_376(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_313[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_490(Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_313[iLocal_143], 1);
					}
					Global_111858.f_32745.f_1982[iLocal_129 /*939*/].f_626[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			unk_0xD289B55B6AADBA10(1);
		}
		Local_56.f_7 = unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (unk_0xDABD547F0DF2906C())
			{
				unk_0xD289B55B6AADBA10(1);
			}
			unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
			if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
			{
				unk_0x856549C07003344B(Local_56.f_110, false);
				unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
			}
			if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
			{
				unk_0x856549C07003344B(Local_56.f_111, false);
				unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
			}
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), true, 0);
			unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				unk_0xD28B53FDA67841A1(unk_0x460153A63B9477BC(), 0);
			}
			iVar2 = unk_0xA5D3CD332CD10EE9();
			if (unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0))
			{
				unk_0x80250B8368A4E611(iVar2, true, 0);
				unk_0x6A8F948698B360B4(iVar2, false);
				if (unk_0x1D2A3118784C0272(iVar2, 1))
				{
					unk_0xE730EAF558C97567(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = unk_0x578C4EF320340AF7();
			while (!unk_0xC337F69A1938DDA2() && (unk_0x578C4EF320340AF7() - iVar4) < iVar3)
			{
				wait(0);
			}
			if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
			{
				unk_0x1F083D57FD823427(Local_56.f_112);
			}
			StringCopy(&Global_38353, "", 32);
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				func_317(47, 1);
				func_312(47, 1);
			}
			unk_0xF990EDED7D25FB88();
			unk_0x701364DD9F501826();
			unk_0x644F1D0C5427A242(true);
			unk_0x8CFF639CEFF5CF16(true);
			func_304(0, 1, 1, 0, 0, 0, 0);
			bLocal_142 = false;
			Global_31224 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0)) || (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) && !Local_56.f_29.f_69)) || (!unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()) && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))) || (!bLocal_142 && func_67(Local_56, 5))) || (!bLocal_142 && unk_0x1BD7199394D7F19A(2, 199))) || (!bLocal_142 && unk_0xF0C12886E5C1B20E())) || !func_374(0)) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xDB9E558E914A4D5C(unk_0x9B0761B4C3EB8BC7())) || unk_0x6B2416FE78DA9A2D(unk_0x9B0761B4C3EB8BC7())) || Global_31118) || (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) && unk_0xC0736D5851285045(unk_0x9B0761B4C3EB8BC7())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56 != -1 && func_67(Local_56, 0)) && !func_67(Local_56, 5)) && !bLocal_158) && !bVar5)
			{
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29, Local_56.f_29.f_3, Local_56.f_29.f_6, 0, true, 0) && !unk_0xDABD547F0DF2906C())
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_01", 16);
					func_230(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_225(Local_56.f_5, 1))
			{
				if (func_373(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0x578C4EF320340AF7();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = unk_0x578C4EF320340AF7();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_02", 16);
				func_230(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_225(Local_56.f_5, 1))
			{
				if (func_373(iLocal_129) < Local_56.f_29.f_67)
				{
					Local_56.f_4 = unk_0x578C4EF320340AF7();
					Local_56.f_2 = 90;
				}
				else
				{
					unk_0xC4CC25B68A91D144(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56 == 15 || Local_56 == 17) || Local_56 == 16)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if (Local_56 == 18 || Local_56 == 19)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					else if (Local_56 == 12 || Local_56 == 13)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_57.f_4 = 117;
						bLocal_142 = true;
					}
					Local_57 = unk_0x5DEA4192B46CB99B("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_31224 = 1;
					if (bLocal_142)
					{
						if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
						{
							func_317(47, 0);
							func_312(47, 0);
							Local_56.f_112 = unk_0xC519B5898C2310B1(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
							{
								if (!unk_0xEF928B5F0219FDF7(Local_56.f_112))
								{
									unk_0x05549C0F30BB285D(Local_56.f_112);
								}
								StringCopy(&Global_38353, "v_garagem_sp", 32);
							}
						}
						unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), true);
						unk_0xF990EDED7D25FB88();
						Local_56.f_4 = unk_0x578C4EF320340AF7();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				Local_56.f_112 = unk_0xC519B5898C2310B1(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0x0B1B45E748AD48BA(Local_56.f_112) || unk_0xE00660AF52DFC40D(Local_56.f_112)) || unk_0xCDF28E2EBC4CBF45(Local_56.f_112))
				{
					func_317(47, 0);
					func_312(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				Var9 = { cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					if (unk_0xF16CDD1D05F4411A(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x578C4EF320340AF7() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = unk_0x578C4EF320340AF7();
						Local_56.f_2 = 5;
					}
				}
				else if (unk_0x73287EF8736B0258(Local_56.f_29.f_14, Var9, fVar7, iVar8) || (unk_0x578C4EF320340AF7() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = unk_0x578C4EF320340AF7();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0xE9159DB182CF0841() && unk_0x0C7F95EB5CFEFB8B()) && (!unk_0x0B1B45E748AD48BA(Local_56.f_112) || unk_0xEF928B5F0219FDF7(Local_56.f_112))) || (unk_0x578C4EF320340AF7() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = unk_0x578C4EF320340AF7();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x578C4EF320340AF7() - Local_56.f_4) > 1000)
			{
				if ((unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x1758275D343D5BA3(iLocal_168)) && unk_0x1D2A3118784C0272(iLocal_168, 1))
				{
					unk_0xE730EAF558C97567(&iLocal_168);
				}
				iLocal_168 = unk_0xA5D3CD332CD10EE9();
				if ((((unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x80FF6C016CDB0FAF(iLocal_168, 0)) && !unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(iLocal_168))) && !unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(iLocal_168))) && !unk_0x5874D60325749F00(unk_0x36FE6D3220816ADA(iLocal_168)))
				{
					if (!unk_0x1758275D343D5BA3(iLocal_168))
					{
						unk_0x4F3C4F457D44BB0F(iLocal_168, false, 0);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), false, 0);
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), true);
				}
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 16);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 32);
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 128);
					unk_0xD28B53FDA67841A1(unk_0x460153A63B9477BC(), 1);
				}
				func_304(1, 1, 1, 0, 0, 0, 0);
				unk_0xB80B2936A29B2666();
				unk_0xD289B55B6AADBA10(1);
				Var9 = { cos((Local_56.f_29.f_14.f_3.f_2 + 90f)), sin((Local_56.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_29.f_69)
				{
					unk_0xE8B1D4190AF4EE5A(Local_56.f_29.f_14, Var9);
				}
				if (!unk_0x40397A9A17EEC1C5(Local_56.f_110))
				{
					Local_56.f_110 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0xE5BA4356D796BAD0("GtaMloRoom001");
					}
					func_304(1, 1, 1, 0, 0, 0, 0);
					func_303(&(Local_56.f_29.f_14), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x3ED9330214992278(true, false, 3000, true, 0, 0);
				unk_0x644F1D0C5427A242(false);
				unk_0x8CFF639CEFF5CF16(false);
				unk_0xF990EDED7D25FB88();
				Local_56.f_2 = 7;
				Local_56.f_4 = unk_0x578C4EF320340AF7();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x578C4EF320340AF7() - Local_56.f_4) < 7000 && !func_371(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_05", 16);
				func_228(&Var6, -1);
				if (!unk_0xE9159DB182CF0841())
				{
					if (Local_56 == 12 || Local_56 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					Var9 = { cos((Local_56.f_29.f_29.f_2 + 90f)), sin((Local_56.f_29.f_29.f_2 + 90f)), 0f };
					unk_0x73287EF8736B0258(Local_56.f_29.f_29, Var9, fVar7, iVar8);
				}
			}
			else
			{
				if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
				{
					if (Local_56.f_29.f_69)
					{
						unk_0xE5BA4356D796BAD0("GtaMloRoom001");
					}
					func_304(1, 1, 1, 0, 0, 0, 0);
					func_303(&(Local_56.f_29.f_29), &(Local_56.f_110), &(Local_56.f_111));
				}
				unk_0x701364DD9F501826();
				unk_0xD289B55B6AADBA10(1);
				Local_56.f_4 = unk_0x578C4EF320340AF7();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x578C4EF320340AF7() - Local_56.f_4) < 7000 && !func_371(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_06", 16);
				if (!unk_0xDABD547F0DF2906C())
				{
					func_228(&Var6, 7000);
				}
			}
			else
			{
				unk_0xD289B55B6AADBA10(1);
				Local_56.f_4 = unk_0x578C4EF320340AF7();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x578C4EF320340AF7() - Local_56.f_4) < 3500 && !func_371(1000))
			{
				Var6 = { Local_56.f_29.f_63 };
				StringConCat(&Var6, "_03", 16);
				if (unk_0x95EF219D38B20CFF(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0xC4CC25B68A91D144(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						unk_0x37FC7E88C7659D33(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x830F007E19C63E14(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_91(&Var6);
						unk_0xF4712E16A4C164FE();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((unk_0x578C4EF320340AF7() - Local_56.f_4) < 4000 && !func_371(1000))
			{
				if (unk_0x95EF219D38B20CFF(Local_57))
				{
					if (Local_57.f_2)
					{
						unk_0x37FC7E88C7659D33(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x830F007E19C63E14(Local_57, "SHARD_ANIM_OUT");
						unk_0xAD291B8F75D737AD(1);
						unk_0x49B9B8101B158AEE(0.33f);
						unk_0xE1FDD153F5858534();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
					if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
					{
						unk_0x856549C07003344B(Local_56.f_110, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
					}
					if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
					{
						unk_0x856549C07003344B(Local_56.f_111, false);
						unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
					}
					unk_0x4C4FC7841A5FB983(0f);
					unk_0x7965943E39128B42(0f, 1065353216);
					unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), true, 0);
					unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
					iVar11 = unk_0xA5D3CD332CD10EE9();
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
						unk_0xD28B53FDA67841A1(unk_0x460153A63B9477BC(), 0);
						if ((unk_0xAE06B9E39EBDE049(iVar11) && unk_0x80FF6C016CDB0FAF(iVar11, 0)) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iVar11, false))
						{
							unk_0x03D382CB0B44E2FC(iVar11, Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0xE922BAA80E8F9324(iVar11, Local_56.f_29.f_47);
							unk_0xB11D151E210D4FAC(iVar11, 1084227584);
						}
						else
						{
							unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_44, 1, true, 0, 1);
							unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), Local_56.f_29.f_47);
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_168) && unk_0x80FF6C016CDB0FAF(iLocal_168, 0))
					{
						iVar12 = func_49(24);
						if (func_302(&Local_141, 24))
						{
							func_297(&Local_141, func_484());
							if (unk_0xAE06B9E39EBDE049(iVar12))
							{
								unk_0x03A2522C845CFAC6(&iVar12);
							}
						}
						if (Local_56 == 21)
						{
							unk_0x555EE41D7C7078E6(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							unk_0x03D382CB0B44E2FC(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_168, 154.4846f);
							func_295(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56 == 22)
						{
							unk_0x555EE41D7C7078E6(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							unk_0x03D382CB0B44E2FC(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_168, 319.6985f);
							func_295(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56 == 23)
						{
							unk_0x555EE41D7C7078E6(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							unk_0x03D382CB0B44E2FC(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_168, 270.8741f);
							func_295(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xB11D151E210D4FAC(iLocal_168, 1084227584);
					}
					if (unk_0xAE06B9E39EBDE049(iVar11) && unk_0x80FF6C016CDB0FAF(iVar11, 0))
					{
						unk_0x80250B8368A4E611(iVar11, true, 0);
						unk_0x6A8F948698B360B4(iVar11, false);
						if (unk_0x1D2A3118784C0272(iVar11, 1))
						{
							unk_0xE730EAF558C97567(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = unk_0x578C4EF320340AF7();
					while (!unk_0xC337F69A1938DDA2() && (unk_0x578C4EF320340AF7() - iVar14) < iVar13)
					{
						wait(0);
					}
					if (unk_0x0B1B45E748AD48BA(Local_56.f_112))
					{
						unk_0x1F083D57FD823427(Local_56.f_112);
					}
					StringCopy(&Global_38353, "", 32);
					if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						func_317(47, 1);
						func_312(47, 1);
						Global_111858.f_32745.f_4800 = 1;
					}
					unk_0xF990EDED7D25FB88();
					unk_0x701364DD9F501826();
					unk_0x644F1D0C5427A242(true);
					unk_0x8CFF639CEFF5CF16(true);
					func_304(0, 1, 1, 0, 0, 0, 0);
					bLocal_142 = false;
					Global_31224 = 0;
				}
				if (unk_0x95EF219D38B20CFF(Local_57))
				{
					unk_0x2E352DDBBF674246(&Local_57);
				}
				func_341(iLocal_129, Local_57.f_4, Local_56.f_29.f_67);
				func_340(Local_56, 5, 1);
				func_327(Local_56);
				if (unk_0x8F678487EEBD8CE4(Global_75654.f_208[Local_56]))
				{
					unk_0x93370FA10F15BE44(&(Global_75654.f_208[Local_56]));
				}
				iLocal_151 = Local_56;
				func_326();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((unk_0x578C4EF320340AF7() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_29.f_63 };
					StringConCat(&Var6, "_04", 16);
					func_325(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_325(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

int func_326()
{
	if (func_238(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

void func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_339(iVar0, 0);
	iVar2 = func_338(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_337(iVar0);
		if (func_335(iVar0, iVar1, 1))
		{
			func_328(iVar0);
			func_337(iVar0);
		}
	}
}

void func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_52120[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_52120[iVar0 /*203*/].f_10[(Global_52120[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_52120[iVar0 /*203*/].f_9 - 1);
	if (!Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_333(Global_42820[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_329(1, Global_42820[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42820[iVar1 /*12*/].f_3)
		{
			case 0:
				func_329(0, Global_42820[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_329(1, Global_42820[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_329(2, Global_42820[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_52120[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_329(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x3EBB66F936A3436E())
	{
		return;
	}
	iVar0 = func_484();
	bVar1 = false;
	StringCopy(&cVar2, func_332(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x5B8DD855EAFD33B5("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x5B8DD855EAFD33B5("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x5B8DD855EAFD33B5("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x5B8DD855EAFD33B5(sParam3);
				if (!unk_0x7BCC91F3C1CF24E8(sParam4))
				{
					unk_0x6A826E35A3096ED0(sParam4);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam5))
				{
					unk_0x6A826E35A3096ED0(sParam5);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam6))
				{
					unk_0x6A826E35A3096ED0(sParam6);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam7))
				{
					unk_0x6A826E35A3096ED0(sParam7);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					unk_0x6A826E35A3096ED0(sParam8);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam9))
				{
					unk_0x6A826E35A3096ED0(sParam9);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam10))
				{
					unk_0x6A826E35A3096ED0(sParam10);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam11))
				{
					unk_0x6A826E35A3096ED0(sParam11);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam12))
				{
					unk_0x6A826E35A3096ED0(sParam12);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam13))
				{
					unk_0x6A826E35A3096ED0(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_330(unk_0x39E1440587355CC1(&cVar2, &cVar2, 0, 2, unk_0x7C774D8CB8DC6FE3(func_331(iParam1)), 0));
		}
		else
		{
			func_330(unk_0x39E1440587355CC1("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x7C774D8CB8DC6FE3(func_331(iParam1)), 0));
		}
		switch (Global_19681)
		{
			case 0:
				StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
				Global_42812++;
				if (Global_42812 > 16)
				{
					Global_42812 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
				Global_42814++;
				if (Global_42814 > 16)
				{
					Global_42814 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
				Global_42813++;
				if (Global_42813 > 16)
				{
					Global_42813 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC4CC25B68A91D144(-1, "Notification", &Global_19670, true);
	}
}

void func_330(int iParam0)
{
	Global_42815[Global_42819] = iParam0;
	Global_22063 = 1;
	Global_22062 = iParam0;
	Global_42819++;
	if (Global_42819 == 3)
	{
		Global_42819 = 0;
	}
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_332(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[0 /*29*/].f_7));
		
		case 1:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[1 /*29*/].f_7));
		
		case 2:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[2 /*29*/].f_7));
		
		case 7:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[12 /*29*/].f_7));
		
		case 4:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[60 /*29*/].f_7));
		
		case 6:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[62 /*29*/].f_7));
		
		case 3:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[14 /*29*/].f_7));
		
		case 16:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[97 /*29*/].f_7));
		
		case 19:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[99 /*29*/].f_7));
		
		case 15:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[15 /*29*/].f_7));
		
		case 26:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[30 /*29*/].f_7));
		
		case 27:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[17 /*29*/].f_7));
		
		case 29:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[20 /*29*/].f_7));
		
		case 30:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[43 /*29*/].f_7));
		
		case 31:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[44 /*29*/].f_7));
		
		case 32:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[19 /*29*/].f_7));
		
		case 34:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[40 /*29*/].f_7));
		
		case 36:
			return unk_0x7C774D8CB8DC6FE3("CELL_E_381");
		
		case 38:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[122 /*29*/].f_7));
		
		case 40:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[125 /*29*/].f_7));
		
		case 41:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[113 /*29*/].f_7));
		
		case 42:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[126 /*29*/].f_7));
		
		case 43:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[127 /*29*/].f_7));
		
		case 44:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[124 /*29*/].f_7));
		
		case 45:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[114 /*29*/].f_7));
		
		case 46:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[115 /*29*/].f_7));
		
		case 47:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[116 /*29*/].f_7));
		
		case 48:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[123 /*29*/].f_7));
		
		case 49:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[117 /*29*/].f_7));
		
		case 50:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[118 /*29*/].f_7));
		
		case 51:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[119 /*29*/].f_7));
		
		case 52:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[120 /*29*/].f_7));
		
		case 53:
			return unk_0x7C774D8CB8DC6FE3(&(Global_1848[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_333(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_52120[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_52120[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_52120[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_335(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_339(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_52120[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_52120[iVar0 /*203*/].f_2 = iParam0;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_52120[iVar0 /*203*/].f_10[Global_52120[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_52120[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52120[iVar0 /*203*/].f_4[iVar1] == Global_42820[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52120[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52120[iVar0 /*203*/].f_4[Global_52120[iVar0 /*203*/].f_3] = Global_42820[iParam1 /*12*/].f_3;
			Global_52120[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52120[iVar0 /*203*/].f_4[iVar1] == Global_42820[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52120[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52120[iVar0 /*203*/].f_4[Global_52120[iVar0 /*203*/].f_3] = Global_42820[iParam1 /*12*/].f_2;
			Global_52120[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_52120[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_52120[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_336(Global_52120[iVar0 /*203*/].f_4[iVar1], Global_52120[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_336(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_46145[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_46145[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_333(Global_42820[iVar5 /*12*/].f_1) };
		if (Global_42820[iVar5 /*12*/].f_2 == iParam0 && !Global_42820[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42820[iVar5 /*12*/].f_2;
		iVar0 = Global_51758[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_51758[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42812 = (Global_42812 - 1);
						if (Global_42812 < 0)
						{
							Global_42812 = 0;
						}
						break;
					
					case 1:
						Global_42813 = (Global_42813 - 1);
						if (Global_42813 < 0)
						{
							Global_42813 = 0;
						}
						break;
					
					case 2:
						Global_42814 = (Global_42814 - 1);
						if (Global_42814 < 0)
						{
							Global_42814 = 0;
						}
						break;
					}
				}
		}
		Global_51758[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51758[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_51758[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51758[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51758[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_51758[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42812 = (Global_42812 - 1);
						if (Global_42812 < 0)
						{
							Global_42812 = 0;
						}
						break;
					
					case 1:
						Global_42813 = (Global_42813 - 1);
						if (Global_42813 < 0)
						{
							Global_42813 = 0;
						}
						break;
					
					case 2:
						Global_42814 = (Global_42814 - 1);
						if (Global_42814 < 0)
						{
							Global_42814 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_52120[iVar9 /*203*/].f_1 == iParam1 && Global_52120[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_51758[iParam0 /*120*/].f_18[iVar0] = Global_52120[iVar8 /*203*/].f_1;
		Global_51758[iParam0 /*120*/].f_1[iVar0] = (Global_52120[iVar8 /*203*/].f_9 - 1);
		Global_51758[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51758[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51758[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51758[iParam0 /*120*/]++;
		iVar10 = Global_51758[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_52120[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_42820[iVar11 /*12*/].f_2;
		if (Global_52120[iVar8 /*203*/].f_10[(Global_52120[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_52120[iVar8 /*203*/].f_10[(Global_52120[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_333(Global_42820[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51758[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_329(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_329(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_329(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_329(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_337(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_111858.f_24982, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_52120[iVar0 /*203*/] = 0;
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_53542 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52120[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_52120[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_52120[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_53543[iVar1 /*53*/].f_52 == 0)
		{
			Global_53543[iVar1 /*53*/].f_52 = iVar0;
			Global_53543[iVar1 /*53*/] = iParam0;
			Global_53543[iVar1 /*53*/].f_1 = iParam1;
			Global_53543[iVar1 /*53*/].f_2 = iParam2;
			Global_111858.f_21033.f_310++;
			if (Global_111858.f_21033.f_310 == 0)
			{
				Global_111858.f_21033.f_310 = 1;
			}
			Global_53543[iVar1 /*53*/].f_10 = 0;
			Global_53543[iVar1 /*53*/].f_3 = Global_111858.f_21033.f_310;
			Global_53543[iVar1 /*53*/].f_4 = 1;
			Global_53542++;
			return Global_53543[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_339(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_334(iParam0);
	if (iVar0 > -1)
	{
		if (Global_52120[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52120[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52120[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_52120[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_52120[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_52120[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_52120[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_52120[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51758[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51758[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51758[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51758[iVar6 /*120*/].f_18[iVar8] == Global_52120[iVar4 /*203*/].f_1)
							{
								if (Global_51758[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42812 = (Global_42812 - 1);
											break;
										
										case 1:
											Global_42813 = (Global_42813 - 1);
											break;
										
										case 2:
											Global_42814 = (Global_42814 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_52120[iVar4 /*203*/].f_2 = iParam0;
	Global_52120[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_52120[iVar4 /*203*/] = 1;
	}
	Global_111858.f_21033.f_310++;
	if (Global_111858.f_21033.f_310 == 0)
	{
		Global_111858.f_21033.f_310 = 1;
	}
	Global_52120[iVar4 /*203*/].f_1 = Global_111858.f_21033.f_310;
	Global_52120[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_340(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_32745[iParam0]), iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_32745[iParam0]), iParam1);
	}
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	if (func_370(iParam0) == 3)
	{
		return 0;
	}
	if (func_370(iParam0) == 4)
	{
		return 0;
	}
	return func_342(func_370(iParam0), 0, iParam1, iParam2, 0);
}

int func_342(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_369();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_368(99, 1);
					func_367(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_367(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_367(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_352(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_351(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_367(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_367(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_367(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_351(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_367(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_367(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_367(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_367(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_367(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_367(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_367(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_367(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_367(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x02406178CDC27728())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_367(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_367(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_367(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_367(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_367(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_367(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_351(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_367(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_367(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_367(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_367(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_367(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_367(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_350(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_368(95, iParam3);
					break;
				
				case 1:
					func_368(97, iParam3);
					break;
				
				case 2:
					func_368(96, iParam3);
					break;
			}
			func_368(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_345(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_345(iVar1);
	}
	iVar5 = (Global_58891[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_367(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_367(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_367(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_344(iParam0);
	if (Global_41631 == 15)
	{
		func_343(0);
	}
	return 1;
}

void func_343(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x6000E4684CB4330B(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			unk_0x6000E4684CB4330B(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			unk_0x6000E4684CB4330B(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_345(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_349(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_349(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_349(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_349(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_348(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_348(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_348(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_348(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_348(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_348(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_347() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_347() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_346(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_347()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_169(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_349(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_95();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_350(int iParam0)
{
	func_368(93, iParam0);
	func_368(29, iParam0);
	func_368(30, iParam0);
}

bool func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_180(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_180(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_180(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_180(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_168(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_168(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_168(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_168(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_168(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_168(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_347() /*10931*/].f_6175.f_10, iParam0);
}

int func_352(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x027BA2E902FAC118(27))
	{
		return 0;
	}
	if (unk_0xD2F202166691EDB2(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD2F202166691EDB2(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x6000E4684CB4330B(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_366(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_353(27, 1);
	return 1;
}

int func_353(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_354(iParam0, iParam1);
}

int func_354(int iParam0, int iParam1)
{
	if (func_27(14) && !func_365(iParam0))
	{
		return 0;
	}
	if (unk_0x027BA2E902FAC118(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_364(&Global_4271324))
	{
		if (func_362(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_355(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x1C382E0E92F57545(iParam0))
		{
			return 0;
		}
		if (unk_0x027BA2E902FAC118(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_355(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_365(iParam1))
	{
		return 0;
	}
	if (func_362(uParam0, iParam1))
	{
		return 0;
	}
	if (func_361(uParam0) < 0f)
	{
		func_360(uParam0, 0);
	}
	func_358(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_356(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_356(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_365(iParam1))
	{
		return 0;
	}
	if (func_362(uParam0, iParam1))
	{
		return 0;
	}
	if (func_361(uParam0) < 0f)
	{
		func_360(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_357(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_357(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_359(uParam0, iVar0);
		iVar0++;
	}
	func_360(uParam0, (Global_4271323 - 0.5f));
}

void func_359(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_360(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_361(var uParam0)
{
	return uParam0->f_80;
}

bool func_362(var uParam0, int iParam1)
{
	return func_363(uParam0, iParam1) != -1;
}

int func_363(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_364(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

void func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_368(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x6000E4684CB4330B(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_369()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_370(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_371(int iParam0)
{
	if (unk_0x87F0CB19476706C3())
	{
		if ((unk_0x578C4EF320340AF7() - Global_28) > iParam0)
		{
			Global_27 = unk_0x578C4EF320340AF7();
		}
		Global_28 = unk_0x578C4EF320340AF7();
		if ((unk_0x578C4EF320340AF7() - Global_27) > iParam0)
		{
			if (func_372())
			{
				Global_27 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
	}
	return 0;
}

int func_372()
{
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x1BD7199394D7F19A(0, 18) || unk_0x1BD7199394D7F19A(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_374(int iParam0)
{
	return func_375(iParam0, Global_41631);
}

int func_375(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_484();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_131(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_335(iVar0, iVar1, 1))
	{
		func_377(iVar0, sVar3);
		func_328(iVar0);
		func_337(iVar0);
	}
}

void func_377(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_52120[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_52120[iVar0 /*203*/].f_10[(Global_52120[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_52120[iVar0 /*203*/].f_10[(Global_52120[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_52120[iVar0 /*203*/].f_10[(Global_52120[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_52120[iVar0 /*203*/].f_10[(Global_52120[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_383(iParam1) || !func_383(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_381(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_382(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_384()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	struct<3> Var20;
	int iVar21;
	
	iVar0 = 0;
	if (unk_0x7B70881748D166CD(joaat("startup_positioning")) == 0)
	{
		if (Global_111858.f_32745.f_5588)
		{
			if (!unk_0xAE06B9E39EBDE049(Global_76559))
			{
				func_297(&(Global_111858.f_32745.f_5510), Global_111858.f_32745.f_5590);
				Global_111858.f_32745.f_5588 = 0;
			}
			else if (!unk_0x80FF6C016CDB0FAF(Global_76559, 0) || func_47(Global_76559, Global_111858.f_32745.f_5590, 1))
			{
				Global_111858.f_32745.f_5588 = 0;
			}
			else
			{
				if ((unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) && unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false) == Global_76559) && func_411(unk_0x9B0761B4C3EB8BC7()) != Global_111858.f_32745.f_5590)
				{
					Global_111858.f_32745.f_5590 = func_411(unk_0x9B0761B4C3EB8BC7());
				}
				if (Global_76559 != iLocal_128)
				{
					sVar2 = unk_0x9ABE4851D274FD5D(Global_76559, &uVar1);
					if (!unk_0x7BCC91F3C1CF24E8(sVar2))
					{
						if (unk_0x856D5567211886A2(sVar2) == unk_0x856D5567211886A2("vehicle_gen_controller"))
						{
							Global_111858.f_32745.f_5588 = 0;
							iLocal_169 = Global_76559;
							if (Global_75654.f_139[24] == Global_76559 || (Global_76560 == Global_76559 && Global_76561 == 24))
							{
								func_410(458, 24, -1, 1);
							}
							else
							{
								func_410(458, 0, -1, 1);
							}
							Global_76559 = 0;
						}
					}
				}
				if (((Global_111858.f_32745.f_5590 != func_484() && Global_98359[Global_111858.f_32745.f_5590 /*98*/] == Global_111858.f_32745.f_5510.f_66) && unk_0xF005CCA4263DF67F(&(Global_98359[Global_111858.f_32745.f_5590 /*98*/].f_27), &(Global_111858.f_32745.f_5510.f_1))) && !unk_0x9CC4D06F5338CA6B())
				{
					func_116(&(Global_111858.f_32745.f_5510), &(Global_111858.f_32745.f_5600[Global_111858.f_32745.f_5590 /*78*/]));
					Global_111858.f_32745.f_5588 = 0;
					iLocal_169 = 0;
					func_410(458, 0, -1, 1);
					Global_76559 = 0;
				}
			}
		}
		else if ((unk_0xAE06B9E39EBDE049(Global_76559) && unk_0x80FF6C016CDB0FAF(Global_76559, 0)) && !func_47(Global_76559, Global_111858.f_32745.f_5590, 1))
		{
			Global_111858.f_32745.f_5588 = 1;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_169) && unk_0x80FF6C016CDB0FAF(iLocal_169, 0))
		{
			if (((!Global_111858.f_32745.f_5588 && iLocal_169 != Global_76559) && iLocal_169 != iLocal_170) && !unk_0x1D2A3118784C0272(iLocal_169, 1))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_410(458, 0, -1, 1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_410(458, 0, -1, 1);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_170) && unk_0x80FF6C016CDB0FAF(iLocal_170, 0))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_76563.f_66 != 0 && Global_76560 == 0)
	{
		func_297(&Global_76563, Global_76641);
		Global_76563.f_66 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var3, Var4, fVar5, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_409(iLocal_129))
	{
		if (!unk_0x8F678487EEBD8CE4(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				iLocal_145 = func_407(428.37f, -1013.5f, 27.93f, 0);
				unk_0xE7B8403ABCA0391D(iLocal_145, 225);
				unk_0xB023F5C66F5716C7(iLocal_145, "IMPOUND_BLIPNAME");
				unk_0x91136D871CEAF8CC(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x93370FA10F15BE44(&iLocal_145);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(iLocal_145))
	{
		unk_0x93370FA10F15BE44(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					if (func_409(iLocal_129))
					{
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var3, Var4, fVar5, 0, true, 0))
						{
							if (func_373(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_293(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_230(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_230(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_228("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_226(0, -1, 0))
			{
				if (func_225(iLocal_125, 1))
				{
					func_69(&iLocal_125);
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					func_406();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_293(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						iLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_293(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									Var11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_390(&iLocal_128, iVar10, Var11, 179.24f, 1))
								{
									wait(0);
								}
								if (unk_0xAE06B9E39EBDE049(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_389(18, 1, 0);
									}
									else
									{
										func_389(19, 1, 0);
									}
									if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
									{
										unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
									}
									func_341(iLocal_129, 119, 250);
									func_388(iVar10);
									func_31(iLocal_128, func_484());
									func_71(1, -1);
									iLocal_124 = 3;
									func_69(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_484())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_406();
			if (!iLocal_116 || iLocal_117)
			{
				func_223(0, 0);
				func_222(1, 1, 0, 0, 0);
				func_221(1, 2, 1, 1, 1);
				func_220("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_293(iVar14, iLocal_129))
					{
						func_135(iVar15, unk_0xBBF5A53C394969AA(Global_111858.f_32745.f_5038[iVar12 /*157*/][iVar14 /*78*/].f_66), 0, 1, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						unk_0xBE20AB8238688965(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_135(iVar15, "IMPOUND_COST", 1, 1, 0, 0);
						func_387(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_127(iLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0xF8EDFF98A9C94C74())
				{
					if (unk_0x3430895AB97DE4F3(2))
					{
						unk_0x779660A9E5364C4D(0, 1, 1);
						unk_0x779660A9E5364C4D(0, 2, 1);
						unk_0x047901495C0572C0(0, 237, 1);
						unk_0x047901495C0572C0(0, 238, 1);
						unk_0x047901495C0572C0(0, 241, 1);
						unk_0x047901495C0572C0(0, 242, 1);
						func_124(0, 0, 0, 1);
						func_123(0, -1, 1);
						if (func_122())
						{
							if (Global_4269756 != iLocal_121)
							{
								unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_121 = Global_4269756;
								func_127(iLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x1BD7199394D7F19A(2, 188) || unk_0x1BD7199394D7F19A(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar16 = (iLocal_121 - 1);
						while (iVar16 >= 0)
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = true;
								iVar16 = 0;
							}
							iVar16 = (iVar16 + -1);
						}
						if (!bVar17)
						{
							iVar16 = 31;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (unk_0xCE990E643CD9D0E5(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = true;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + -1);
							}
						}
						if (bVar17)
						{
							func_127(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x1BD7199394D7F19A(2, 187) || unk_0x1BD7199394D7F19A(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 31)
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = true;
								iVar18 = 31;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0;
							while (iVar18 <= (iLocal_121 - 1))
							{
								if (unk_0xCE990E643CD9D0E5(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = true;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_127(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xC4CC25B68A91D144(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_121("IMPOUND_CNF", 0, 0);
						func_120(-1);
						func_119(201, "ITEM_YES", -1);
						func_119(202, "ITEM_NO", -1);
						iLocal_118 = 1;
					}
					else
					{
						if (iLocal_121 == 0)
						{
							Var20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_293(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_390(&iLocal_128, iLocal_123[iLocal_121], Var20, 179.24f, 1))
							{
								wait(0);
							}
							if (unk_0xAE06B9E39EBDE049(iLocal_128))
							{
								if (iLocal_121 == 0)
								{
									func_389(18, 1, 0);
								}
								else
								{
									func_389(19, 1, 0);
								}
								if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
								{
									unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
								}
								func_341(iLocal_129, 119, 250);
								func_388(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_484());
								func_71(1, -1);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 202) || unk_0xC27AEE8B64EE0F8D(2, 238))
				{
					unk_0xC4CC25B68A91D144(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			unk_0xA86915034F55A3BF();
			if (iLocal_119)
			{
				func_121("", 0, 0);
				func_120(-1);
				func_119(201, "ITEM_SELECT", -1);
				func_119(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_226(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			break;
		
		case 3:
			if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_386())
			{
				func_31(iLocal_128, func_484());
				iLocal_124 = 99;
			}
			else if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_128))
				{
					if (!unk_0xA59F96B50B97E63C(iLocal_128, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_128, false) && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_128, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), true) > 100f)
						{
							if (!unk_0xA38BFCB05DBE439D(iLocal_128))
							{
								func_385(iLocal_128, 1, 145);
								unk_0x03A2522C845CFAC6(&iLocal_128);
								unk_0xF27E737981AFB47D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_128, false))
						{
							unk_0xF27E737981AFB47D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(iLocal_128, func_484());
							iLocal_124 = 99;
						}
					}
					else
					{
						unk_0xF27E737981AFB47D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					unk_0xF27E737981AFB47D(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
			}
			func_69(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			func_389(18, 0, 0);
			func_389(19, 0, 0);
			if (unk_0xAE06B9E39EBDE049(iLocal_128))
			{
				unk_0xE730EAF558C97567(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!iLocal_127)
			{
				func_389(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_389(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_385(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x9ABE4851D274FD5D(iParam0, &uVar0);
		if (!unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			if (unk_0x856D5567211886A2(sVar1) == unk_0x856D5567211886A2("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_386()
{
	if (unk_0x01C55C66D4B126EF(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x01C55C66D4B126EF(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x01C55C66D4B126EF(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x01C55C66D4B126EF(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_387(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22550.f_5222 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 >= 4)
	{
		return;
	}
	if (Global_22550.f_5744 != 1)
	{
		return;
	}
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		return;
	}
	Global_22550.f_3918[Global_22550.f_5222] = iParam0;
	Global_22550.f_5222++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 2;
	Global_22550.f_5743++;
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_130();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_109(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22550.f_5068[(Global_22550.f_5219 - 1)])
		{
			Global_22550.f_5068[(Global_22550.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22550.f_5743 >= Global_22550.f_5741)
		{
			fVar3 = func_129();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

void func_388(int iParam0)
{
	int iVar0;
	
	switch (func_484())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_294(&(Global_111858.f_32745.f_5038[iVar0 /*157*/])))
	{
		return;
	}
	Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

void func_389(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_40754[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xCE990E643CD9D0E5(Global_40754[iParam0 /*31*/].f_1, 1))
			{
				Global_40754[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_40754[iParam0 /*31*/].f_22 = 1f;
			}
			unk_0xCCD157619BAD6BE2(Global_40754[iParam0 /*31*/], Global_40754[iParam0 /*31*/].f_22, false, false);
			unk_0xDC5C33A98881772F(Global_40754[iParam0 /*31*/], 1, false, true);
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_40754[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_40754[iParam0 /*31*/].f_22 = 0f;
			unk_0xCCD157619BAD6BE2(Global_40754[iParam0 /*31*/], Global_40754[iParam0 /*31*/].f_22, false, false);
			unk_0xDC5C33A98881772F(Global_40754[iParam0 /*31*/], 1, false, true);
		}
	}
}

int func_390(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_293(iParam1, func_484()) || unk_0xAE06B9E39EBDE049(*iParam0))
	{
		return 0;
	}
	switch (func_484())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0x78FCB2E22C41B9D5(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (unk_0x7D167B9A0CCDA347(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66))
	{
		*iParam0 = unk_0xCE4780E24AFDFBF9(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, Param2, fParam3, false, false, false);
		func_391(*iParam0, &(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xB11D151E210D4FAC(*iParam0, 1084227584);
		unk_0x617A5A74E1FE26A7(*iParam0, 0);
		unk_0x494ACC4552B7881B(*iParam0, true);
		if (bParam4)
		{
			unk_0x74528AC0906CBABE(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

void func_391(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (!func_399(iParam0))
		{
			if (unk_0x856D5567211886A2(&(uParam1->f_1)) != 0)
			{
				unk_0xC29A9E1088D83B1B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x2C8D182979CFA409())
			{
				unk_0xE704D9F37B4C2203(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar2)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar3)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar4)))
					{
					}
					else
					{
						unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(4)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_33(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 10) != 0)
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE3FF4A5CC7C44EF4(iParam0, 0);
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) != -1)
			{
				unk_0xE3FF4A5CC7C44EF4(iParam0, 1);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 13))
		{
			unk_0xE77150AD7B3A75D0(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x91BD4FF2323B189E(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 12))
		{
			unk_0xE492EED87CB95A5E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xDA7C54DAC349948E(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x38633C69DE516059(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x88FCE2696F59472E(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xCE990E643CD9D0E5(uParam1->f_77, 15) || func_398(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_397())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x80AB5AFB575FF63B(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_35(uParam1->f_66))
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
		}
		else
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
			unk_0x7E69FCE3F08F853A(iParam0, uParam1->f_65);
		}
		unk_0x0E765FE8467F7839(iParam0, !unk_0xCE990E643CD9D0E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x5DC21979EC6C531F(iParam0, uParam1->f_70);
		}
		unk_0x1EC0ADF14D3A546D(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xC87500F291715C64(iParam0, 2, unk_0xCE990E643CD9D0E5(uParam1->f_77, 28));
		unk_0xC87500F291715C64(iParam0, 3, unk_0xCE990E643CD9D0E5(uParam1->f_77, 29));
		unk_0xC87500F291715C64(iParam0, 0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 30));
		unk_0xC87500F291715C64(iParam0, 1, unk_0xCE990E643CD9D0E5(uParam1->f_77, 31));
		unk_0xDBDEDE7005EE04EF(iParam0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 10));
		if (unk_0x1D3BB414B1AF67E6(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA6595E9B6170C788(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iParam0)))
			{
				if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_396(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_396(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8E02133B2800E7EB(iParam0, 1);
			}
			else
			{
				unk_0xD7ABCA2B7FE975F3(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_392(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x442D6659150AF4B3(uParam1->f_66) && !unk_0x5874D60325749F00(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_33(iVar5 + 1)))
				{
					if (!unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
					{
						unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
				{
					unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x36FE6D3220816ADA(iParam0) == joaat("sheava") || unk_0x36FE6D3220816ADA(iParam0) == joaat("omnis")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("le7b"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 0) == -1)
			{
				unk_0xF242CEB863060ABC(iParam0, 1, false);
			}
		}
		if (((unk_0xF9C3E2B9AA9E2294(uParam1->f_66) && unk_0x3E082C70B59E7522(iParam0)) && !unk_0x68AEFA37A65085FD(iParam0, joaat("avenger"))) && !((((Global_4456448.f_74284 == 6 || Global_4456448.f_74284 == 7) || Global_4456448.f_74284 == 18) || Global_4456448.f_74284 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_77, 23))
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 22))
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 2);
				}
				else
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 3);
				}
			}
			else
			{
				unk_0xEE6FDB1E2B95E783(iParam0, 4);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 27))
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_392(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x249EEEE65626B20C(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x136FC3422AADC5DD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xEA1AFD77A8446630(*iParam0, 255);
				}
				else
				{
					unk_0xEA1AFD77A8446630(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x7F8B14CBFB9813E5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x4C1DD6A89EF34554(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_271(unk_0x36FE6D3220816ADA(*iParam0), 1) && unk_0x7F8B14CBFB9813E5(*iParam0, 24) != func_395(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8DFB45E7317A7ED7(*iParam0, 24, func_395(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_394(iParam0);
	if (func_393(*iParam0))
	{
		unk_0xAEBB7D261688301C(*iParam0, true);
		unk_0x494ACC4552B7881B(*iParam0, true);
	}
	return 1;
}

int func_393(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 32);
				iVar2 = unk_0x856D5567211886A2(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x856D5567211886A2("MNU_CAGE") || iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_394(var uParam0)
{
	switch (unk_0x36FE6D3220816ADA(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x7F8B14CBFB9813E5(*uParam0, 4) == 0)
			{
				unk_0x8DFB45E7317A7ED7(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x4C1DD6A89EF34554(*uParam0, 13);
			}
			break;
	}
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xAB92DA7B6007DAAA(iParam0, 38);
		iVar1 = unk_0xAB92DA7B6007DAAA(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_396(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = unk_0x7F8B14CBFB9813E5(iParam0, 24);
		iVar1 = unk_0x9CE7070F0EBF111F(iParam0, 24);
		unk_0x499726ABB88D627B(iParam0, iParam1);
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("tornado6") || unk_0x36FE6D3220816ADA(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x4C1DD6A89EF34554(iParam0, 24);
		}
		else
		{
			unk_0x8DFB45E7317A7ED7(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_397()
{
	return unk_0x95C5B896CB42B20E(-1691188696);
}

int func_398(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x6844807B17DC2DFC("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				}
				return unk_0xCE990E643CD9D0E5(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!func_405(unk_0x460153A63B9477BC(), -1))
		{
			iParam0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (func_401(unk_0x460153A63B9477BC()) == 3)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (func_400(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (unk_0x6844807B17DC2DFC("FMDeliverableID", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "FMDeliverableID"))
		{
			return unk_0x8C0800114C2864BE(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_401(int iParam0)
{
	if (func_404(iParam0) == 233)
	{
		return func_402(iParam0);
	}
	return -1;
}

int func_402(int iParam0)
{
	if (func_403(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_403(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0)
{
	if (func_403(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_405(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_251(iParam0, 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iParam0), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iParam0), false);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x9B0761B4C3EB8BC7() == unk_0x10D3F7E169A49C44(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_406()
{
	unk_0xABAEEAE8870E046D(0);
	unk_0x047901495C0572C0(0, 188, 1);
	unk_0x047901495C0572C0(0, 187, 1);
	unk_0x047901495C0572C0(0, 201, 1);
	unk_0x047901495C0572C0(0, 202, 1);
	unk_0x047901495C0572C0(0, 1, 1);
	unk_0x047901495C0572C0(0, 2, 1);
	unk_0x047901495C0572C0(0, 239, 1);
	unk_0x047901495C0572C0(0, 240, 1);
}

int func_407(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(iVar0, func_408(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(iVar0, bParam1);
	return iVar0;
}

float func_408(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_409(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_293(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_410(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_95();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_411(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_412(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_412(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_413(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_413(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_414(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 7))
	{
		if (!unk_0xCE990E643CD9D0E5(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0xBE20AB8238688965(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_445(iVar0) };
				if (Global_31243 == iVar0 || Global_31243 == 0)
				{
					func_3(1);
					Var1 = { func_444("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0x17E478571720218F(&Var1);
					iVar0 = (Global_31243 + 1 % 8);
					func_442(iParam0, iVar0);
					iParam0->f_2 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(8000, 12000));
					unk_0xBE20AB8238688965(iParam0, 12);
					if (iVar0 == 7)
					{
						unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 7);
						func_441(255, 0);
					}
				}
				else
				{
					func_442(iParam0, 0);
					unk_0xD2459066EA58CE43(&(Global_111858.f_10012.f_25), 12);
				}
			}
		}
		else
		{
			func_440();
			if (!unk_0xCE990E643CD9D0E5(*iParam0, 31))
			{
				if (!unk_0xCE990E643CD9D0E5(*iParam0, 25))
				{
					func_439(iParam0);
				}
				else if (func_438())
				{
					func_422(iParam0);
					iParam0->f_3 = unk_0x578C4EF320340AF7() + 2000;
				}
				if (!func_421(0))
				{
					func_441(255, 0);
				}
			}
			else if (func_421(0))
			{
				if (unk_0x578C4EF320340AF7() > iParam0->f_3)
				{
					func_441(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_415(iParam0);
			}
		}
	}
}

void func_415(int iParam0)
{
	struct<8> Var0;
	
	if (unk_0xCE990E643CD9D0E5(*iParam0, 31))
	{
		func_420(iParam0);
	}
	if (unk_0xCE990E643CD9D0E5(*iParam0, 25))
	{
		func_416(iParam0);
	}
	Var0 = { func_444("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x306BF588BD8151E8(&Var0))
	{
		unk_0xFA07F8BEBDAAFBA8(&Var0);
	}
	unk_0xD2459066EA58CE43(iParam0, 6);
	unk_0xD2459066EA58CE43(iParam0, 30);
	unk_0xD2459066EA58CE43(iParam0, 8);
}

void func_416(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_419(iVar0);
	iVar2 = func_418(iVar1);
	iVar3 = func_417(iVar1);
	if (iVar2 != 0)
	{
		unk_0x74528AC0906CBABE(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x74528AC0906CBABE(iVar3);
	}
	unk_0xD2459066EA58CE43(iParam0, 25);
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("a_c_rabbit_01");
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_420(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0->f_4))
	{
		unk_0x57B4EC087C9D7478(unk_0x3E4D3CCC220BDFB1(iParam0->f_4, false), 10f);
		unk_0x03A2522C845CFAC6(&(iParam0->f_4));
	}
	if (unk_0xAE06B9E39EBDE049(iParam0->f_5))
	{
		unk_0x57B4EC087C9D7478(unk_0x3E4D3CCC220BDFB1(iParam0->f_5, false), 10f);
		unk_0x586DDC617E714637(&(iParam0->f_5));
	}
	unk_0xD2459066EA58CE43(iParam0, 31);
}

bool func_421(bool bParam0)
{
	if (bParam0)
	{
		return Global_108606.f_2 > 0.5f;
	}
	return Global_108606.f_2 >= 255f;
}

void func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_419(iVar0);
	func_423(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_437(iVar0), func_436(iVar0), 1);
	unk_0xBE20AB8238688965(iParam0, 31);
}

void func_423(int iParam0, var uParam1, var uParam2, struct<3> Param3, float fParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 12:
			func_435(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 109:
			func_434(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 43:
			func_433(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 35:
			func_432(uParam2, Param3, fParam4, bParam5);
			break;
		
		case 28:
			func_431(uParam1, Param3, fParam4, bParam5);
			break;
		
		case 17:
			func_430(uParam1, uParam2, Param3, fParam4, bParam5);
			break;
		
		case 49:
			func_428(uParam1, uParam2, Param3, fParam4);
			break;
		
		case 25:
			func_427(uParam1, Param3, fParam4);
			break;
		
		case 14:
			func_426(uParam1, Param3, fParam4);
			break;
		
		case 86:
			func_424(uParam1, Param3, fParam4);
			break;
	}
}

void func_424(var uParam0, struct<3> Param1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_418(86);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(5, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_425(*uParam0);
		return;
	}
}

void func_425(int iParam0)
{
	unk_0xC40573784954F2AD(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0xC40573784954F2AD(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0xC40573784954F2AD(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0xC40573784954F2AD(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0xC40573784954F2AD(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_426(var uParam0, struct<3> Param1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_418(14);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(5, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_425(*uParam0);
		return;
	}
}

void func_427(var uParam0, struct<3> Param1, float fParam2)
{
	int iVar0;
	
	iVar0 = func_418(25);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(4, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, (Param1.x + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_425(*uParam0);
		return;
	}
}

void func_428(var uParam0, var uParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_418(49);
	iVar1 = func_417(49);
	if (unk_0x7D167B9A0CCDA347(iVar0) && unk_0x7D167B9A0CCDA347(iVar1))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(4, iVar0, Param2, fParam3, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		unk_0xF00FBB09122693FC(1110, ((Param2.x + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, ((Param2.x - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, ((Param2.x - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, ((Param2.x - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0xF00FBB09122693FC(1110, ((Param2.x + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_425(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0xCE4780E24AFDFBF9(iVar1, Param2 + Var2, fParam3, true, true, false);
		unk_0x74528AC0906CBABE(iVar1);
		unk_0x0FC504FAF5EB94FB(*uParam1, 2f);
		unk_0xB11D151E210D4FAC(*uParam1, 1084227584);
		unk_0x98274131166DCEF5(*uParam1, 2f);
		unk_0xAF51F156A79D179C(*uParam1, 1f);
		unk_0xDB4660F62F5E86F5(*uParam1, 0, func_429());
		unk_0xDB4660F62F5E86F5(*uParam1, 1, func_429());
		unk_0xDB4660F62F5E86F5(*uParam1, 2, func_429());
		unk_0xDB4660F62F5E86F5(*uParam1, 3, func_429());
		unk_0xDB4660F62F5E86F5(*uParam1, 4, func_429());
		unk_0xDB4660F62F5E86F5(*uParam1, 5, func_429());
		unk_0x463F70A7E1EF1482(*uParam1, 15f);
		unk_0x86FEFAEC6609E396(*uParam1, 3);
		unk_0x289D342D7C2DA52A(*uParam1, 2);
		unk_0x1515637D39F697C4(*uParam1, true);
		unk_0xAFB24BC90ACA6210(*uParam1);
		return;
	}
}

int func_429()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_430(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_418(17);
	iVar1 = func_417(17);
	if (unk_0x7D167B9A0CCDA347(iVar0) && unk_0x7D167B9A0CCDA347(iVar1))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(4, iVar1, Param2, fParam3, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar1);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0xF00FBB09122693FC(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0xF00FBB09122693FC(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0xF00FBB09122693FC(1110, Param2 + Var2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0xF00FBB09122693FC(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0xF00FBB09122693FC(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0xF00FBB09122693FC(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_425(*uParam0);
		*uParam1 = unk_0xCE4780E24AFDFBF9(iVar0, (Param2.x - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, fParam3, true, true, false);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0xC82085403E46A869(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0x98274131166DCEF5(*uParam1, 20.5f);
		unk_0x463F70A7E1EF1482(*uParam1, 15f);
		unk_0xAFB24BC90ACA6210(*uParam1);
		return;
	}
}

void func_431(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_418(28);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(28, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_432(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_418(35);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xCE4780E24AFDFBF9(iVar0, Param1, fParam2, true, true, false);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0xC82085403E46A869(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0x0FC504FAF5EB94FB(*uParam0, 1f);
		unk_0x98274131166DCEF5(*uParam0, 1f);
		unk_0x463F70A7E1EF1482(*uParam0, 15f);
		unk_0xDB4660F62F5E86F5(*uParam0, 0, func_429());
		unk_0xDB4660F62F5E86F5(*uParam0, 1, func_429());
		unk_0xDB4660F62F5E86F5(*uParam0, 2, func_429());
		unk_0xDB4660F62F5E86F5(*uParam0, 3, func_429());
		unk_0xDB4660F62F5E86F5(*uParam0, 4, func_429());
		unk_0xDB4660F62F5E86F5(*uParam0, 5, func_429());
		unk_0x86FEFAEC6609E396(*uParam0, 3);
		unk_0x289D342D7C2DA52A(*uParam0, 2);
		unk_0x1515637D39F697C4(*uParam0, true);
		unk_0xAFB24BC90ACA6210(*uParam0);
		if (bParam3)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_433(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_418(43);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(28, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x694113444F21E39F(*uParam0, 227, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_434(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_418(109);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(28, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_425(*uParam0);
		return;
	}
}

void func_435(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_418(12);
	if (unk_0x7D167B9A0CCDA347(iVar0))
	{
		*uParam0 = unk_0xB3116B49FE00E2F1(28, iVar0, Param1, fParam2, 1, true);
		unk_0x316DB01C35390C36(*uParam0, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0x697DA7132EE43ABC(*uParam0, 0, 0);
		unk_0xAFB24BC90ACA6210(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0xF00FBB09122693FC(1110, Param1 + Var1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0xF00FBB09122693FC(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_425(*uParam0);
		return;
	}
}

float func_436(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_437(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_108583[0 /*3*/];
		
		case 2:
			return Global_108583[1 /*3*/];
		
		case 3:
			return Global_108583[2 /*3*/];
		
		case 4:
			return Global_108583[3 /*3*/];
		
		case 5:
			return Global_108583[4 /*3*/];
		
		case 6:
			return Global_108583[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_438()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_419(iVar0);
	iVar2 = func_418(iVar1);
	iVar3 = func_417(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0x7D167B9A0CCDA347(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0x7D167B9A0CCDA347(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_439(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_419(iVar0);
	iVar2 = func_418(iVar1);
	iVar3 = func_417(iVar1);
	if (iVar2 != 0)
	{
		unk_0x78FCB2E22C41B9D5(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x78FCB2E22C41B9D5(iVar3);
	}
	unk_0xBE20AB8238688965(iParam0, 25);
}

void func_440()
{
	if (Global_108606.f_3 == unk_0xD3137A576BE9EC5C())
	{
		return;
	}
	Global_108606.f_3 = unk_0xD3137A576BE9EC5C();
	if (Global_108606.f_2 == 0f && Global_108606.f_1 == 0f)
	{
		return;
	}
	if (Global_108606.f_2 != Global_108606.f_1)
	{
		Global_108606.f_2 = (Global_108606.f_2 + Global_108606);
		if (Global_108606 <= 0f)
		{
			if (Global_108606.f_2 < Global_108606.f_1)
			{
				Global_108606.f_2 = Global_108606.f_1;
			}
		}
		else if (Global_108606.f_2 > Global_108606.f_1)
		{
			Global_108606.f_2 = Global_108606.f_1;
		}
	}
	unk_0x8DDE075026DB7EFD(0.5f, 0.5f, 1f, 1f, 255, 255, 255, round(Global_108606.f_2), 0);
}

void func_441(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	if (iParam1 <= 0)
	{
		Global_108606 = 0f;
		Global_108606.f_1 = fVar0;
		Global_108606.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_108606.f_2);
		fVar2 = (to_float(iParam1) / (unk_0x9E3DAF75EFC49F5B() * 1000f));
		Global_108606 = (fVar1 / fVar2);
		Global_108606.f_1 = fVar0;
	}
}

void func_442(int iParam0, int iParam1)
{
	func_443(&(Global_111858.f_10012.f_25), iParam1, 14336, 11);
}

void func_443(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || shift_left(iParam1, iParam3));
}

struct<8> func_444(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_445(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_108561[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_446()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				unk_0x78FCB2E22C41B9D5(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (unk_0x7D167B9A0CCDA347(joaat("v_ilev_uvline")))
				{
					if (func_447(8))
					{
						iLocal_53[4] = unk_0x79CC07752E7432A1(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						unk_0x03D382CB0B44E2FC(iLocal_53[4], 471.48f, fVar0, 30.33f, 1, false, 0, 1);
						unk_0xC82085403E46A869(iLocal_53[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_53[1] = unk_0x79CC07752E7432A1(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						unk_0x03D382CB0B44E2FC(iLocal_53[1], 471.48f, fVar0, 30.15f, 1, false, 0, 1);
						unk_0xC82085403E46A869(iLocal_53[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_447(9))
					{
						iLocal_53[5] = unk_0x79CC07752E7432A1(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						unk_0x03D382CB0B44E2FC(iLocal_53[5], 471.48f, fVar0, 29.98f, 1, false, 0, 1);
						unk_0xC82085403E46A869(iLocal_53[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_447(10))
					{
						iLocal_53[3] = unk_0x79CC07752E7432A1(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						unk_0x03D382CB0B44E2FC(iLocal_53[3], 471.48f, fVar0, 29.82f, 1, false, 0, 1);
						unk_0xC82085403E46A869(iLocal_53[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = unk_0xC519B5898C2310B1(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_53[iVar2]))
						{
							unk_0x80250B8368A4E611(iLocal_53[iVar2], true, 0);
							unk_0xC62A236BD36B9EC5(iLocal_53[iVar2], 1);
							unk_0x4C855474940ED236(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					unk_0x74528AC0906CBABE(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				unk_0x74528AC0906CBABE(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_487();
				iLocal_52 = 0;
			}
		}
	}
}

int func_447(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

void func_448()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_75654.f_553)
	{
		if (!iLocal_54)
		{
			Global_75654.f_554 = 0;
			iLocal_54 = 1;
		}
		else if (Global_75654.f_554 >= 68)
		{
			Global_75654.f_553 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_483(&Local_140, iVar1);
			if ((Local_140.f_69 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Local_140.f_55, false);
			}
			else
			{
				fLocal_152[iVar1] = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Local_131, false);
			}
			if (func_482())
			{
				func_481(iVar1);
				func_479(iVar1);
				func_478(iVar1);
				func_477(iVar1);
				func_475(iVar1);
				func_474(iVar1);
				func_473(iVar1);
				func_450(iVar1);
				if (unk_0xCE990E643CD9D0E5(uLocal_48[iVar1], 2))
				{
					if (Global_75654.f_553)
					{
						iLocal_54 = 0;
					}
					func_488(iVar1);
				}
			}
			else
			{
				func_449(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xCE990E643CD9D0E5(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_488(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_488(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_488(iLocal_47);
	if (iLocal_157)
	{
		func_488(21);
		func_488(22);
		func_488(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_75654.f_553)
	{
		Global_75654.f_554++;
	}
}

void func_449(int iParam0)
{
	if (iLocal_49[iParam0] != 0)
	{
		unk_0x74528AC0906CBABE(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_450(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 2))
	{
		func_449(iParam0);
	}
	unk_0xD2459066EA58CE43(&(uLocal_48[iParam0]), 2);
	if (unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Local_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xCE990E643CD9D0E5(Local_131.f_9, 19) || unk_0xCE990E643CD9D0E5(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56 == 21) || (iLocal_129 == 0 && Local_56 == 22)) || (iLocal_129 == 0 && Local_56 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
	{
		if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (iParam0 == 24)
				{
					iVar3 = unk_0x10D3F7E169A49C44(Global_75654.f_139[iParam0], -1, 0);
					if (!unk_0xAE06B9E39EBDE049(iVar3))
					{
						iVar3 = unk_0x37022B7FE1589189(Global_75654.f_139[iParam0], -1);
					}
					iVar4 = func_411(iVar3);
					if (iVar4 != Global_111858.f_32745.f_5591)
					{
						if (func_25(iVar4))
						{
							func_472("Updating last character to use vehicle gen", iVar4);
							Global_111858.f_32745.f_5591 = iVar4;
						}
					}
				}
				if (!unk_0x1D2A3118784C0272(Global_75654.f_139[iParam0], 1))
				{
					func_471("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
					}
					Global_75654.f_139[iParam0] = 0;
					Global_75654[iParam0] = 1;
					func_470(iParam0);
					return;
				}
				if (((unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 0) && !unk_0xCE990E643CD9D0E5(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_471("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
					}
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
					Global_75654.f_139[iParam0] = 0;
					Global_75654[iParam0] = 1;
					func_470(iParam0);
					return;
				}
				if ((!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xCDF860E56BBCC6B4(Global_75654.f_139[iParam0], unk_0x9B0761B4C3EB8BC7(), 1))
					{
						func_471("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
						}
						unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
						Global_75654.f_139[iParam0] = 0;
						Global_75654[iParam0] = 1;
						func_470(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1) && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Global_75654.f_139[iParam0], true), Local_50[iParam0 /*3*/], true) > fVar5) || (!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1) && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Global_75654.f_139[iParam0], true), Local_131, true) > fVar5))
				{
					func_471("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
					}
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
					Global_75654.f_139[iParam0] = 0;
					Global_75654[iParam0] = 1;
					func_470(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_471("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
					}
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
					Global_75654.f_139[iParam0] = 0;
					Global_75654[iParam0] = 1;
					func_470(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_75654.f_139[iParam0], iLocal_129, 1) && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0]))
					{
						func_471("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
						{
							unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
						}
						Global_75654.f_139[iParam0] = 0;
						Global_75654[iParam0] = 1;
						func_470(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_111858.f_32745.f_4801;
						func_468(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_378(iVar6, iVar7))
						{
							if ((!func_63(Global_75654.f_139[iParam0]) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
							{
								unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
							}
							func_31(Global_75654.f_139[iParam0], Global_111858.f_32745.f_5591);
							Global_75654[iParam0] = 1;
							func_470(iParam0);
						}
						else if (func_37(Global_75654.f_139[iParam0]))
						{
							func_32(Global_75654.f_139[iParam0], &Global_2463690);
							Global_2463689 = Global_111858.f_32745.f_5591;
							iLocal_170 = Global_75654.f_139[iParam0];
						}
					}
					func_471("No longer needed: Player out for range");
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
					unk_0x555EE41D7C7078E6(Local_131, 3f, 0, 0, 0, false);
					unk_0xF27E737981AFB47D(Local_131, 3f, 0, 0, 0, 0, false, 0);
					Global_75654.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_75654.f_584 = { Local_131 };
						Global_75654.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 30))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_131.f_9, 31))
					{
						if (!unk_0x4162501391EDB9BF(Global_75654.f_139[iParam0]) && !unk_0xB77B1396EAA80D8F(Global_75654.f_139[iParam0]))
						{
							Var8 = { unk_0x3E4D3CCC220BDFB1(Global_75654.f_139[iParam0], true) };
							if (Var8.f_2 >= func_467(iParam0))
							{
								unk_0xF9A692CE2F45AC6F(Global_75654.f_139[iParam0], true);
								unk_0xBE20AB8238688965(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_75654.f_139[iParam0] = 0;
	}
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
	{
		func_471("No longer needed: Vehicle not driveable");
		unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
		Global_75654.f_139[iParam0] = 0;
		Global_75654[iParam0] = 1;
		func_470(iParam0);
		return;
	}
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (Global_76561 == iParam0)
	{
		func_471("Processing a vehgen vehicle handover request.");
		if (unk_0xAE06B9E39EBDE049(Global_76560) && unk_0x80FF6C016CDB0FAF(Global_76560, 0))
		{
			if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
			{
				if (Global_75654.f_139[iParam0] == Global_76560)
				{
					func_471("Vehicle to be handed over is the same vehicle.");
					Global_76561 = -1;
					Global_76560 = 0;
					return;
				}
				else
				{
					func_471("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_75654.f_139[iParam0])) && !func_62(Global_75654.f_139[iParam0])) && unk_0x36FE6D3220816ADA(Global_75654.f_139[iParam0]) != joaat("monster"))
					{
						unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], true);
					}
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
					Global_75654.f_139[iParam0] = 0;
				}
			}
			Global_75654.f_139[iParam0] = Global_76560;
			Global_75654[iParam0] = 1;
			unk_0xD2459066EA58CE43(&(uLocal_48[iParam0]), 0);
			unk_0xBE20AB8238688965(&(uLocal_48[iParam0]), 1);
			unk_0xD2459066EA58CE43(&(uLocal_48[iParam0]), 3);
			Local_50[iParam0 /*3*/] = { unk_0x3E4D3CCC220BDFB1(Global_76560, true) };
			Global_76561 = -1;
			if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_59 = 2;
				func_32(Global_76560, &Var9);
				if (Global_76562)
				{
					func_115(iParam0, &Var9, unk_0x3E4D3CCC220BDFB1(Global_76560, true), unk_0xEF7858F25585F853(Global_76560), func_46(Global_76560));
				}
				else
				{
					func_115(iParam0, &Var9, Global_111858.f_32745.f_1864[Local_131.f_14 /*3*/], Global_111858.f_32745.f_1934[Local_131.f_14], func_46(Global_76560));
				}
				Global_75654.f_139[iParam0] = Global_76560;
				Global_75654.f_484[iParam0] = Global_75654.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_484();
				if (func_25(iVar10))
				{
					func_471("Players stored switch vehicle cleared for prep getaway.");
					Global_98658[iVar10] = 0;
				}
			}
			unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], true, 1);
			if (iParam0 == 24)
			{
				unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], false);
			}
			Global_76560 = 0;
			if (Global_2463690.f_66 != 0)
			{
				func_297(&Global_2463690, Global_2463689);
				Global_2463690.f_66 = 0;
			}
			return;
		}
		if (Global_2463690.f_66 != 0)
		{
			func_297(&Global_2463690, Global_2463689);
			Global_2463690.f_66 = 0;
		}
		func_471("Vehicle to be handed over doesn't exist.");
		Global_76561 = -1;
		Global_76560 = 0;
	}
	if (Global_75654[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_75654[iParam0] = 0;
			func_471("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_75654.f_584 = { 0f, 0f, 0f };
			Global_75654.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_111858.f_32745.f_1958[Local_131.f_14] != 0) && Global_111858.f_32745.f_1958[Local_131.f_14] > 3) && Local_131.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_50();
			iVar13 = Global_111858.f_32745.f_4801;
			func_468(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_378(iVar12, iVar13))
			{
				func_297(&(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/]), Global_111858.f_32745.f_5591);
				func_470(iParam0);
				Global_75654[iParam0] = 1;
				func_471("Cannot be created: Vehicle ready for impound");
				Global_2463690.f_66 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_75654.f_584 = { 0f, 0f, 0f };
		Global_75654.f_587 = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_466() && func_465(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 10))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iParam0]))
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_75654.f_484[iParam0] = 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 6))
	{
		if (func_464(Local_131.f_4, -1))
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_463(Local_131.f_4, -1))
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_462(iParam0))
	{
		Global_75654[iParam0] = 1;
		func_471("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_111858.f_32745.f_1958[Local_131.f_14] > 0) && Global_111858.f_32745.f_1958[Local_131.f_14] <= 3)
	{
		if (unk_0x97AFEF6099069369(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_12 = (Global_111858.f_32745.f_1958[Local_131.f_14] - 1);
		}
		else if (unk_0xB86B8E85030B1552(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_12 = (Global_111858.f_32745.f_1958[Local_131.f_14] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_461(Local_131.f_12, iVar14, Local_131, -1f))
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_490(iParam0, 0);
			}
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 19) || unk_0xCE990E643CD9D0E5(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_96334[Local_131.f_12 /*3*/][1] != -1 && (unk_0x578C4EF320340AF7() - Global_96334[Local_131.f_12 /*3*/][1]) < unk_0xFD4F66ED3A6F0B81() * 180)
				{
					Global_75654[iParam0] = 1;
					func_471("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var15, "...", 24);
					StringIntConCat(&Var15, ((unk_0xFD4F66ED3A6F0B81() * 180 - (unk_0x578C4EF320340AF7() - Global_96334[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var15, " seconds", 24);
					func_471(&Var15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_96334[Local_131.f_12 /*3*/][0] != -1 && (unk_0x578C4EF320340AF7() - Global_96334[Local_131.f_12 /*3*/][0]) < unk_0xFD4F66ED3A6F0B81() * 180)
				{
					Global_75654[iParam0] = 1;
					func_471("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var16, "...", 24);
					StringIntConCat(&Var16, ((unk_0xFD4F66ED3A6F0B81() * 180 - (unk_0x578C4EF320340AF7() - Global_96334[Local_131.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var16, " seconds", 24);
					func_471(&Var16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_75654.f_584 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_12, iVar14);
		unk_0x78FCB2E22C41B9D5(iLocal_49[iParam0]);
		unk_0xBE20AB8238688965(&(uLocal_48[iParam0]), 2);
		if (!unk_0x7D167B9A0CCDA347(iLocal_49[iParam0]))
		{
			func_471("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_460(iLocal_49[iParam0], Local_131, 1))
		{
			func_471("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x555EE41D7C7078E6(Local_131, 3f, 0, 0, 0, false);
		unk_0xF27E737981AFB47D(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (iVar14 == 2)
		{
			func_455(&(Global_75654.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_455(&(Global_75654.f_139[iParam0]), Local_131.f_12, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_75654[iParam0] = 1;
			func_471("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		unk_0xBE20AB8238688965(&(uLocal_48[iParam0]), 2);
		if (!unk_0x7D167B9A0CCDA347(Local_131.f_4))
		{
			func_471("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_460(Local_131.f_4, Local_131, 1))
		{
			func_471("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x555EE41D7C7078E6(Local_131, 3f, 0, 0, 0, false);
		unk_0xF27E737981AFB47D(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 23))
		{
			unk_0xC11B9FC002323550(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_75654.f_139[iParam0] = unk_0xCE4780E24AFDFBF9(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 10))
		{
			if (unk_0xF9C3E2B9AA9E2294(Local_131.f_4))
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/].f_77), 22);
			}
			if (unk_0xCE990E643CD9D0E5(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/].f_77, 14))
			{
				func_32(Global_75654.f_139[iParam0], &Local_141);
				func_454(Local_141.f_77, &(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/].f_77), Local_131.f_4);
				unk_0xD2459066EA58CE43(&(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/].f_77), 14);
			}
			func_391(Global_75654.f_139[iParam0], &(Global_111858.f_32745.f_69[Local_131.f_14 /*78*/]), 0, 1);
			Global_75654.f_484[iParam0] = Global_75654.f_139[iParam0];
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 9))
			{
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], Local_131.f_10, Local_131.f_11);
			}
			if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 8))
			{
				unk_0x5DC21979EC6C531F(Global_75654.f_139[iParam0], 2);
				unk_0xD4D34706EA3EAF64(Global_75654.f_139[iParam0], false);
				unk_0xD9F5F4019E9DF2FF(Global_75654.f_139[iParam0], 0);
				unk_0xD05ED2138B378AF6(Global_75654.f_139[iParam0], false);
				unk_0x96189C0E26D4F3D3(Global_75654.f_139[iParam0], false);
				unk_0x430613D76B5175B8(Global_75654.f_139[iParam0], false);
				unk_0x0E765FE8467F7839(Global_75654.f_139[iParam0], false);
				unk_0x0312E5501F93E5AB(Global_75654.f_139[iParam0], true);
				unk_0x6A8F948698B360B4(Global_75654.f_139[iParam0], true);
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
	{
		func_453("Created - Coords: ", Local_131);
		func_452("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_75654.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], 121, 21);
				unk_0x88FCE2696F59472E(Global_75654.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], 122, 89);
				unk_0x88FCE2696F59472E(Global_75654.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], 0, 0);
				unk_0x88FCE2696F59472E(Global_75654.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], 131, 132);
				unk_0x88FCE2696F59472E(Global_75654.f_139[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x38633C69DE516059(Global_75654.f_139[iParam0], 159, 0);
				unk_0x88FCE2696F59472E(Global_75654.f_139[iParam0], 160, 156);
				break;
		}
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 22))
		{
			unk_0xF9A692CE2F45AC6F(Global_75654.f_139[iParam0], true);
		}
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 30))
		{
			unk_0xD2459066EA58CE43(&(Local_131.f_9), 31);
		}
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 26))
		{
			unk_0x5DC21979EC6C531F(Global_75654.f_139[iParam0], 7);
			unk_0xC0EF63F41F0AB614(Global_75654.f_139[iParam0], 1);
		}
		func_451(Global_75654.f_139[iParam0], iParam0);
		if (!unk_0xCE990E643CD9D0E5(Local_131.f_9, 29) && !unk_0xCE990E643CD9D0E5(Local_131.f_9, 30))
		{
			unk_0xB11D151E210D4FAC(Global_75654.f_139[iParam0], 1084227584);
		}
		unk_0x463F70A7E1EF1482(Global_75654.f_139[iParam0], 0f);
		unk_0x7C47E49129337557(Global_75654.f_139[iParam0], true);
		unk_0x29B700FB89C9DAC1(Global_75654.f_139[iParam0], unk_0xCE990E643CD9D0E5(Local_131.f_9, 5));
	}
	unk_0xD2459066EA58CE43(&(uLocal_48[iParam0]), 0);
	unk_0xD2459066EA58CE43(&(uLocal_48[iParam0]), 1);
	Global_75654[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_75654.f_69[iParam0] = 1;
	}
	iVar17 = func_187(458, -1, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_75654.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2463690.f_66 = 0;
	}
}

void func_451(int iParam0, int iParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0x89A44C36E0B61C3B(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0x89A44C36E0B61C3B(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0x89A44C36E0B61C3B(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xF242CEB863060ABC(iParam0, 6, false);
				unk_0xF242CEB863060ABC(iParam0, 1, true);
				break;
			}
	}
}

void func_452(char* sParam0, float fParam1)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_453(char* sParam0, float fParam1, var uParam2, var uParam3)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_454(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			unk_0xD2459066EA58CE43(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			unk_0xD2459066EA58CE43(&iVar0, 1);
			unk_0xD2459066EA58CE43(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			unk_0xD2459066EA58CE43(&iVar0, 1);
			unk_0xD2459066EA58CE43(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			unk_0xD2459066EA58CE43(&iVar0, 1);
			unk_0xD2459066EA58CE43(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0xD2459066EA58CE43(&iVar0, 0);
			unk_0xD2459066EA58CE43(&iVar0, 1);
			unk_0xD2459066EA58CE43(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_455(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0xAE06B9E39EBDE049(*iParam0))
		{
			if (unk_0x36FE6D3220816ADA(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_111858.f_2359.f_539.f_4316) && Global_111858.f_9081.f_99.f_58[131])
		{
			Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x78FCB2E22C41B9D5(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x7D167B9A0CCDA347(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xCE4780E24AFDFBF9(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				unk_0xB11D151E210D4FAC(*iParam0, 1084227584);
				unk_0x617A5A74E1FE26A7(*iParam0, 0);
				unk_0x29B700FB89C9DAC1(*iParam0, false);
				unk_0x494ACC4552B7881B(*iParam0, true);
				unk_0x697DA7132EE43ABC(*iParam0, 1250, 0);
				unk_0x0FC504FAF5EB94FB(*iParam0, 1250f);
				unk_0x4A9F6CA267EF14FE(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x38633C69DE516059(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x88FCE2696F59472E(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x463F70A7E1EF1482(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0xF242CEB863060ABC(*iParam0, iVar3 + 1, !Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x3BF7680BA7688F7A(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_459(&uVar1, &iVar0))
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &uVar1);
					unk_0xE704D9F37B4C2203(*iParam0, iVar0);
				}
				else
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x2C8D182979CFA409())
					{
						unk_0xE704D9F37B4C2203(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x80AB5AFB575FF63B(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0E765FE8467F7839(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x7E69FCE3F08F853A(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x1EC0ADF14D3A546D(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xC87500F291715C64(*iParam0, 2, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xC87500F291715C64(*iParam0, 3, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xC87500F291715C64(*iParam0, 0, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xC87500F291715C64(*iParam0, 1, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x1D3BB414B1AF67E6(*iParam0) > 1 && Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xA6595E9B6170C788(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(*iParam0)))
					{
						if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(*iParam0)))
						{
							if (Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x499726ABB88D627B(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x499726ABB88D627B(*iParam0, Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_392(iParam0, &(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x80E6F5AEA0C688D0(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("bodhi2"))
					{
						func_457(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(Global_111858.f_2359.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_456(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x78FCB2E22C41B9D5(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x7D167B9A0CCDA347(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xCE4780E24AFDFBF9(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				unk_0xB11D151E210D4FAC(*iParam0, 1084227584);
				unk_0x617A5A74E1FE26A7(*iParam0, 0);
				unk_0x29B700FB89C9DAC1(*iParam0, false);
				unk_0x494ACC4552B7881B(*iParam0, true);
				unk_0x697DA7132EE43ABC(*iParam0, 1250, 0);
				unk_0x0FC504FAF5EB94FB(*iParam0, 1250f);
				unk_0x4A9F6CA267EF14FE(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x38633C69DE516059(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x88FCE2696F59472E(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x463F70A7E1EF1482(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0xF242CEB863060ABC(*iParam0, iVar4 + 1, !Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x3BF7680BA7688F7A(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_459(&uVar1, &iVar0))
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &uVar1);
					unk_0xE704D9F37B4C2203(*iParam0, iVar0);
				}
				else
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x2C8D182979CFA409())
					{
						unk_0xE704D9F37B4C2203(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x80AB5AFB575FF63B(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0E765FE8467F7839(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x7E69FCE3F08F853A(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x1EC0ADF14D3A546D(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xC87500F291715C64(*iParam0, 2, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xC87500F291715C64(*iParam0, 3, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xC87500F291715C64(*iParam0, 0, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xC87500F291715C64(*iParam0, 1, unk_0xCE990E643CD9D0E5(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x1D3BB414B1AF67E6(*iParam0) > 1 && Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xA6595E9B6170C788(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(*iParam0)))
					{
						if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(*iParam0)))
						{
							if (Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x499726ABB88D627B(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x499726ABB88D627B(*iParam0, Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_392(iParam0, &(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x80E6F5AEA0C688D0(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("bodhi2"))
					{
						func_457(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(Global_111858.f_2359.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_456(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x78FCB2E22C41B9D5(Var2);
			if (unk_0x7D167B9A0CCDA347(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xCE4780E24AFDFBF9(Var2, Param2, fParam3, true, true, false);
				unk_0xB11D151E210D4FAC(*iParam0, 1084227584);
				unk_0x617A5A74E1FE26A7(*iParam0, 0);
				unk_0x29B700FB89C9DAC1(*iParam0, false);
				unk_0x494ACC4552B7881B(*iParam0, true);
				StringCopy(&cVar6, unk_0x6984AA4EC2FF9734(*iParam0), 16);
				unk_0x697DA7132EE43ABC(*iParam0, 1250, 0);
				unk_0x0FC504FAF5EB94FB(*iParam0, 1250f);
				unk_0x4A9F6CA267EF14FE(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x38633C69DE516059(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x88FCE2696F59472E(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x463F70A7E1EF1482(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0xF242CEB863060ABC(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0x3BF7680BA7688F7A(*iParam0, Var2.f_24);
				}
				if (func_459(&uVar1, &iVar0))
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &uVar1);
					unk_0xE704D9F37B4C2203(*iParam0, iVar0);
				}
				else
				{
					unk_0xC29A9E1088D83B1B(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0x2C8D182979CFA409())
					{
						unk_0xE704D9F37B4C2203(*iParam0, Var2.f_26);
					}
				}
				unk_0x80AB5AFB575FF63B(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x0E765FE8467F7839(*iParam0, Var2.f_88);
				unk_0x7E69FCE3F08F853A(*iParam0, Var2.f_87);
				unk_0x1EC0ADF14D3A546D(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xC87500F291715C64(*iParam0, 2, unk_0xCE990E643CD9D0E5(Var2.f_92, 28));
				unk_0xC87500F291715C64(*iParam0, 3, unk_0xCE990E643CD9D0E5(Var2.f_92, 29));
				unk_0xC87500F291715C64(*iParam0, 0, unk_0xCE990E643CD9D0E5(Var2.f_92, 30));
				unk_0xC87500F291715C64(*iParam0, 1, unk_0xCE990E643CD9D0E5(Var2.f_92, 31));
				if (unk_0x1D3BB414B1AF67E6(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xA6595E9B6170C788(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(*iParam0)))
					{
						if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0x499726ABB88D627B(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0x499726ABB88D627B(*iParam0, Var2.f_90);
						}
					}
				}
				func_392(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x80E6F5AEA0C688D0(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("bagger") && !Global_111858.f_9081.f_99.f_58[118])
					{
						unk_0xC29A9E1088D83B1B(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("bodhi2"))
					{
						func_457(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111858.f_2359.f_539.f_4316) && Global_111858.f_9081.f_99.f_58[131]) && unk_0x36FE6D3220816ADA(*iParam0) == joaat("tailgater"))
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, 6, 1, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 14, 7, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 11, 2, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 2, 3, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 7, 5, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 0, 0, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 3, 3, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 13, 1, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 4, 3, false);
					unk_0x8DFB45E7317A7ED7(*iParam0, 12, 2, false);
					unk_0x136FC3422AADC5DD(*iParam0, 22, true);
					unk_0x499726ABB88D627B(*iParam0, 2);
					unk_0x8DFB45E7317A7ED7(*iParam0, 23, 11, false);
					unk_0x7E69FCE3F08F853A(*iParam0, 2);
					Global_111858.f_2359.f_539.f_4316 = 1;
					func_245(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(Var2);
				}
				if (bVar5)
				{
					func_456(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			Global_96286[iVar0] = iParam0;
			Global_96296[iVar0] = iParam1;
			Global_96306[iVar0] = unk_0x36FE6D3220816ADA(iParam0);
			if (unk_0xB86B8E85030B1552(Global_96306[iVar0]))
			{
				Global_96334[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96334[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_457(var uParam0)
{
	if (!func_458(*uParam0))
	{
		unk_0xF242CEB863060ABC(*uParam0, 5, !Global_111858.f_9081.f_99.f_58[119]);
	}
}

bool func_458(int iParam0)
{
	return unk_0xAACD889100BCBCFA(iParam0, 5);
}

int func_459(var uParam0, int iParam1)
{
	if (unk_0x25DDB354A40FFCDB())
	{
	}
	else if (Global_111858.f_20114.f_261)
	{
		*uParam0 = { Global_111858.f_20114.f_267 };
		*iParam1 = Global_111858.f_20114.f_271;
		return 1;
	}
	return 0;
}

int func_460(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if ((iParam2 && unk_0x03DB5C6AABF8DA46()) && unk_0x7B70881748D166CD(joaat("startup_positioning")) > 0)
	{
		func_471("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x140662B520844E45(iParam0, &Var0, &Var1);
	fVar2 = unk_0x272784C60C397DB6(Var1, Var0, true);
	if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Param1, true) < (fVar2 * 0.5f))
	{
		func_452("player is in vehicle bounds - fLength: ", fVar2);
		func_452("player is in vehicle bounds - fDistance: ", unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Param1, true));
		return 1;
	}
	return 0;
}

int func_461(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == iVar2 && Global_96296[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Global_96286[iVar0], false), Param2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_464(Local_131.f_4, -1) || func_463(Local_131.f_4, -1)) || unk_0x7B70881748D166CD(joaat("exile2")) > 0) || !func_447(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[20]) && !unk_0xA59F96B50B97E63C(Global_75654.f_484[20], 0)) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[20], 0))
		{
			if (Local_131.f_4 == unk_0x36FE6D3220816ADA(Global_75654.f_484[20]))
			{
				unk_0x255499E0D27A1780(Global_75654.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_10 && iVar1 == Local_131.f_11)
				{
					func_292(20);
				}
			}
		}
	}
	return 0;
}

int func_463(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Local_131, 200f, iParam0, iVar0);
	if ((unk_0xAE06B9E39EBDE049(iVar1) && unk_0x80FF6C016CDB0FAF(iVar1, 0)) && unk_0x36FE6D3220816ADA(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x16628A9DDE9875CC(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x95417ED29DDF58E6(unk_0x9B0761B4C3EB8BC7(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((unk_0xAE06B9E39EBDE049(uVar0[iVar1]) && unk_0x80FF6C016CDB0FAF(uVar0[iVar1], 0)) && unk_0x36FE6D3220816ADA(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x16628A9DDE9875CC(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_374(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_466()
{
	return Global_75654.f_138;
}

float func_467(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_468(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_469(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_469(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_470(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 13))
	{
		func_490(iParam0, 0);
	}
}

void func_471(char* sParam0)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
	}
}

void func_472(char* sParam0, int iParam1)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_473(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Var1, true) < 250f)
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_146[iVar3]))
		{
			unk_0x78FCB2E22C41B9D5(iVar4);
			iLocal_147 = 1;
			if (unk_0x7D167B9A0CCDA347(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = unk_0x6E52E47D436A2C77(iVar4, Var1, false, true, false);
					unk_0xC82085403E46A869(iLocal_146[iVar3], 0f, 0f, fVar2, 2, 1);
					unk_0xC62EE91883AF24A2(iLocal_146[iVar3], false);
					unk_0x6A8F948698B360B4(iLocal_146[iVar3], true);
					unk_0x74528AC0906CBABE(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((unk_0xAE06B9E39EBDE049(iLocal_146[iVar3]) && !unk_0xA38BFCB05DBE439D(iLocal_146[iVar3])) && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Var1, true) > 255f)
		{
			unk_0x315F7D8C33F0AB37(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				unk_0x74528AC0906CBABE(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_474(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!unk_0xCE990E643CD9D0E5(Local_131.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_75654.f_346[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_15, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_75654.f_346[iParam0])
				{
					unk_0x1E337EE68290597A(Global_75654.f_415[iParam0], 0);
				}
			}
			else if (!Global_75654.f_346[iParam0])
			{
				Global_75654.f_415[iParam0] = unk_0xC08A186299DFDA0A(Local_131.f_15, Local_131.f_18, 0, 1, 1, 1);
			}
		}
		Global_75654.f_346[iParam0] = bVar0;
	}
}

void func_475(int iParam0)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 16))
			{
				iVar0 = func_476(9);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 18))
			{
				iVar0 = func_476(4);
			}
			if (iVar0 == Local_131.f_12)
			{
				func_340(iParam0, 5, 1);
			}
		}
	}
}

int func_476(int iParam0)
{
	return Global_111858.f_24900[iParam0 /*4*/];
}

void func_477(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 4))
		{
			func_340(iParam0, 3, 1);
		}
		else
		{
			func_340(iParam0, 3, 1);
		}
	}
}

void func_478(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_130)
	{
		if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 0) || (unk_0xCE990E643CD9D0E5(Local_131.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!unk_0xCE990E643CD9D0E5(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0 || func_67(iParam0, 5)) || !unk_0xCE990E643CD9D0E5(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x8F678487EEBD8CE4(Global_75654.f_208[iParam0]))
				{
					if (func_447(0))
					{
						if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_75654.f_208[iParam0] = unk_0x6820C712C1DD618A(Local_140.f_55);
							if (Local_140.f_58 != -1)
							{
								unk_0xE7B8403ABCA0391D(Global_75654.f_208[iParam0], Local_140.f_58);
								if (!unk_0x7BCC91F3C1CF24E8(&(Local_140.f_59)))
								{
									unk_0xB023F5C66F5716C7(Global_75654.f_208[iParam0], &(Local_140.f_59));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_75654.f_208[iParam0] = unk_0x6820C712C1DD618A(Local_140.f_55);
							if (Local_131.f_13 != -1)
							{
								unk_0xE7B8403ABCA0391D(Global_75654.f_208[iParam0], Local_131.f_13);
								if (!unk_0x7BCC91F3C1CF24E8(&(Local_140.f_59)))
								{
									unk_0xB023F5C66F5716C7(Global_75654.f_208[iParam0], &(Local_140.f_59));
								}
								if (Local_131.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_12 == 2)
								{
									iVar1 = 44;
								}
								unk_0xECC9A00CF1181EC2(Global_75654.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_75654.f_208[iParam0] = unk_0x6820C712C1DD618A(Local_131);
							if (Local_131.f_13 != -1)
							{
								unk_0xE7B8403ABCA0391D(Global_75654.f_208[iParam0], Local_131.f_13);
								if (!unk_0x7BCC91F3C1CF24E8(&(Local_140.f_59)))
								{
									unk_0xB023F5C66F5716C7(Global_75654.f_208[iParam0], &(Local_140.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_12 == 2)
									{
										iVar2 = 44;
									}
									unk_0xECC9A00CF1181EC2(Global_75654.f_208[iParam0], iVar2);
								}
							}
						}
						unk_0x91136D871CEAF8CC(Global_75654.f_208[iParam0], !unk_0xCE990E643CD9D0E5(Local_131.f_9, 1));
						unk_0x009A89A6CD1E6C3E(Global_75654.f_208[iParam0], false);
						unk_0xE346A71235BB8065(Global_75654.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x8F678487EEBD8CE4(Global_75654.f_208[iParam0]))
		{
			unk_0x93370FA10F15BE44(&(Global_75654.f_208[iParam0]));
		}
	}
}

void func_479(int iParam0)
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (unk_0xCE990E643CD9D0E5(Local_131.f_9, 3))
			{
				func_480(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_340(iParam0, 1, 1);
			}
			else
			{
				func_340(iParam0, 1, 1);
			}
		}
	}
}

void func_480(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_300(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xCE990E643CD9D0E5(Local_131.f_9, 7) || Local_131.f_12 == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && unk_0xCE990E643CD9D0E5(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_29 = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_75654.f_592)
					{
						Global_75654.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56 == 12 || Local_56 == 13) || Local_56 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56 == 15 || Local_56 == 16) || Local_56 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56 == 18 || Local_56 == 19) || Local_56 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_132(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_75654.f_592)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_75654.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x442D6659150AF4B3(iVar2))
										{
											Global_75654.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0x5874D60325749F00(iVar2) || unk_0x8EB87975F59A9367(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_75654.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_75654.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = -1;
		Local_56.f_1 = 99999.99f;
	}
	if (!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_139[iParam0], false))
					{
						if (!unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 1) || unk_0xCE990E643CD9D0E5(uLocal_48[iParam0], 3))
						{
							unk_0xBE20AB8238688965(&(uLocal_48[iParam0]), 0);
							func_340(iParam0, 4, 1);
							func_340(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[iParam0]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[iParam0], 0)) && unk_0x36FE6D3220816ADA(Global_75654.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (unk_0x1037B9D45CE6B788(Global_75654.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					unk_0xD689449F88A7816E(Global_75654.f_484[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!unk_0x1037B9D45CE6B788(Global_75654.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				unk_0xD689449F88A7816E(Global_75654.f_484[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_482()
{
	return 1;
}

var func_483(var uParam0, int iParam1)
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_484()
{
	func_485();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_485()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_412(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_411(unk_0x9B0761B4C3EB8BC7());
			if (func_25(iVar0) && (!func_27(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_25(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

void func_486()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x8F678487EEBD8CE4(Global_75654.f_208[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(Global_75654.f_208[iVar0]));
		}
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iVar0]))
		{
			if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iVar0], 0))
			{
				if (unk_0x1D2A3118784C0272(Global_75654.f_139[iVar0], 1))
				{
					unk_0xE730EAF558C97567(&(Global_75654.f_139[iVar0]));
					Global_75654.f_139[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
	if (unk_0x40397A9A17EEC1C5(Local_56.f_110))
	{
		unk_0x856549C07003344B(Local_56.f_110, false);
		unk_0xB8B0F7C8C1548C5B(Local_56.f_110, 0);
	}
	if (unk_0x40397A9A17EEC1C5(Local_56.f_111))
	{
		unk_0x856549C07003344B(Local_56.f_111, false);
		unk_0xB8B0F7C8C1548C5B(Local_56.f_111, 0);
	}
	if (Local_56.f_3 != 0)
	{
		func_288();
		unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
	}
	if (unk_0x8F678487EEBD8CE4(Global_75654.f_583))
	{
		unk_0x93370FA10F15BE44(&(Global_75654.f_583));
	}
	if (iLocal_115 != -1)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_75654.f_577)
		{
			func_243(47, 1);
			func_241(47, 1);
			Global_75654.f_577 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_75654.f_553 = 0;
	unk_0xD39E529EBE5DB04F();
}

void func_487()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_53[iVar0]))
		{
			unk_0x315F7D8C33F0AB37(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_488(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xCE990E643CD9D0E5(iLocal_150[iVar0], iVar1))
	{
		unk_0xBE20AB8238688965(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_489()
{
	int iVar0;
	
	if (func_311(25))
	{
		if (Global_111858.f_32745.f_69[22 /*78*/].f_66 != 0 && !func_39(Global_111858.f_32745.f_69[22 /*78*/].f_66, 0))
		{
			Global_111858.f_32745.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_111858.f_32745.f_69[22 /*78*/].f_77 = 0;
			Global_111858.f_32745.f_69[22 /*78*/].f_65 = 0;
			Global_111858.f_32745.f_69[22 /*78*/].f_62 = 255;
			Global_111858.f_32745.f_69[22 /*78*/].f_63 = 255;
			Global_111858.f_32745.f_69[22 /*78*/].f_64 = 255;
			Global_111858.f_32745.f_69[22 /*78*/].f_5 = 0;
			Global_111858.f_32745.f_69[22 /*78*/].f_6 = 0;
			Global_111858.f_32745.f_69[22 /*78*/].f_7 = 0;
			Global_111858.f_32745.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_111858.f_32745.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_111858.f_32745.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_311(21) && Global_111858.f_32745.f_69[9 /*78*/].f_66 != 0) && !func_39(Global_111858.f_32745.f_69[9 /*78*/].f_66, 0))
	{
		Global_111858.f_32745.f_69[9 /*78*/].f_66 = 0;
	}
	if ((func_311(22) && Global_111858.f_32745.f_69[10 /*78*/].f_66 != 0) && !func_39(Global_111858.f_32745.f_69[10 /*78*/].f_66, 0))
	{
		Global_111858.f_32745.f_69[10 /*78*/].f_66 = 0;
	}
	if ((func_311(23) && Global_111858.f_32745.f_69[11 /*78*/].f_66 != 0) && !func_39(Global_111858.f_32745.f_69[11 /*78*/].f_66, 0))
	{
		Global_111858.f_32745.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_311(26) && !func_39(Global_111858.f_32745.f_69[12 /*78*/].f_66, 0))
	{
		func_490(26, 0);
	}
	if (func_311(27) && !func_39(Global_111858.f_32745.f_69[13 /*78*/].f_66, 0))
	{
		func_490(27, 0);
	}
	if (func_311(28) && !func_39(Global_111858.f_32745.f_69[14 /*78*/].f_66, 0))
	{
		func_490(28, 0);
	}
	if (func_311(29) && !func_39(Global_111858.f_32745.f_69[15 /*78*/].f_66, 0))
	{
		func_490(29, 0);
	}
	if (func_311(30) && !func_39(Global_111858.f_32745.f_69[16 /*78*/].f_66, 0))
	{
		func_490(30, 0);
	}
	if (func_311(31) && !func_39(Global_111858.f_32745.f_69[17 /*78*/].f_66, 0))
	{
		func_490(31, 0);
	}
	if (func_311(32) && !func_39(Global_111858.f_32745.f_69[18 /*78*/].f_66, 0))
	{
		func_490(32, 0);
	}
	if (func_311(33) && !func_39(Global_111858.f_32745.f_69[19 /*78*/].f_66, 0))
	{
		func_490(33, 0);
	}
	if (func_311(34) && !func_39(Global_111858.f_32745.f_69[20 /*78*/].f_66, 0))
	{
		func_490(34, 0);
	}
}

void func_490(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_340(iParam0, 1, 0);
			func_340(iParam0, 2, 0);
			func_340(iParam0, 3, 0);
			func_340(iParam0, 4, 0);
			func_340(iParam0, 0, 1);
			Global_75654[iParam0] = 1;
		}
	}
	else
	{
		func_340(iParam0, 0, 0);
	}
}

int func_491()
{
	return 0;
}

int func_492()
{
	return 1;
}

int func_493()
{
	return 1;
}

int func_494()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_495(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_499();
	func_498();
	func_496();
}

void func_496()
{
	Global_110236 = 2405.849f;
	Global_110239 = 2408.22f;
	Global_110242 = 2386.096f;
	Global_110245 = 69.1875f;
	Global_110248[0 /*3*/] = 2417.105f;
	Global_110248[1 /*3*/] = 2407.058f;
	Global_110248[2 /*3*/] = 2371.92f;
	Global_110248[3 /*3*/] = 2399.583f;
	Global_110248[4 /*3*/] = 2416.519f;
	Global_110248[5 /*3*/] = 2430.345f;
	Global_110248[6 /*3*/] = 2385.819f;
	Global_110270[0] = 157.8636f;
	Global_110270[1] = 174.7226f;
	Global_110270[2] = 270.7562f;
	Global_110270[3] = 190.7495f;
	Global_110270[4] = 27.6506f;
	Global_110270[5] = 358.1218f;
	Global_110270[6] = 339.4363f;
	Global_110278 = 2399.82f;
	Global_110281 = 2414.7f;
	func_497(&Global_108605, 64);
}

void func_497(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_498()
{
	Global_108610[0 /*3*/].f_1 = 5141.01f;
	Global_108610[1 /*3*/].f_1 = 6048.71f;
	Global_108610[2 /*3*/].f_1 = 6185.32f;
	Global_108610[3 /*3*/].f_1 = 5180.99f;
	Global_108610[4 /*3*/].f_1 = 4582.72f;
	Global_108610[5 /*3*/].f_1 = 4831.82f;
	Global_108610[6 /*3*/].f_1 = 4322.66f;
	Global_108610[7 /*3*/].f_1 = 3503.92f;
	Global_108610[8 /*3*/].f_1 = 3777.54f;
	Global_108610[9 /*3*/].f_1 = 3810.8f;
	Global_108610[10 /*3*/].f_1 = 3095.88f;
	Global_108644[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_108644[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_108644[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_108644[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_108644[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_108644[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_108644[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_108644[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_108644[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_108644[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_108644[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_108644[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_108644[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_108644[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_108644[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_108644[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_108644[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_108644[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_108644[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_108644[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_108644[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_108644[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_108644[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_108644[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_108644[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_108644[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_108644[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_108644[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_108644[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_108644[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_108644[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_108644[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_108644[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_108644[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_108644[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_108644[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_108644[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_108644[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_108644[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_108644[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_108644[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_108644[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_108644[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_108644[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_108644[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_108644[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_108644[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_108644[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_108644[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_108644[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_108644[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_108644[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_108644[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_108644[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_108644[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_108644[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_108644[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_108644[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_108644[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_108644[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_108644[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_108644[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_108644[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_497(&Global_108605, 16);
}

void func_499()
{
	Global_108561[0 /*3*/] = -1567.382f;
	Global_108561[1 /*3*/] = -1436.305f;
	Global_108561[2 /*3*/] = 31.2408f;
	Global_108561[3 /*3*/] = 278.1924f;
	Global_108561[4 /*3*/] = 1116.002f;
	Global_108561[5 /*3*/] = 1676.193f;
	Global_108583[0 /*3*/] = -1592.642f;
	Global_108583[1 /*3*/] = -1573.501f;
	Global_108583[2 /*3*/] = -1459.359f;
	Global_108583[3 /*3*/] = 21.1005f;
	Global_108583[4 /*3*/] = 262.9409f;
	Global_108583[5 /*3*/] = 1091.07f;
	func_497(&Global_108605, 1);
}

