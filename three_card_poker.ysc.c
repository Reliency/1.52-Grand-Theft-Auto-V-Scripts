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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_77 = -1;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_96 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<592> Local_122 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 32;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	struct<9> Local_164[32];
	struct<855> Local_165 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_166 = 3;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	struct<23> Local_174 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_175 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	bool bLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190[4] = { 0, 0, 0, 0 };
	int iLocal_191[4] = { 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_178 = 1;
	func_436();
	while (true)
	{
		wait(0);
		if (func_425())
		{
			func_421();
		}
		if (Global_1696905)
		{
			Global_1696905 = 0;
			func_421();
		}
		if (Global_2405074.f_2674 && Global_2409291 != 0)
		{
			if (Global_2409291 != 6)
			{
				func_421();
			}
		}
		if (func_420() && unk_0x03DB5C6AABF8DA46())
		{
			func_421();
		}
		if ((!func_419(unk_0x460153A63B9477BC()) && !func_418(unk_0x460153A63B9477BC())) && !func_417(unk_0x460153A63B9477BC()))
		{
			func_421();
		}
		if (unk_0xFC559366953F62B3() && !unk_0xCE990E643CD9D0E5(Global_4456448.f_34, 6))
		{
			func_421();
		}
		if (func_418(unk_0x460153A63B9477BC()) && func_413() != func_412())
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[func_413() /*443*/].f_314.f_4, 0) && unk_0x03DB5C6AABF8DA46())
			{
				func_421();
			}
		}
		if (func_418(unk_0x460153A63B9477BC()) && func_413() != func_412())
		{
			if (Global_2425869[func_413() /*443*/].f_441 != Global_1696914 && unk_0x03DB5C6AABF8DA46())
			{
				func_421();
			}
		}
		if (func_418(unk_0x460153A63B9477BC()) && func_410() != 0)
		{
			func_421();
		}
		iVar0 = 0;
		while (iVar0 < Local_165.f_26)
		{
			if ((!func_409() && unk_0xF7DE07F319727299(Local_122.f_50[iVar0])) && unk_0xF05B7723022657B3(Local_122.f_50[iVar0]))
			{
				unk_0x22C69FB63CD1A86A(Local_122.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (func_409())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_165.f_26)
	{
		switch (Local_122.f_586[iVar0])
		{
			case 0:
				if (Global_2516406 != iVar0 && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC())))
				{
					Local_122.f_25[iVar0] = 1;
					func_80(&(Local_122.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0])))
				{
					if (unk_0xF05B7723022657B3(Local_122.f_50[iVar0]))
					{
						Local_122.f_45[iVar0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_35[iVar0]);
						if (Local_122.f_45[iVar0] != -1)
						{
							if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (unk_0x369E69441C066912(Local_122.f_45[iVar0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), -1424880317))
								{
									Local_122.f_35[iVar0] = unk_0xAA579EC5104BFDA9(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), Local_122.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iVar0]);
								}
							}
							else if (unk_0x369E69441C066912(Local_122.f_45[iVar0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), -1424880317))
							{
								Local_122.f_35[iVar0] = unk_0xAA579EC5104BFDA9(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), Local_122.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iVar0]);
							}
						}
					}
					else
					{
						unk_0x5F00FA3094B612F5(Local_122.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_122.f_117[(iVar0 * 4 + iVar1)] != func_412() && Global_2516406 != iVar0) && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC())))
					{
						func_79(2, iVar0);
						Local_122.f_40[iVar0] = iVar1;
						func_73(&(Local_122.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if ((unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]) && unk_0xF05B7723022657B3(Local_122.f_50[iVar0])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0])))
				{
					if (func_72(&(Local_122.f_159[iVar0 /*2*/])) && func_71(&(Local_122.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_122.f_35[iVar0] = unk_0xAA579EC5104BFDA9(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), Local_122.f_35[iVar0], func_78(), func_70(iVar0, Local_122.f_40[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_35[iVar0]);
						func_69(&(Local_122.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_122.f_576[iParam0] > 7 && Local_122.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2516406 == iParam0) || Local_122[iParam0])
	{
		Local_122[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (unk_0xF7DE07F319727299(Local_122.f_50[iParam0]))
	{
		if (!unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
		{
			Local_122.f_10[iParam0] = 0;
			unk_0x5F00FA3094B612F5(Local_122.f_50[iParam0]);
		}
		else if (!Local_122.f_10[iParam0])
		{
			unk_0x22C69FB63CD1A86A(Local_122.f_50[iParam0], false);
			Local_122.f_10[iParam0] = 1;
		}
	}
	Local_122.f_45[iParam0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_35[iParam0]);
	switch (Local_122.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_122.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_164[iVar1 /*9*/] != 0 || Local_164[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_122.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_122.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_122.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
				{
					if (Local_122.f_45[iParam0] != -1)
					{
						if (Local_122.f_30[iParam0] == 1)
						{
							if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
							}
						}
						else if (((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
						}
						else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
							}
						}
						else if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
						{
							Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
						}
					}
				}
				else
				{
					unk_0x5F00FA3094B612F5(Local_122.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_122.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_122.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_122.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_122.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_122.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_122.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_122.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_122.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_122.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_122.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_122.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_122.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_122.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_122.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_122.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_122.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_122.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
			{
				if ((unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 2)]))
				{
					if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 0)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 1)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 2)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
						{
							Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
						}
						else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 8))
						{
							if (Local_122.f_45[iParam0] != -1)
							{
								if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
								{
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), Local_122.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), Local_122.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), Local_122.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_122.f_45[iParam0] != -1)
						{
							if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 8);
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), true, 0);
								func_66(6, iParam0);
							}
							else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1813854677))
							{
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), true, 0);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_122.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_122.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_122.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/];
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 0, 0)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 1;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 1, 0)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 2;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 2, 0)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 0)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 0)]);
										bVar12 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 0)]);
										bVar12 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 0)]);
										bVar12 = true;
									}
									if (bVar12)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_122.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_122.f_410[iVar1 /*5*/] = 3;
												}
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_122.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_122.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_122.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/];
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 0, 1)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 1;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 1, 1)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 2;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 2, 1)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 1)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 1)]);
										bVar13 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 1)]);
										bVar13 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 1)]);
										bVar13 = true;
									}
									if (bVar13)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_122.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_122.f_410[iVar1 /*5*/] = 3;
												}
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_122.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_122.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_122.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/];
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 0, 2)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 1;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 1, 2)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 2;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 2, 2)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 2)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 2)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 2)]);
										bVar14 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 2)]);
										bVar14 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 2)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_122.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_122.f_410[iVar1 /*5*/] = 3;
												}
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_122.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_122.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_122.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/];
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 0, 3)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 1;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 1, 3)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xF7DE07F319727299(Local_122.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_122.f_168[iParam0 /*55*/] + 2;
									unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
									if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
									{
										func_39(&(Local_122.f_68[func_41(iParam0, 2, 3)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 3)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 3)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 3)]);
										bVar15 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 3)]);
										bVar15 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 3)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), Local_122.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_122.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
													Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_122.f_410[iVar1 /*5*/] = 3;
												}
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_122.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
												Local_122.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_122.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
					{
						if (!unk_0xF7DE07F319727299(Local_122.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_122.f_168[iParam0 /*55*/];
							unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
							if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
							{
								func_39(&(Local_122.f_55[func_46(iParam0, 0)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0xF7DE07F319727299(Local_122.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_122.f_168[iParam0 /*55*/] + 1;
							unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
							if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
							{
								func_39(&(Local_122.f_55[func_46(iParam0, 1)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0xF7DE07F319727299(Local_122.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_122.f_168[iParam0 /*55*/] + 2;
							unk_0x78FCB2E22C41B9D5(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5));
							if (unk_0x7D167B9A0CCDA347(func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5)))
							{
								func_39(&(Local_122.f_55[func_46(iParam0, 2)]), func_40(Local_122.f_168[iParam0 /*55*/].f_2[iVar10], Local_165.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 0)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 0)]);
								bVar16 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 1)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 1)]);
								bVar16 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 2)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 2)]);
								bVar16 = true;
							}
							if (bVar16)
							{
								return;
							}
							if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), Local_122.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), Local_122.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), Local_122.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
								}
								else if (Local_122.f_45[iParam0] != -1)
								{
									if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
									{
										bVar7 = true;
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										if (Local_122.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
											Local_122.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
											Local_122.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
											Local_122.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_122.f_389[iParam0 /*5*/] = 3;
										}
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									if (Local_122.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
										Local_122.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
										Local_122.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_122.f_168[iParam0 /*55*/]), &uVar5);
										Local_122.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_122.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]) && Local_122.f_45[iParam0] != -1)
				{
					if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
					{
						Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_122.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_122.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_122.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1) && !unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3)) && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_122.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_122.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_122.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_122.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_122.f_581[iParam0])
			{
				case 0:
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
					{
						if ((unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 0)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 0)]);
								bVar17 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 1)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 1)]);
								bVar17 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 2)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 2)]);
								bVar17 = true;
							}
							if (bVar17)
							{
								return;
							}
							if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
								}
								else if (Local_122.f_45[iParam0] != -1)
								{
									if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_122.f_5[iParam0] = 1;
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_122.f_5[iParam0] = 1;
									unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_122.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 0)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 0)])) && (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1) || unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3)))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 0)]);
										bVar18 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 0)]);
										bVar18 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 0)]);
										bVar18 = true;
									}
									if (bVar18)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 4))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
											else if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.5f)
											{
												unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_122.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 1)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 1)])) && (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1) || unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3)))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 1)]);
										bVar19 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 1)]);
										bVar19 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 1)]);
										bVar19 = true;
									}
									if (bVar19)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 4))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
											else if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.5f)
											{
												unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_122.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 2)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 2)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 2)])) && (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1) || unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3)))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 2)]);
										bVar20 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 2)]);
										bVar20 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 2)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 4))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
											else if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.5f)
											{
												unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_122.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_164[iVar1 /*9*/].f_2 == iParam0 && (Local_164[iVar1 /*9*/].f_3 > 0 || Local_164[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
							{
								if (((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 3)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 3)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 3)])) && (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1) || unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3)))
								{
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 3)]);
										bVar21 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 3)]);
										bVar21 = true;
									}
									if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 3)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
										{
											Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 4))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 1))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xCE990E643CD9D0E5(Local_164[iVar1 /*9*/], 3))
											{
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), Local_122.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
										}
										else if (Local_122.f_45[iParam0] != -1)
										{
											if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											}
											else if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.5f)
											{
												unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
					{
						Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
					}
					else if (unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0) && !unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 2))
					{
						if (Local_122.f_45[iParam0] != -1)
						{
							if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 9);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 2);
							}
						}
					}
					else if (unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 9))
					{
						if (Local_122.f_45[iParam0] != -1)
						{
							if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_122.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var23.f_1 = 3;
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_122.f_117[iVar2];
					if (iVar22 != func_412() && iVar22 > -1)
					{
						if (Local_122.f_410[iVar22 /*5*/] > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
						{
							if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 0)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 0)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 0)]);
									bVar24 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 0)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 0)]);
									bVar24 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 0)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 0)]);
									bVar24 = true;
								}
								if (bVar24)
								{
									return;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
								{
									if (Local_122.f_45[iParam0] != -1)
									{
										if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
										{
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 3);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), false, 0);
											Local_122.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1406739296))
										{
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), false, 0);
										}
									}
									else
									{
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 3);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 0)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 0)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 0)]), false, 0);
										Local_122.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 3);
							}
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 3);
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 3);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_122.f_117[iVar2];
					if (iVar22 != func_412() && iVar22 > -1)
					{
						if (Local_122.f_410[iVar22 /*5*/] > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
						{
							if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 1)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 1)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 1)]);
									bVar25 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 1)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 1)]);
									bVar25 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 1)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 1)]);
									bVar25 = true;
								}
								if (bVar25)
								{
									return;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
								{
									if (Local_122.f_45[iParam0] != -1)
									{
										if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
										{
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 4);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), false, 0);
											Local_122.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1406739296))
										{
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), false, 0);
										}
									}
									else
									{
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 4);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 1)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 1)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 1)]), false, 0);
										Local_122.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 4);
							}
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 4);
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 4);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_122.f_117[iVar2];
					if (iVar22 != func_412() && iVar22 > -1)
					{
						if (Local_122.f_410[iVar22 /*5*/] > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
						{
							if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 2)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 2)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 2)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 2)]);
									bVar26 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 2)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 2)]);
									bVar26 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 2)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 2)]);
									bVar26 = true;
								}
								if (bVar26)
								{
									return;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
								{
									if (Local_122.f_45[iParam0] != -1)
									{
										if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
										{
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 5);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), false, 0);
											Local_122.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1406739296))
										{
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), false, 0);
										}
									}
									else
									{
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 5);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 2)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 2)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 2)]), false, 0);
										Local_122.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 5);
							}
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 5);
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 5);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_122.f_117[iVar2];
					if (iVar22 != func_412() && iVar22 > -1)
					{
						if (Local_122.f_410[iVar22 /*5*/] > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
						{
							if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, 3)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, 3)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, 3)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, 3)]);
									bVar27 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, 3)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, 3)]);
									bVar27 = true;
								}
								if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, 3)]))
								{
									unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, 3)]);
									bVar27 = true;
								}
								if (bVar27)
								{
									return;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
								{
									if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
									{
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), Local_122.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
									}
								}
								else if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
								{
									if (Local_122.f_45[iParam0] != -1)
									{
										if ((unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), 2116425869))
										{
											unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
											unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 6);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), false, 0);
											Local_122.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1406739296))
										{
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), false, 0);
										}
									}
									else
									{
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 6);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 0, 3)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 1, 3)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(iParam0, 2, 3)]), false, 0);
										Local_122.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
								unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 6);
							}
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 6);
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 6);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 7))
				{
					if (Local_122.f_389[iParam0 /*5*/] > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
					{
						if ((unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 0)]) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 1)])) && unk_0x3D70CCF2C9B362CD(Local_122.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 0)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 0)]);
								bVar28 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 1)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 1)]);
								bVar28 = true;
							}
							if (!unk_0xF05B7723022657B3(Local_122.f_55[func_46(iParam0, 2)]))
							{
								unk_0x5F00FA3094B612F5(Local_122.f_55[func_46(iParam0, 2)]);
								bVar28 = true;
							}
							if (bVar28)
							{
								return;
							}
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 0))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
								{
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), Local_122.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), Local_122.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), Local_122.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 0);
								}
							}
							else if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
							{
								if (Local_122.f_45[iParam0] != -1)
								{
									if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
									{
										Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
										unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
										unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 7);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), false, 0);
										Local_122.f_389[iParam0 /*5*/] = { Var23 };
									}
									else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1406739296))
									{
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), false, 0);
									}
								}
								else
								{
									Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
									unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
									unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 7);
									unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 0)]), false, 0);
									unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 1)]), false, 0);
									unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_122.f_55[func_46(iParam0, 2)]), false, 0);
									Local_122.f_389[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 7);
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 0);
						unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 7);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], 10))
				{
					if (Local_122.f_45[iParam0] != -1)
					{
						if (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317))
						{
							if (Local_122.f_30[iParam0] == 1)
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
							}
							else
							{
								Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
							}
							unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_122.f_5[iParam0] = 0;
					Local_122.f_20[iParam0] = 0;
					Local_122.f_25[iParam0]++;
					func_69(&(Local_122.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_122.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_122.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_412())
		{
			iVar4 = func_9(&(Local_122.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (unk_0xCE990E643CD9D0E5(Local_164[iVar2 /*9*/], 1) || Local_164[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_122.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (unk_0x344C570D6F8700DF(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
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
			return 0;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
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
			return 2;
		
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_122.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_122.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (Local_164[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_122.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_164[iParam1 /*9*/].f_3 > 0 && unk_0xCE990E643CD9D0E5(Local_164[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_122.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_122.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_122.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_122.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_122.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_122.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_122.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_122.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0xF8E99C596E84AFF3(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x22CA0B37B74BB381(unk_0x6E52E47D436A2C77(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x22CA0B37B74BB381(unk_0x79CC07752E7432A1(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x0EE5FAC7EF37F8A0(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0xFA6E875B9DF13F14(unk_0x0EE5FAC7EF37F8A0(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(*uParam0), false, 0);
		}
		if (unk_0x4349BF35C5B9A49B(unk_0x0EE5FAC7EF37F8A0(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = unk_0x344C570D6F8700DF(1, 53);
		iVar1 = func_40(iVar2, Local_165.f_5);
		if (!unk_0xF7DE07F319727299(Local_122.f_55[iVar0]))
		{
			unk_0x78FCB2E22C41B9D5(iVar1);
			if (!unk_0x7D167B9A0CCDA347(iVar1) || !func_39(&(Local_122.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (unk_0xF7DE07F319727299(Local_122.f_68[iVar1]))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_68[iVar1]))
				{
					func_49(&(Local_122.f_68[iVar1]));
				}
				else
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (unk_0xF7DE07F319727299(Local_122.f_55[iVar1]))
		{
			if (unk_0xF05B7723022657B3(Local_122.f_55[iVar1]))
			{
				func_49(&(Local_122.f_55[iVar1]));
			}
			else
			{
				unk_0x5F00FA3094B612F5(Local_122.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)
{
	int iVar0;
	
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		if (!unk_0xF05B7723022657B3(*uParam0))
		{
		}
	}
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		iVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x5896A99BC0571F36(&iVar0);
	}
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_122.f_117[(iParam0 * 4 + iVar2)] != func_412())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_122.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_122.f_117[(iParam0 * 4 + iVar1)] != func_412())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_122.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0xBE20AB8238688965(&(Local_122.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (unk_0x7BCC91F3C1CF24E8(&cVar0))
	{
		return 0;
	}
	iVar1 = unk_0x3C6C6327BA564AEE(*uParam1);
	if (unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(*uParam1))
	{
		return 0;
	}
	if (!unk_0xAA5B806352173DEA(iVar1))
	{
		return 0;
	}
	if (unk_0x6F683C1C0BB1BA8D(iVar1))
	{
		return 0;
	}
	sVar2 = func_54(7);
	unk_0xFDCFA91E51EDB61F(iVar1, &cVar0, sVar2, 1);
	return 1;
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x628A51AC66E80772(iParam0);
	if (!unk_0xBD09DF93F957A0CF(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x9019589211A13B02(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x1FA7B77001D60F9D(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_164[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_165.f_26);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
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

bool func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Local_122.f_20[iParam0], iParam1);
}

void func_64(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 16);
	unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 17);
	unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 18);
	unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 19);
	unk_0xD2459066EA58CE43(&(Local_122.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = unk_0xE4106B13B93D6F83(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_122.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;
	
	Local_122[iParam0] = 1;
	if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0])))
	{
		if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (unk_0xF05B7723022657B3(Local_122.f_50[iParam0]))
			{
				Local_122.f_45[iParam0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_35[iParam0]);
				if (Local_122.f_45[iParam0] == -1 || (unk_0x369E69441C066912(Local_122.f_45[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), -1424880317)))
				{
					Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
				}
			}
			else
			{
				unk_0x5F00FA3094B612F5(Local_122.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_122.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_122.f_389[iParam0 /*5*/] = { Var0 };
		Local_122.f_5[iParam0] = 0;
		func_69(&(Local_122.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_122.f_25[iParam0]++;
		Local_122[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_122.f_117[(iParam0 * 4 + iVar1)] != func_412() && Local_122.f_410[Local_122.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, iVar1)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_122.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, iVar1)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_122.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, iVar1)]))
					{
						unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_122.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_122.f_117[(iParam0 * 4 + iVar1)] != func_412())
		{
			iVar0++;
		}
		else
		{
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 0, iVar1)]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_122.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 1, iVar1)]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_122.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(iParam0, 2, iVar1)]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_122.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_122.f_30[iParam0] != iVar0)
	{
		Local_122.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

char* func_74(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_165.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_165.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_122.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_122.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 52;
	iVar3 = 0;
	while (iVar3 < 52)
	{
		iVar1 = unk_0xE4106B13B93D6F83(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 52)
		{
			iVar6 = (iVar4 / 32);
			iVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !unk_0xCE990E643CD9D0E5(uVar0[iVar6], iVar7))
			{
				unk_0xBE20AB8238688965(&(uVar0[iVar6]), iVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!unk_0xCE990E643CD9D0E5(uVar0[iVar6], iVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	int iVar0;
	
	if (!func_85(unk_0x460153A63B9477BC()))
	{
		iVar0 = iLocal_199;
		if (Global_2516406 != iVar0 && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC())))
		{
			if (!unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]))
		{
			if (unk_0xF05B7723022657B3(Local_122.f_50[iVar0]))
			{
				func_49(&(Local_122.f_50[iVar0]));
			}
			else
			{
				unk_0x5F00FA3094B612F5(Local_122.f_50[iVar0]);
			}
		}
	}
	iLocal_199++;
	if (iLocal_199 >= Local_165.f_26)
	{
		iLocal_199 = 0;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("S_M_Y_Casino_01");
	if (Local_122.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("S_F_Y_Casino_01");
	}
	unk_0x78FCB2E22C41B9D5(iVar0);
	if (!unk_0x7D167B9A0CCDA347(iVar0))
	{
		return;
	}
	unk_0x131ED02492676000(func_78());
	if (!unk_0xC614DDE265D18415(func_78()))
	{
		return;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]))
	{
		if (unk_0xCFED0F4D63A92A70(1))
		{
			if (unk_0x450A8984AFF05042())
			{
				unk_0xD637CD5625B7C2F0(1);
			}
			iVar1 = unk_0xB3116B49FE00E2F1(26, iVar0, func_76(iParam0), func_75(iParam0), 1, true);
			unk_0x74528AC0906CBABE(iVar0);
			unk_0xC62EE91883AF24A2(iVar1, false);
			unk_0x9B20C082E40178C8(iVar1, 0);
			unk_0x4E65320BC9AD521C(iVar1, true);
			unk_0x8342E6CB98CD545C(iVar1, 249, true);
			unk_0x694113444F21E39F(iVar1, 185, true);
			unk_0x694113444F21E39F(iVar1, 108, true);
			unk_0xFA6E875B9DF13F14(iVar1, 1);
			unk_0x7F1F4156EF7FAD8F(iVar1, 1);
			unk_0x161DCD5F8BF8AA2B(iVar1, 0);
			unk_0xE18A8D2C753E82F1(iVar1, 1);
			unk_0x5A5A1DD32AC33C2B(iVar1, 0);
			unk_0x694113444F21E39F(iVar1, 208, true);
			unk_0x4478D8ED4673EF14(iVar1, 0);
			func_84(Local_122.f_15[iParam0], &iVar1);
			func_83(Local_122.f_15[iParam0], &iVar1);
			unk_0xCBF81D3222C77066(iVar1, func_76(iParam0), 0, 0, 1);
			unk_0xE922BAA80E8F9324(iVar1, func_75(iParam0));
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				Local_122.f_50[iParam0] = unk_0x28207B405DA4E61E(iVar1);
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iParam0]))
				{
					unk_0x22C69FB63CD1A86A(Local_122.f_50[iParam0], false);
					Local_122.f_10[iParam0] = 1;
					Local_122.f_35[iParam0] = unk_0xAA579EC5104BFDA9(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_50[iParam0]), Local_122.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_122.f_35[iParam0]);
					unk_0x1082C25039B168F8(func_78());
				}
			}
			if (unk_0x450A8984AFF05042())
			{
				unk_0xD637CD5625B7C2F0(0);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 2, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 2, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 2, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 3, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			unk_0x78024EFD31A7FAD4(*iParam1, 1, 0, 0, false);
			break;
		
		case 12:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			unk_0x78024EFD31A7FAD4(*iParam1, 1, 0, 0, false);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_412() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_417(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_412() && func_62(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

void func_87()
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_1 = 3;
	bVar1 = false;
	iVar2 = iLocal_198;
	if (Local_164[iVar2 /*9*/].f_2 == -1)
	{
		Local_122.f_410[iVar2 /*5*/] = { Var0 };
	}
	if (Local_164[iVar2 /*9*/].f_7 == 0)
	{
		if (Local_122.f_600[iVar2] != 0)
		{
			Local_122.f_600[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_198++;
	if (iLocal_198 >= 32)
	{
		iLocal_198 = 0;
	}
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_409())
	{
		return 0;
	}
	iVar0 = unk_0x628A51AC66E80772(iParam0);
	if (!unk_0xBD09DF93F957A0CF(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x9019589211A13B02(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_164[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_122.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_122.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_122.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_122.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_122.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_164[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_122.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0xBE20AB8238688965(&(Local_122.f_600[iParam0]), iVar0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_197;
	if (Local_122.f_117[iVar0] != func_412())
	{
		iVar1 = Local_122.f_117[iVar0];
		if (((!func_62(Local_122.f_117[iVar0], 1, 1) || Local_164[iVar1 /*9*/].f_1 == -1) || Local_164[iVar1 /*9*/].f_1 != iVar0) || !unk_0xFA298F06F67BBD4A(Local_122.f_117[iVar0]))
		{
			Local_122.f_117[iVar0] = func_412();
			if (Local_122.f_600[iVar0] != 0)
			{
				Local_122.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && unk_0xFA298F06F67BBD4A(iVar0))
	{
		if (Local_164[iVar0 /*9*/].f_1 > -1 && Local_164[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_122.f_117[Local_164[iVar0 /*9*/].f_1] == func_412())
			{
				if (func_62(unk_0xF1110FE23C67293A(iVar0), 1, 1))
				{
					Local_122.f_117[Local_164[iVar0 /*9*/].f_1] = unk_0xF1110FE23C67293A(iVar0);
				}
			}
		}
	}
	iLocal_197++;
	if (iLocal_197 >= 32)
	{
		iLocal_197 = 0;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var7;
	
	if (!Local_165.f_5)
	{
		if (func_418(unk_0x460153A63B9477BC()) && func_413() != func_412())
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[func_413() /*443*/].f_314.f_4, 4))
			{
				Local_165.f_5 = 1;
				func_408();
				iLocal_192 = 1;
			}
		}
	}
	else if (iLocal_192)
	{
		if (func_407())
		{
			iLocal_192 = 0;
		}
	}
	func_406();
	Local_165.f_19 = func_403();
	func_393();
	func_389();
	func_386();
	if (Local_165.f_798 > 2)
	{
		unk_0x779660A9E5364C4D(2, 210, 1);
		unk_0x26A60F42A1132477(2, 210);
		unk_0x779660A9E5364C4D(2, 26, 1);
		if (unk_0x275A6259432E6B3C(2, 210))
		{
		}
		if (func_385(Local_165.f_18) >= 0 && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), func_76(func_385(Local_165.f_18)), true) > 5f)
		{
			func_380(0);
		}
	}
	if (Local_165.f_798 > 5)
	{
		unk_0xA86915034F55A3BF();
		unk_0xD10328357EA7B9E5();
		unk_0x689789B905574795(19);
		func_378(1);
		func_377(1, 0);
	}
	if (Local_165.f_798 > 6)
	{
		unk_0x779660A9E5364C4D(2, 0, 1);
		if (unk_0x275A6259432E6B3C(2, 0))
		{
			if (unk_0xF7B3A1430308F92B(0) == 0)
			{
				unk_0x80610B7EA03DE232(0, 4);
			}
			else if (unk_0xF7B3A1430308F92B(0) == 4)
			{
				unk_0x80610B7EA03DE232(0, 0);
			}
		}
		unk_0x0EBFC252513F1870();
	}
	if (Local_165.f_798 > 7)
	{
		func_373(&(Local_164[unk_0x460153A63B9477BC() /*9*/]));
	}
	if (func_372())
	{
		bLocal_194 = true;
	}
	else if (bLocal_194)
	{
		func_371(&uLocal_195, 0, 0);
		bLocal_194 = false;
	}
	else if (func_72(&uLocal_195) && func_71(&uLocal_195, 500, 0))
	{
		func_69(&uLocal_195);
	}
	switch (Local_165.f_798)
	{
		case 0:
			if (func_366())
			{
				Local_165.f_796 = "idle_cardgames";
				Local_165.f_22 = 0;
				Local_164[unk_0x460153A63B9477BC() /*9*/] = 0;
				Local_164[unk_0x460153A63B9477BC() /*9*/].f_6 = 0;
				Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 = -1;
				Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 = -1;
				func_365(unk_0x460153A63B9477BC());
				func_364(1);
			}
			break;
		
		case 1:
			switch (func_385(Local_165.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_165.f_16 = 5000;
					Local_165.f_17 = 10;
					Local_165.f_27 = 500;
					Local_165.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_165.f_16 = 50000;
					Local_165.f_17 = 1000;
					Local_165.f_27 = 5000;
					Local_165.f_28 = 1000;
					break;
			}
			if (Local_165.f_26 == 1)
			{
				bVar0 = true;
				Local_165.f_16 = 50000;
				Local_165.f_17 = 1000;
				Local_165.f_27 = 5000;
				Local_165.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26238 && !(Global_262145.f_26240 && !bVar0)) && !(Global_262145.f_26239 && bVar0)) && ((func_363(1581559923) || func_363(272405600)) || func_418(unk_0x460153A63B9477BC()))) && func_361(unk_0x9B0761B4C3EB8BC7(), func_362(Local_165.f_18), 1.5f)) && func_356(unk_0x9B0761B4C3EB8BC7(), func_360(Local_165.f_18), 40f)) && Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] == 0) && !unk_0xCE990E643CD9D0E5(Global_1678288.f_4, 2)) && !Global_2405074.f_2674) && Global_2516406 != func_385(Local_165.f_18)) && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC()))) && func_355()) && !func_349()) && !unk_0x03DB5C6AABF8DA46()) && !unk_0x5DA78AD6801A0523()) && func_346(unk_0x9B0761B4C3EB8BC7()) <= 9) && !Global_2405074.f_2674) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) && !func_345()) && !func_344()) && !func_342()) && !Global_2462286.f_12) && Global_1678282 != 32) && !func_341())
			{
				func_364(2);
			}
			else
			{
				Local_165.f_18++;
				if (Local_165.f_18 >= Local_165.f_26 * 4)
				{
					Local_165.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_340();
			func_365(unk_0x460153A63B9477BC());
			if (((((((((((((((((((((func_363(1581559923) || func_363(272405600)) || func_418(unk_0x460153A63B9477BC())) && func_361(unk_0x9B0761B4C3EB8BC7(), func_362(Local_165.f_18), 1.5f)) && func_356(unk_0x9B0761B4C3EB8BC7(), func_360(Local_165.f_18), 40f)) && Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] == 0) && Global_2516406 != func_385(Local_165.f_18)) && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC()))) && func_355()) && !func_349()) && !unk_0x03DB5C6AABF8DA46()) && !unk_0x5DA78AD6801A0523()) && func_346(unk_0x9B0761B4C3EB8BC7()) <= 9) && !Global_2405074.f_2674) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) && !func_345()) && !func_344()) && !func_342()) && !Global_2462286.f_12) && Global_1678282 != 32) && !Local_122[func_385(Local_165.f_18)]) && !func_341())
			{
				if ((((((func_62(unk_0x460153A63B9477BC(), 1, 1) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !func_339()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !bLocal_194) && !func_72(&uLocal_195))
				{
					if (func_337(2, &uVar1))
					{
						if (!func_336("TCP_NA"))
						{
							func_335("TCP_NA");
						}
					}
					else if (Local_122.f_117[Local_165.f_18] != func_412())
					{
						if (!func_336("TCP_USED"))
						{
							func_335("TCP_USED");
						}
					}
					else if (func_334())
					{
						if (func_330() == 2)
						{
							if (!func_336("CAS_MG_CTIME"))
							{
								func_335("CAS_MG_CTIME");
							}
						}
						else if (!func_336("CAS_MG_CBAN"))
						{
							func_335("CAS_MG_CBAN");
						}
					}
					else if ((!func_329(unk_0x460153A63B9477BC()) && (func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3)) && !(func_328(1) && func_329(func_327())))
					{
						if (!func_336("CAS_MG_SUITE2"))
						{
							func_335("CAS_MG_SUITE2");
						}
					}
					else if (!func_326() && !(func_328(1) && func_325(func_327())))
					{
						if (!func_323("CAS_MG_MEMB2", func_324(1)))
						{
							func_322("CAS_MG_MEMB2", func_324(1));
						}
						else if (unk_0x1BD7199394D7F19A(2, 52))
						{
							unk_0xD289B55B6AADBA10(1);
							func_321();
							func_364(3);
						}
					}
					else if (Local_165.f_19 <= 0)
					{
						if (func_418(unk_0x460153A63B9477BC()))
						{
							if (!func_336("CAS_MG_NOCHIPS7"))
							{
								func_335("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_336("CAS_MG_NOCHIPS3"))
						{
							func_335("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_165.f_19 < Local_165.f_28)
					{
						if (func_418(unk_0x460153A63B9477BC()))
						{
							if (!func_336("CAS_MG_LOWCHIPS7"))
							{
								func_335("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_336("CAS_MG_LOWCHIPS3"))
						{
							func_335("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_165.f_31 == -1)
					{
						if (func_320())
						{
							unk_0xD289B55B6AADBA10(1);
						}
						if (((!func_329(unk_0x460153A63B9477BC()) && (func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3)) && !(func_328(1) && func_329(func_327()))) || (!func_326() && (func_328(1) && func_325(func_327()))))
						{
							if (func_317(func_327()) == 1)
							{
								Local_165.f_25 = 1;
								func_316(&(Local_165.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_315(func_327()))
							{
								Local_165.f_25 = 2;
								func_316(&(Local_165.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_165.f_25 = 3;
								func_316(&(Local_165.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_165.f_25 = 0;
							func_316(&(Local_165.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_314(Local_165.f_31, 1))
					{
						func_312(&(Local_165.f_31));
						Local_165.f_31 = -1;
						unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 185, true);
						func_311();
						func_301(unk_0x460153A63B9477BC(), 0, 1048832, 0);
						if (unk_0xF7B3A1430308F92B(0) == 4 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
							unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
						}
						func_364(4);
					}
				}
				else
				{
					if (func_320())
					{
						unk_0xD289B55B6AADBA10(1);
					}
					if (Local_165.f_31 != -1)
					{
						func_312(&(Local_165.f_31));
						Local_165.f_31 = -1;
					}
					Local_165.f_18 = 0;
					func_364(1);
				}
			}
			else
			{
				if (func_320())
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (Local_165.f_31 != -1)
				{
					func_312(&(Local_165.f_31));
					Local_165.f_31 = -1;
				}
				Local_165.f_18 = 0;
				func_364(1);
			}
			break;
		
		case 3:
			if (!func_300())
			{
				func_364(2);
			}
			break;
		
		case 4:
			func_378(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (unk_0xCE990E643CD9D0E5(Global_1678288.f_5, 22))
			{
				func_371(&(Local_165.f_792), 0, 0);
				func_299(Local_165.f_18);
				if (unk_0xF7B3A1430308F92B(0) == 4)
				{
					func_301(unk_0x460153A63B9477BC(), 0, 0, 0);
				}
				else
				{
					func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
				}
				func_364(5);
			}
			else
			{
				unk_0x494D5FF88119CDC0(sVar2, false);
				if (func_297(0, -1, 0) && unk_0xC7F5A2E99D75A65C(sVar2))
				{
					if (!iLocal_193)
					{
						unk_0xC4CC25B68A91D144(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_296(0, 0);
						func_294(1, sVar2, sVar2);
						func_293("TCP_TITLE");
						func_292(-1, 1, 1);
						func_291("TCP_DIS", 0, 0);
						func_290("TCP_DIS1");
						func_290("TCP_DIS2");
						func_290("TCP_DIS3");
						func_289(202, "TCP_EXIT", -1);
						func_289(201, "TCP_CONT", -1);
						iLocal_193 = 1;
					}
					func_262(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x275A6259432E6B3C(2, 202))
				{
					unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_259(1, -1);
					unk_0x2DDA2C702A92866E(sVar2);
					iLocal_193 = 0;
					func_250();
				}
				else if (unk_0x275A6259432E6B3C(2, 201))
				{
					unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_259(1, -1);
					unk_0x2DDA2C702A92866E(sVar2);
					iLocal_193 = 0;
					unk_0xBE20AB8238688965(&(Global_1678288.f_5), 22);
					func_371(&(Local_165.f_792), 0, 0);
					func_299(Local_165.f_18);
					if (unk_0xF7B3A1430308F92B(0) == 4)
					{
						func_301(unk_0x460153A63B9477BC(), 0, 0, 0);
					}
					else
					{
						func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
					}
					func_364(5);
				}
			}
			break;
		
		case 5:
			if ((((func_249(Local_165.f_18) && !func_338()) && !func_372()) && func_355()) && !func_349())
			{
				func_69(&(Local_165.f_792));
				unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 3);
				func_240(2);
				func_364(6);
			}
			else
			{
				if (func_338())
				{
					func_250();
				}
				if (func_372())
				{
					func_250();
				}
				if (func_239(Local_165.f_18))
				{
					func_250();
				}
				if (func_238())
				{
					func_250();
				}
				if (!func_355())
				{
					func_250();
				}
				if (func_349())
				{
					func_250();
				}
			}
			break;
		
		case 6:
			if (!func_338() && !func_372())
			{
				if (func_237())
				{
					if (unk_0xF7B3A1430308F92B(0) == 1 || unk_0xF7B3A1430308F92B(0) == 2)
					{
						unk_0x80610B7EA03DE232(0, 0);
					}
					fVar3 = func_235(unk_0x9B0761B4C3EB8BC7(), func_236(Local_165.f_18, 0), 1);
					fVar4 = func_235(unk_0x9B0761B4C3EB8BC7(), func_236(Local_165.f_18, 1), 1);
					fVar5 = func_235(unk_0x9B0761B4C3EB8BC7(), func_236(Local_165.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_165.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_165.f_21 = 2;
					}
					else
					{
						Local_165.f_21 = 0;
					}
					unk_0x83CAF206A9B8748C(unk_0x9B0761B4C3EB8BC7(), func_236(Local_165.f_18, Local_165.f_21), 1f, 5000, func_234(Local_165.f_18, Local_165.f_21), 0.01f);
					func_364(7);
				}
			}
			else
			{
				func_250();
			}
			break;
		
		case 7:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 2106541073) != 0)
			{
				Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_165.f_18), func_232(Local_165.f_18), 2, true, false, 1065353216, 0, 1065353216);
				unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), func_230(Local_165.f_21), 2f, -2f, 13, 16, 2f, 0);
				unk_0xB88AF19828BF16ED(Local_165.f_24);
				Local_164[unk_0x460153A63B9477BC() /*9*/].f_7.f_1 = Local_164[unk_0x460153A63B9477BC() /*9*/].f_2;
				func_364(8);
			}
			break;
		
		case 8:
			unk_0x7DB1794EFB0DF2F8(-1938411241);
			Local_165.f_30 = unk_0xAB6BAF5BFCAFB141(Local_165.f_24);
			if (func_229())
			{
				func_228(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 2);
			}
			else
			{
				func_228(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 1);
			}
			if (Local_165.f_30 != -1)
			{
				if ((unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 2038294702)) || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317))
				{
					func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
					Local_175 = { Var6 };
					if (func_418(unk_0x460153A63B9477BC()))
					{
						Local_175 = 1695074466;
					}
					else if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 2 || Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 3)
					{
						Local_175 = 1952785842;
					}
					else
					{
						Local_175 = -1125105727;
					}
					Local_175.f_1 = Local_164[unk_0x460153A63B9477BC() /*9*/].f_2;
					Local_175.f_6 = 1;
					if (func_329(unk_0x460153A63B9477BC()))
					{
						Local_175.f_15 = 1983458449;
					}
					else if (func_326())
					{
						Local_175.f_15 = 1334658487;
					}
					else if (func_328(1) && (func_329(func_327()) || func_226(unk_0x460153A63B9477BC())))
					{
						Local_175.f_15 = 980726932;
					}
					else
					{
						Local_175.f_15 = 939907746;
					}
					func_371(&uLocal_172, 0, 0);
					func_225();
					Local_165.f_32 = func_403();
					func_364(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
			{
				unk_0x17E478571720218F("DLC_VW_Casino_Table_Games");
			}
			unk_0x7DB1794EFB0DF2F8(-1938411241);
			func_95();
			break;
		
		case 10:
			if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
			{
				unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 1785177548) == 1)
			{
				func_228(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), func_94());
				Var7 = { unk_0xAAC78749C4BB5219(2, 218), unk_0xAAC78749C4BB5219(2, 219), 0f };
				Local_165.f_30 = unk_0xAB6BAF5BFCAFB141(Local_165.f_24);
				if (Local_165.f_7)
				{
					if (Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
					{
						Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_165.f_18), func_232(Local_165.f_18), 2, false, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), func_93(Local_165.f_18), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_165.f_24);
						Local_165.f_7 = 0;
					}
				}
				else if (Local_165.f_30 != -1 && ((unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)) || (vmag(Var7) >= 0.24f && unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 2116425869))))
				{
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					func_301(unk_0x460153A63B9477BC(), 1, 0, 0);
					unk_0x1082C25039B168F8(func_45());
					unk_0x1082C25039B168F8(func_78());
					unk_0x1082C25039B168F8(func_92());
					unk_0x1082C25039B168F8(func_231());
					func_408();
					unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 3);
					func_340();
					func_364(2);
				}
			}
			else
			{
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				func_301(unk_0x460153A63B9477BC(), 1, 0, 0);
				unk_0x1082C25039B168F8(func_45());
				unk_0x1082C25039B168F8(func_78());
				unk_0x1082C25039B168F8(func_92());
				unk_0x1082C25039B168F8(func_231());
				unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 3);
				func_340();
				func_364(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_403();
	iVar1 = (iVar0 - Local_165.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	
	if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 >= 0)
	{
		if (func_224(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2))
		{
			func_223("TCP_ERROR", -1);
			return;
		}
	}
	func_210();
	if (func_409())
	{
		Local_175.f_10 = 1;
	}
	Local_175.f_11 = func_208();
	if ((((((((unk_0x1BD7199394D7F19A(2, 202) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_92(), "cards_pickup", 3)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)) && !Local_165.f_1) && !func_207())
	{
		Local_174.f_4 = joaat("QUIT");
		Local_175.f_2 = joaat("QUIT");
		Local_174.f_22 = joaat("QUIT");
		Local_174.f_7 = func_403();
		Local_174.f_17 = func_206(&uLocal_170, 0, 0);
		Local_174.f_18 = func_409();
		Local_174.f_19 = func_208();
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
		{
			Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
		}
		if ((Local_165.f_797 > 1 || Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 != 0) || Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26109)
			{
				unk_0xF84B58C7E1A243F6(&Local_174);
			}
		}
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0 && !Local_165.f_2)
		{
			func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
		}
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 > 0 && !Local_165.f_6)
		{
			func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_5);
		}
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 > 0 && !Local_165.f_3)
		{
			func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
		}
		func_380(1);
		unk_0xD289B55B6AADBA10(1);
		return;
	}
	if (((Global_2516406 == Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 || Global_2462286.f_12) || Global_1678282 == 32) || !func_203())
	{
		Local_174.f_7 = func_403();
		Local_174.f_17 = func_206(&uLocal_170, 0, 0);
		Local_174.f_18 = func_409();
		Local_174.f_19 = func_208();
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
		{
			Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
		}
		if (Global_262145.f_26109)
		{
			unk_0xF84B58C7E1A243F6(&Local_174);
		}
		func_380(1);
		unk_0xD289B55B6AADBA10(1);
		return;
	}
	if (Local_165.f_24 > -1)
	{
		Local_165.f_30 = unk_0xAB6BAF5BFCAFB141(Local_165.f_24);
		if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_92(), "cards_idle", 3)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 0)) && !Local_165.f_1)
		{
			if (!unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_231(), "idle_cardgames", 3))
			{
				if (Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
				{
					Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_165.f_24);
					Local_165.f_796 = "idle_cardgames";
				}
			}
			else if (Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
			{
				Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
				unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), func_202(0), 2f, -2f, 13, 16, 1148846080, 0);
				unk_0xB88AF19828BF16ED(Local_165.f_24);
			}
		}
	}
	if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 >= 0)
	{
		func_200(&(Local_165.f_90));
		if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 0) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
		{
			func_199(unk_0xED026A379B794F61(0, 202, true), "TCP_EXIT", &(Local_165.f_90), 0);
			if (((((Local_165.f_797 == 3 && Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 2)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 1)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 1)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 3))
			{
				func_199(unk_0xED026A379B794F61(0, 201, true), "TCP_PLAY_HAND", &(Local_165.f_90), 0);
				func_199(unk_0xED026A379B794F61(0, 203, true), "TCP_FOLD_HAND", &(Local_165.f_90), 0);
			}
			if (Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] == 3 && ((Local_165.f_19 >= Local_165.f_28 || Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 != 0) || Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 != 0))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 0) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 0))
				{
					if (Local_165.f_19 >= Local_165.f_17 * 2)
					{
						func_199(unk_0xED026A379B794F61(0, 201, true), "TCP_PLACE", &(Local_165.f_90), 0);
					}
					func_199(unk_0xED026A379B794F61(0, 203, true), "TCP_DECLINEA", &(Local_165.f_90), 0);
					if (Local_165.f_19 >= Local_165.f_17 * 2)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 8))
						{
							func_199(unk_0xED026A379B794F61(0, 204, true), "TCP_BET_MAX", &(Local_165.f_90), 0);
						}
						func_198(2, 7, "TCP_BET_NUM", &(Local_165.f_90));
					}
				}
				else if ((!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 2) && Local_165.f_19 >= (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 + Local_165.f_28)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 0))
				{
					func_199(unk_0xED026A379B794F61(0, 201, true), "TCP_PLACE_PP", &(Local_165.f_90), 0);
					func_199(unk_0xED026A379B794F61(0, 203, true), "TCP_DECLINE", &(Local_165.f_90), 0);
					if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 8))
					{
						func_199(unk_0xED026A379B794F61(0, 204, true), "TCP_BET_MAX", &(Local_165.f_90), 0);
					}
					func_198(2, 7, "TCP_BET_NUM", &(Local_165.f_90));
				}
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_165.f_20, 0))
		{
			func_199(unk_0xED026A379B794F61(0, 202, true), "IB_BACK", &(Local_165.f_90), 0);
			func_198(2, 8, "IB_TAB", &(Local_165.f_90));
		}
		else if (unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
		{
			func_199(unk_0xED026A379B794F61(0, 202, true), "IB_BACK", &(Local_165.f_90), 0);
		}
		if (Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] < 12)
		{
			if (Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/] > 0)
			{
				func_199(unk_0xED026A379B794F61(0, 208, true), "TCP_DLR", &(Local_165.f_90), 0);
			}
			if (Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] > 0)
			{
				if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4) || unk_0xCE990E643CD9D0E5(Local_122.f_20[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2], func_197(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1)))
				{
					func_199(unk_0xED026A379B794F61(0, 207, true), "TCP_CARDS", &(Local_165.f_90), 0);
				}
				else if (((((Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0 && Local_165.f_797 == 3) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 2)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 1)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 1)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 3))
				{
					func_199(unk_0xED026A379B794F61(0, 207, true), "TCP_PICK_UP", &(Local_165.f_90), 0);
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 0) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
		{
			func_199(unk_0xED026A379B794F61(2, 210, true), "TCP_RULESb", &(Local_165.f_90), 0);
			func_199(unk_0xED026A379B794F61(2, 209, true), "TCP_HANDSb", &(Local_165.f_90), 0);
		}
		Var1 = { func_196() };
		func_195(&(Local_165.f_90), 1f);
		func_187(&(Local_165.f_89), &Var1, &(Local_165.f_90), func_194(&(Local_165.f_90)));
		func_186(1);
	}
	func_181();
	func_162();
	switch (Local_165.f_797)
	{
		case 0:
			if (Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] == 3)
			{
				if ((Local_165.f_15 > (Local_165.f_19 / 2) || Local_165.f_15 < Local_165.f_17) || Local_165.f_15 > Local_165.f_16)
				{
					Local_165.f_15 = Local_165.f_17;
				}
				if ((((Local_165.f_23 > Local_165.f_19 || Local_165.f_23 > Local_165.f_27) || Local_165.f_23 < Local_165.f_28) || Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3)) || Local_165.f_23 > Local_165.f_19)
				{
					Local_165.f_23 = Local_165.f_28;
				}
				Var2.f_1 = 3;
				Local_165.f_854 = { Var2 };
				Local_174 = { Var3 };
				Local_174.f_10 = 1;
				Local_174 = -941885798;
				Local_174.f_11 = func_329(unk_0x460153A63B9477BC());
				if (func_329(unk_0x460153A63B9477BC()))
				{
					Local_174.f_20 = 1983458449;
				}
				else if (func_326())
				{
					Local_174.f_20 = 1334658487;
				}
				else if (func_328(1) && (func_329(func_327()) || func_226(unk_0x460153A63B9477BC())))
				{
					Local_174.f_20 = 980726932;
				}
				else
				{
					Local_174.f_20 = 939907746;
				}
				if (func_418(unk_0x460153A63B9477BC()))
				{
					Local_174.f_1 = 1695074466;
				}
				else if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 2 || Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 3)
				{
					Local_174.f_1 = 1952785842;
				}
				else
				{
					Local_174.f_1 = -1125105727;
				}
				func_371(&uLocal_170, 0, 0);
				Local_174.f_3 = Local_122.f_25[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
				Local_174.f_2 = Local_164[unk_0x460153A63B9477BC() /*9*/].f_2;
				func_161(1);
			}
			break;
		
		case 1:
			if ((!func_326() && !(func_328(1) && func_325(func_327()))) || ((!func_329(unk_0x460153A63B9477BC()) && (func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3)) && !(func_328(1) && func_329(func_327()))))
			{
				if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
				{
					Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
				}
				Local_175.f_2 = 939907746;
				Local_174.f_4 = 939907746;
				Local_174.f_7 = func_403();
				Local_174.f_17 = func_206(&uLocal_170, 0, 0);
				Local_174.f_18 = func_409();
				Local_174.f_19 = func_208();
				if (Global_262145.f_26109)
				{
					unk_0xF84B58C7E1A243F6(&Local_174);
				}
				func_380(1);
				unk_0xD289B55B6AADBA10(1);
				if (Local_165.f_25 == 1)
				{
					func_223("IT_MEMBOc", -1);
				}
				else if (Local_165.f_25 == 2)
				{
					func_223("IT_MEMBOa", -1);
				}
				else if (Local_165.f_25 == 3)
				{
					func_223("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_165.f_19 < Local_165.f_28 && Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 == 0) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 == 0) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 == 0) && !Local_165.f_1)
			{
				Local_174.f_4 = -1275559872;
				Local_175.f_2 = -1275559872;
				Local_174.f_7 = func_403();
				Local_174.f_17 = func_206(&uLocal_170, 0, 0);
				Local_174.f_18 = func_409();
				Local_174.f_19 = func_208();
				if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
				{
					Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
				}
				if (Global_262145.f_26109)
				{
					unk_0xF84B58C7E1A243F6(&Local_174);
				}
				func_380(1);
				unk_0xD289B55B6AADBA10(1);
				if (func_418(unk_0x460153A63B9477BC()))
				{
					if (Local_165.f_19 <= 0)
					{
						func_223("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_223("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_165.f_19 <= 0)
				{
					func_223("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_223("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_334())
			{
				switch (func_330())
				{
					case 0:
						Local_174.f_4 = 1982714739;
						break;
					
					case 1:
						Local_174.f_4 = -633175758;
						break;
					
					case 2:
						Local_174.f_4 = -1625999354;
						break;
				}
				switch (func_330())
				{
					case 0:
						Local_175.f_2 = 1982714739;
						break;
					
					case 1:
						Local_175.f_2 = -633175758;
						break;
					
					case 2:
						Local_175.f_2 = -1625999354;
						break;
				}
				Local_174.f_7 = func_403();
				Local_174.f_17 = func_206(&uLocal_170, 0, 0);
				Local_174.f_18 = func_409();
				Local_174.f_19 = func_208();
				if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
				{
					Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
				}
				if (Global_262145.f_26109)
				{
					unk_0xF84B58C7E1A243F6(&Local_174);
				}
				func_380(1);
				unk_0xD289B55B6AADBA10(1);
				if (func_330() == 2)
				{
					func_223("CAS_MG_CTIME", -1);
				}
				else
				{
					func_223("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 0) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 2)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 0)) && (!func_355() || func_349()))
			{
				Local_174.f_7 = func_403();
				Local_174.f_17 = func_206(&uLocal_170, 0, 0);
				Local_174.f_18 = func_409();
				Local_174.f_19 = func_208();
				if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
				{
					Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
				}
				if (Global_262145.f_26109)
				{
					unk_0xF84B58C7E1A243F6(&Local_174);
				}
				func_380(1);
				unk_0xD289B55B6AADBA10(1);
				return;
			}
			if (!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 0))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 0))
				{
					if ((((((!unk_0xCE990E643CD9D0E5(Local_165.f_29, 1) && !unk_0xDFAB5E5CBE16E8B1()) && !unk_0x1BD7199394D7F19A(2, 204)) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
					{
						bVar5 = unk_0x22D6FB6153F774D3(2, 188);
						bVar6 = unk_0x22D6FB6153F774D3(2, 187);
						if (bVar6 || ((((((bVar5 && !unk_0x1BD7199394D7F19A(2, 204)) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)))
						{
							func_73(&(Local_165.f_790), 0, 0);
							unk_0xBE20AB8238688965(&(Local_165.f_29), 1);
						}
					}
					else if (func_71(&(Local_165.f_790), 100, 0))
					{
						func_69(&(Local_165.f_790));
						unk_0xD2459066EA58CE43(&(Local_165.f_29), 1);
					}
					if ((((((((unk_0x1BD7199394D7F19A(2, 204) && !bVar6) && !bVar5) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 8))
					{
						unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_165.f_15 >= 10000)
							{
								iVar7 = 5000;
							}
							else if (Local_165.f_15 >= 5000)
							{
								iVar7 = 1000;
							}
							else if (Local_165.f_15 >= 500)
							{
								iVar7 = 500;
							}
							else if (Local_165.f_15 >= 100)
							{
								iVar7 = 50;
							}
							else
							{
								iVar7 = 10;
							}
							if (Local_165.f_15 > (Local_165.f_19 / 2))
							{
								Local_165.f_15 = (Local_165.f_15 - iVar7);
							}
							if (Local_165.f_15 < Local_165.f_17)
							{
								Local_165.f_15 = Local_165.f_17;
							}
							if (Local_165.f_15 > Local_165.f_16)
							{
								Local_165.f_15 = Local_165.f_16;
							}
							Local_165.f_15 = (Local_165.f_15 + iVar7);
							if (Local_165.f_15 > (Local_165.f_19 / 2))
							{
								bVar4 = false;
								Local_165.f_15 = (Local_165.f_15 - iVar7);
							}
							if (Local_165.f_15 < Local_165.f_17)
							{
								Local_165.f_15 = Local_165.f_17;
							}
							if (Local_165.f_15 > Local_165.f_16)
							{
								bVar4 = false;
								Local_165.f_15 = Local_165.f_16;
							}
						}
					}
					else
					{
						if (Local_165.f_15 >= 10000)
						{
							iVar7 = 5000;
						}
						else if (Local_165.f_15 >= 5000)
						{
							iVar7 = 1000;
						}
						else if (Local_165.f_15 >= 500)
						{
							iVar7 = 500;
						}
						else if (Local_165.f_15 >= 100)
						{
							iVar7 = 50;
						}
						else
						{
							iVar7 = 10;
						}
						if (Local_165.f_15 > (Local_165.f_19 / 2))
						{
							Local_165.f_15 = (Local_165.f_15 - iVar7);
						}
						if (Local_165.f_15 < Local_165.f_17)
						{
							Local_165.f_15 = Local_165.f_17;
						}
						if (Local_165.f_15 > Local_165.f_16)
						{
							Local_165.f_15 = Local_165.f_16;
						}
						iVar8 = Local_165.f_15;
						if (bVar5)
						{
							Local_165.f_15 = (Local_165.f_15 + iVar7);
							if (Local_165.f_15 > (Local_165.f_19 / 2))
							{
								Local_165.f_15 = (Local_165.f_15 - iVar7);
							}
							if (Local_165.f_15 < Local_165.f_17)
							{
								Local_165.f_15 = Local_165.f_17;
							}
							if (Local_165.f_15 > Local_165.f_16)
							{
								Local_165.f_15 = Local_165.f_16;
							}
							if (Local_165.f_15 == iVar8)
							{
								if (unk_0x1BD7199394D7F19A(2, 188) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 10))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 10);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_165.f_22), 10);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar6)
						{
							if (Local_165.f_15 <= 100)
							{
								iVar7 = 10;
							}
							else if (Local_165.f_15 <= 500)
							{
								iVar7 = 50;
							}
							else if (Local_165.f_15 <= 5000)
							{
								iVar7 = 500;
							}
							else if (Local_165.f_15 <= 10000)
							{
								iVar7 = 1000;
							}
							else
							{
								iVar7 = 5000;
							}
							Local_165.f_15 = (Local_165.f_15 - iVar7);
							if (Local_165.f_15 < Local_165.f_17)
							{
								Local_165.f_15 = Local_165.f_17;
							}
							if (Local_165.f_15 == iVar8)
							{
								if (unk_0x1BD7199394D7F19A(2, 187) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 10))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 10);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_165.f_22), 10);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_165.f_15 == Local_165.f_16 || (Local_165.f_15 + iVar7) > Local_165.f_16) || (Local_165.f_15 + iVar7) > (Local_165.f_19 / 2))
					{
						unk_0xBE20AB8238688965(&(Local_165.f_22), 8);
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 8);
					}
					unk_0xBE20AB8238688965(&(Local_165.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0xDFAB5E5CBE16E8B1() && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
						{
							if (((unk_0x1BD7199394D7F19A(2, 201) && !unk_0x22D6FB6153F774D3(2, 203)) && Local_165.f_15 >= Local_165.f_17) && Local_165.f_19 >= Local_165.f_17 * 2)
							{
								unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
								Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								if (func_160(Local_165.f_15))
								{
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0xB88AF19828BF16ED(Local_165.f_24);
							}
							else if ((unk_0x1BD7199394D7F19A(2, 203) && !unk_0x22D6FB6153F774D3(2, 201)) || Local_165.f_19 < Local_165.f_28)
							{
								Local_165.f_19 = func_403();
								if ((((Local_165.f_23 > Local_165.f_19 || Local_165.f_23 > Local_165.f_27) || Local_165.f_23 < Local_165.f_28) || Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3)) || Local_165.f_23 > Local_165.f_19)
								{
									Local_165.f_23 = Local_165.f_28;
								}
								unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 0);
							}
						}
						if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_165.f_19 < Local_165.f_17 * 2)
						{
							if (((!func_336("TCP_LOW") && !bLocal_183) && !bLocal_184) && !bLocal_179)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_336("TCP_PLACE_ANTE") && !bLocal_183) && !bLocal_184) && !bLocal_179)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_336("TCP_PLACE_ANTE") && !bLocal_183) && !bLocal_184) && !bLocal_179)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_165.f_30 != -1 && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 0))
					{
						if ((unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
						{
							unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 0);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
						}
						else if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0)
						{
							Local_165.f_1 = 1;
						}
						if (Local_165.f_1)
						{
							if (func_155(Local_165.f_15, &(Local_165.f_14), 2, Local_165))
							{
								if (Local_165.f_14 == 3)
								{
									Local_165.f_1 = 0;
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
									Local_165.f_14 = 0;
								}
								else
								{
									Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 = Local_165.f_15;
									if (Local_165.f_15 >= 10000)
									{
										iVar9 = 5000;
									}
									else if (Local_165.f_15 >= 5000)
									{
										iVar9 = 1000;
									}
									else if (Local_165.f_15 >= 500)
									{
										iVar9 = 500;
									}
									else if (Local_165.f_15 >= 100)
									{
										iVar9 = 50;
									}
									else
									{
										iVar9 = 10;
									}
									if ((Local_165.f_15 == Local_165.f_16 || (Local_165.f_15 + iVar9) > Local_165.f_16) || (Local_165.f_15 + iVar9) > (Local_165.f_19 / 2))
									{
										Local_174.f_5 = 1;
									}
									Local_174.f_6 = (Local_174.f_6 - Local_165.f_15);
									Local_175.f_3 = (Local_175.f_3 - Local_165.f_15);
									Local_175.f_7 = (Local_175.f_7 + Local_165.f_15);
									Local_174.f_12 = (Local_174.f_12 + Local_165.f_15);
									Local_165.f_19 = func_403();
									if ((((Local_165.f_23 > Local_165.f_19 || Local_165.f_23 > Local_165.f_27) || Local_165.f_23 < Local_165.f_28) || Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3)) || Local_165.f_23 > Local_165.f_19)
									{
										Local_165.f_23 = Local_165.f_28;
									}
									Local_165.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_165.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 2))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 0))
				{
					if ((((((!unk_0xCE990E643CD9D0E5(Local_165.f_29, 1) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)) && !unk_0x1BD7199394D7F19A(2, 204))
					{
						bVar10 = unk_0x22D6FB6153F774D3(2, 188);
						bVar11 = unk_0x22D6FB6153F774D3(2, 187);
						if (bVar11 || ((((((bVar10 && !unk_0x1BD7199394D7F19A(2, 204)) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)))
						{
							func_73(&(Local_165.f_790), 0, 0);
							unk_0xBE20AB8238688965(&(Local_165.f_29), 1);
						}
					}
					else if (func_71(&(Local_165.f_790), 100, 0))
					{
						func_69(&(Local_165.f_790));
						unk_0xD2459066EA58CE43(&(Local_165.f_29), 1);
					}
					if ((((((((unk_0x1BD7199394D7F19A(2, 204) && !bVar11) && !bVar10) && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 8))
					{
						unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_165.f_23 >= 10000)
							{
								iVar12 = 5000;
							}
							else if (Local_165.f_23 >= 5000)
							{
								iVar12 = 1000;
							}
							else if (Local_165.f_23 >= 500)
							{
								iVar12 = 500;
							}
							else if (Local_165.f_23 >= 100)
							{
								iVar12 = 50;
							}
							else
							{
								iVar12 = 10;
							}
							if (Local_165.f_23 > Local_165.f_19)
							{
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
							if (Local_165.f_23 > Local_165.f_27)
							{
								Local_165.f_23 = Local_165.f_27;
							}
							if (Local_165.f_23 < Local_165.f_28)
							{
								Local_165.f_23 = Local_165.f_28;
							}
							if (Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
							{
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
							Local_165.f_23 = (Local_165.f_23 + iVar12);
							if (Local_165.f_23 > Local_165.f_19)
							{
								bVar4 = false;
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
							if (Local_165.f_23 > Local_165.f_27)
							{
								bVar4 = false;
								Local_165.f_23 = Local_165.f_27;
							}
							if (Local_165.f_23 < Local_165.f_28)
							{
								Local_165.f_23 = Local_165.f_28;
							}
							if (Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
							{
								bVar4 = false;
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
						}
					}
					else
					{
						if (Local_165.f_23 >= 10000)
						{
							iVar12 = 5000;
						}
						else if (Local_165.f_23 >= 5000)
						{
							iVar12 = 1000;
						}
						else if (Local_165.f_23 >= 500)
						{
							iVar12 = 500;
						}
						else if (Local_165.f_23 >= 100)
						{
							iVar12 = 50;
						}
						else
						{
							iVar12 = 10;
						}
						if (Local_165.f_23 > Local_165.f_19)
						{
							Local_165.f_23 = (Local_165.f_23 - iVar12);
						}
						if (Local_165.f_23 > Local_165.f_27)
						{
							Local_165.f_23 = Local_165.f_27;
						}
						if (Local_165.f_23 < Local_165.f_28)
						{
							Local_165.f_23 = Local_165.f_28;
						}
						if (Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
						{
							Local_165.f_23 = (Local_165.f_23 - iVar12);
						}
						iVar13 = Local_165.f_23;
						if (bVar10)
						{
							Local_165.f_23 = (Local_165.f_23 + iVar12);
							if (Local_165.f_23 > Local_165.f_19)
							{
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
							if (Local_165.f_23 > Local_165.f_27)
							{
								Local_165.f_23 = Local_165.f_27;
							}
							if (Local_165.f_23 < Local_165.f_28)
							{
								Local_165.f_23 = Local_165.f_28;
							}
							if (Local_165.f_23 > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
							{
								Local_165.f_23 = (Local_165.f_23 - iVar12);
							}
							if (Local_165.f_23 == iVar13)
							{
								if (unk_0x1BD7199394D7F19A(2, 188) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 10))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 10);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_165.f_22), 10);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar11)
						{
							if (Local_165.f_23 <= 100)
							{
								iVar12 = 10;
							}
							else if (Local_165.f_23 <= 500)
							{
								iVar12 = 50;
							}
							else if (Local_165.f_23 <= 5000)
							{
								iVar12 = 500;
							}
							else if (Local_165.f_23 <= 10000)
							{
								iVar12 = 1000;
							}
							else
							{
								iVar12 = 5000;
							}
							Local_165.f_23 = (Local_165.f_23 - iVar12);
							if (Local_165.f_23 < Local_165.f_28)
							{
								Local_165.f_23 = Local_165.f_28;
							}
							if (Local_165.f_23 == iVar13)
							{
								if (unk_0x1BD7199394D7F19A(2, 187) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 10))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 10);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_165.f_22), 10);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_165.f_23 == Local_165.f_27 || (Local_165.f_23 + iVar12) > Local_165.f_27) || (Local_165.f_23 + iVar12) > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
					{
						unk_0xBE20AB8238688965(&(Local_165.f_22), 8);
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 8);
					}
					unk_0xBE20AB8238688965(&(Local_165.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0xDFAB5E5CBE16E8B1() && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
						{
							if (((((unk_0x1BD7199394D7F19A(2, 201) && !unk_0x22D6FB6153F774D3(2, 203)) && !unk_0x22D6FB6153F774D3(2, 204)) && Local_165.f_23 >= Local_165.f_28) && Local_165.f_23 <= Local_165.f_19) && Local_165.f_19 >= (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 + Local_165.f_28))
							{
								unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
								Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								if (func_160(Local_165.f_23))
								{
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0xB88AF19828BF16ED(Local_165.f_24);
							}
							else if (((unk_0x1BD7199394D7F19A(2, 203) && !unk_0x22D6FB6153F774D3(2, 201)) && !unk_0x22D6FB6153F774D3(2, 204)) || Local_165.f_19 < (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 + Local_165.f_28))
							{
								if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
								{
									unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 2);
								}
								else
								{
									Local_174.f_4 = joaat("QUIT");
									Local_175.f_2 = joaat("QUIT");
									Local_174.f_7 = func_403();
									Local_174.f_17 = func_206(&uLocal_170, 0, 0);
									Local_174.f_18 = func_409();
									Local_174.f_19 = func_208();
									if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
									{
										Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
									}
									if (Global_262145.f_26109)
									{
										unk_0xF84B58C7E1A243F6(&Local_174);
									}
									func_380(1);
									unk_0xD289B55B6AADBA10(1);
									return;
								}
							}
						}
						if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_336("TCP_PLACE_PAIR") && !bLocal_183) && !bLocal_184) && !bLocal_179)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_336("TCP_PLACE_PAIR") && !bLocal_183) && !bLocal_184) && !bLocal_179)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_165.f_30 != -1 && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 2))
					{
						if ((unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 > 0)
						{
							unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 2);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
						}
						else if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 <= 0)
						{
							Local_165.f_1 = 1;
						}
						if (Local_165.f_1)
						{
							if (func_155(Local_165.f_23, &(Local_165.f_14), 2, Local_165))
							{
								if (Local_165.f_14 == 3)
								{
									Local_165.f_1 = 0;
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
									Local_165.f_14 = 0;
								}
								else
								{
									Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 = Local_165.f_23;
									if (Local_165.f_23 >= 10000)
									{
										iVar14 = 5000;
									}
									else if (Local_165.f_23 >= 5000)
									{
										iVar14 = 1000;
									}
									else if (Local_165.f_23 >= 500)
									{
										iVar14 = 500;
									}
									else if (Local_165.f_23 >= 100)
									{
										iVar14 = 50;
									}
									else
									{
										iVar14 = 10;
									}
									if ((Local_165.f_23 == Local_165.f_27 || (Local_165.f_23 + iVar14) > Local_165.f_27) || (Local_165.f_23 + iVar14) > (Local_165.f_19 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
									{
										Local_174.f_5 = 1;
									}
									Local_174.f_6 = (Local_174.f_6 - Local_165.f_23);
									Local_175.f_3 = (Local_175.f_3 - Local_165.f_23);
									Local_175.f_8 = (Local_175.f_8 + Local_165.f_23);
									Local_174.f_13 = (Local_174.f_13 + Local_165.f_23);
									Local_165.f_19 = func_403();
									Local_165.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_165.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar15 = true;
				iVar16 = 0;
				while (iVar16 < 4)
				{
					iVar17 = Local_122.f_117[(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != -1)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_164[iVar17 /*9*/], 2))
						{
							bVar15 = false;
						}
					}
					iVar16++;
				}
				if ((((!func_336("TCP_WAIT") && !bVar15) && !bLocal_183) && !bLocal_184) && !bLocal_179)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] > 3 && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 0)) && !Local_165.f_1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_165.f_29, 0))
				{
					unk_0xD289B55B6AADBA10(1);
					Local_175.f_12++;
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0 && Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 <= 0)
					{
						unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar18 = true;
					iVar19 = 0;
					while (iVar19 < 4)
					{
						iVar20 = Local_122.f_117[(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != -1)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_164[iVar20 /*9*/], 2))
							{
								bVar18 = false;
							}
						}
						iVar19++;
					}
					if ((((!func_336("TCP_WAIT") && !bVar18) && !bLocal_183) && !bLocal_184) && !bLocal_179)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 >= 0)
			{
				if (Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
					{
						unk_0xBE20AB8238688965(&(Local_165.f_22), 6);
					}
					unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
					func_161(3);
				}
			}
			break;
		
		case 3:
			if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0 && Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 <= 0)
			{
				unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 3);
				if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
				{
					unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))])) && unk_0x3D70CCF2C9B362CD(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]))
			{
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0xF05B7723022657B3(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]))
				{
					unk_0x5F00FA3094B612F5(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!unk_0xCE990E643CD9D0E5(Local_165.f_22, 0) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 4)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 2)) && !unk_0xCE990E643CD9D0E5(Local_165.f_22, 1)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 1)) && !unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 3)) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
				{
					if ((!unk_0xDFAB5E5CBE16E8B1() && !func_338()) && !unk_0x06EBE4F22EC30D45())
					{
						if ((unk_0x1BD7199394D7F19A(2, 207) && !unk_0x22D6FB6153F774D3(2, 203)) && !unk_0x22D6FB6153F774D3(2, 201))
						{
							Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							unk_0xB88AF19828BF16ED(Local_165.f_24);
							unk_0xBE20AB8238688965(&(Local_165.f_22), 7);
							unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
						}
					}
				}
				if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 0))
				{
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_206(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_336("TCP_PLACE_PLAY") && !bLocal_183) && !bLocal_184) && !bLocal_179)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!unk_0xDFAB5E5CBE16E8B1() && !func_338()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
							{
								if ((unk_0x1BD7199394D7F19A(2, 201) && !unk_0x22D6FB6153F774D3(2, 203)) && (!unk_0x22D6FB6153F774D3(2, 207) || unk_0xCE990E643CD9D0E5(Local_165.f_22, 4)))
								{
									if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
									{
										Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_165.f_24);
									}
									unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 2);
								}
								else if ((unk_0x1BD7199394D7F19A(2, 203) && !unk_0x22D6FB6153F774D3(2, 201)) && (!unk_0x22D6FB6153F774D3(2, 207) || unk_0xCE990E643CD9D0E5(Local_165.f_22, 4)))
								{
									if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
									{
										Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_165.f_24);
									}
									unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 1);
								}
							}
						}
						else if (func_72(&(Local_122.f_150[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*2*/])))
						{
							if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
							{
								Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								unk_0xB88AF19828BF16ED(Local_165.f_24);
							}
							unk_0xBE20AB8238688965(&(Local_165.f_22), 0);
							unk_0xBE20AB8238688965(&(Local_165.f_22), 1);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 3);
						if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
						{
							unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 2))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 3))
					{
						if ((Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317))) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
						{
							Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							if (func_160(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3))
							{
								unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1148846080, 0);
							}
							else
							{
								unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1148846080, 0);
							}
							unk_0xB88AF19828BF16ED(Local_165.f_24);
							unk_0xBE20AB8238688965(&(Local_165.f_22), 3);
						}
					}
					else if (Local_165.f_30 != -1)
					{
						if ((unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 > 0)
						{
							Local_165.f_796 = "idle_cardgames";
							Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), Local_165.f_796, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_165.f_24);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 1);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 2);
							unk_0xD2459066EA58CE43(&(Local_165.f_22), 3);
							unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 1);
							if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
							{
								unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844) && Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 <= 0)
						{
							Local_165.f_1 = 1;
						}
						if (Local_165.f_1)
						{
							if (func_155(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3, &(Local_165.f_14), 2, Local_165))
							{
								if (Local_165.f_14 == 3)
								{
									Local_165.f_1 = 0;
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 1);
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 2);
									unk_0xD2459066EA58CE43(&(Local_165.f_22), 3);
									if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
									{
										Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, false, true, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1148846080, 0);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										unk_0xB88AF19828BF16ED(Local_165.f_24);
									}
									Local_165.f_14 = 0;
								}
								else
								{
									Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 = Local_164[unk_0x460153A63B9477BC() /*9*/].f_3;
									Local_174.f_6 = (Local_174.f_6 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
									Local_175.f_3 = (Local_175.f_3 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
									Local_165.f_19 = func_403();
									Local_165.f_1 = 0;
								}
							}
						}
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 1))
				{
					if ((Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317))) || !unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
					{
						Local_165.f_796 = "idle_cardgames";
						Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), Local_165.f_796, 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_165.f_24);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 1);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 2);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 3);
						unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 3);
						if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 4))
						{
							unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 7) && unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_92(), "cards_pickup", 3))
				{
					if (Local_165.f_30 != -1 && (unk_0x369E69441C066912(Local_165.f_30) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
					{
						Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, false, true, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						unk_0xB88AF19828BF16ED(Local_165.f_24);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 0);
						unk_0xD2459066EA58CE43(&(Local_165.f_22), 7);
						unk_0xBE20AB8238688965(&(Local_165.f_22), 4);
					}
				}
				if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
				{
					func_151(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 4:
			if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 >= 0)
			{
				bVar22 = true;
				iVar23 = 0;
				while (iVar23 < 4)
				{
					iVar24 = Local_122.f_117[(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != -1)
					{
						if ((!unk_0xCE990E643CD9D0E5(Local_164[iVar24 /*9*/], 1) && !unk_0xCE990E643CD9D0E5(Local_164[iVar24 /*9*/], 3)) && (Local_164[iVar24 /*9*/].f_3 > 0 || Local_164[iVar24 /*9*/].f_5 > 0))
						{
							bVar22 = false;
						}
					}
					iVar23++;
				}
				if (Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] == 9 && !bVar22)
				{
					if (((!func_336("TCP_WAIT") && !bLocal_183) && !bLocal_184) && !bLocal_179)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_336("TCP_WAIT") || func_336("TCP_PLACE_PLAY"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] == 1)
				{
					if (unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 5))
					{
						bVar25 = true;
					}
					if (Local_165.f_31 != -1)
					{
						func_312(&(Local_165.f_31));
						Local_165.f_31 = -1;
					}
					Local_165.f_2 = 0;
					Local_165.f_3 = 0;
					Local_165.f_4 = 0;
					Local_165.f_6 = 0;
					Local_165.f_22 = 0;
					Local_164[unk_0x460153A63B9477BC() /*9*/] = 0;
					Local_164[unk_0x460153A63B9477BC() /*9*/].f_6 = 0;
					Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 = 0;
					Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 = 0;
					Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 = 0;
					func_161(0);
					Local_174.f_7 = func_403();
					Local_174.f_17 = func_206(&uLocal_170, 0, 0);
					Local_174.f_18 = func_409();
					Local_174.f_19 = func_208();
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 > -1)
					{
						Local_174.f_9 = Local_122.f_30[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2];
					}
					if (!func_355() || func_349())
					{
						if (Global_262145.f_26109 && !bVar25)
						{
							unk_0xF84B58C7E1A243F6(&Local_174);
						}
						func_380(1);
						unk_0xD289B55B6AADBA10(1);
						return;
					}
					if (func_334())
					{
						switch (func_330())
						{
							case 0:
								Local_174.f_4 = 1982714739;
								break;
							
							case 1:
								Local_174.f_4 = -633175758;
								break;
							
							case 2:
								Local_174.f_4 = -1625999354;
								break;
						}
						switch (func_330())
						{
							case 0:
								Local_175.f_2 = 1982714739;
								break;
							
							case 1:
								Local_175.f_2 = -633175758;
								break;
							
							case 2:
								Local_175.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26109 && !bVar25)
						{
							unk_0xF84B58C7E1A243F6(&Local_174);
						}
						func_380(1);
						unk_0xD289B55B6AADBA10(1);
						if (func_330() == 2)
						{
							func_223("CAS_MG_CTIME", -1);
						}
						else
						{
							func_223("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26109 && !bVar25)
					{
						unk_0xF84B58C7E1A243F6(&Local_174);
					}
					return;
				}
				if ((Local_122.f_5[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] && Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] > 0) && unk_0xCE990E643CD9D0E5(Local_122.f_20[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2], func_197(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar28 = func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0);
					if (func_25(iVar27))
					{
						bVar26 = true;
					}
					if (iVar28 > 500)
					{
						Local_174.f_22 = 745220304;
					}
					else if (iVar28 > 400)
					{
						Local_174.f_22 = 588481795;
					}
					else if (iVar28 > 300)
					{
						Local_174.f_22 = 313822186;
					}
					else if (iVar28 > 200)
					{
						Local_174.f_22 = -310009958;
					}
					else if (iVar28 > 100)
					{
						Local_174.f_22 = 378531009;
					}
					else
					{
						Local_174.f_22 = 201584577;
					}
					if (((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 5))
						{
							Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							sVar29 = func_150(Local_174.f_6);
							if ((Local_165.f_26 == 1 || func_385(Local_165.f_18) == 2) || func_385(Local_165.f_18) == 3)
							{
								if (((Local_165.f_15 >= 35000 && iVar28 > iVar27) && iVar28 > 300) || (Local_165.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_149();
								}
								else if (((Local_165.f_15 >= 35000 && iVar28 > 300) && iVar28 < iVar27) && !(Local_165.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_147();
								}
							}
							else if (((Local_165.f_15 >= 4500 && iVar28 > iVar27) && iVar28 > 300) || (Local_165.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_149();
							}
							else if (((Local_165.f_15 >= 4500 && iVar28 > 300) && iVar28 < iVar27) && !(Local_165.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_147();
							}
							unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), sVar29, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_165.f_24);
							unk_0xBE20AB8238688965(&(Local_165.f_22), 5);
						}
						if (Local_174.f_14 > 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 9))
							{
								if (func_102(Local_174.f_14, &(Local_165.f_14), 2))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									unk_0xBE20AB8238688965(&(Local_165.f_22), 9);
									if (func_419(unk_0x460153A63B9477BC()) && iVar28 > 500)
									{
										unk_0xBE20AB8238688965(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_847), 11);
									}
								}
							}
						}
					}
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 > 0)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/], 3))
						{
							if (!bVar26)
							{
								if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14);
									}
								}
								if (!Local_165.f_2)
								{
									Local_165.f_2 = 1;
									Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
									Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
									Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
								}
								if (!Local_165.f_3)
								{
									Local_165.f_3 = 1;
									Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
									Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
									Local_175.f_13++;
									Local_174.f_15 = 1;
									Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
									Local_174.f_4 = -562306862;
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar30 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar30 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar30 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar30 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar30 = true;
									}
									if (bVar30)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14);
									}
								}
								if (!Local_165.f_2)
								{
									Local_165.f_2 = 1;
									Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
									Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
									Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
								}
								if (!Local_165.f_3)
								{
									Local_165.f_3 = 1;
									Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
									Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
									Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
									Local_175.f_13++;
									Local_174.f_15 = 1;
									Local_174.f_4 = -562306862;
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar28 = func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 1, 0);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar28 = func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 1);
									if (iVar28 > iVar27)
									{
										if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
											}
										}
										if (!Local_165.f_2)
										{
											Local_165.f_2 = 1;
											Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
											Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
											Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
										}
										if (!Local_165.f_3)
										{
											Local_165.f_3 = 1;
											Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
											Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
											Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
											Local_175.f_13++;
											Local_174.f_15 = 1;
											Local_174.f_4 = -562306862;
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
										{
											if (!func_336("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_165.f_2)
										{
											Local_165.f_2 = 1;
											Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
											Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
											Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
											func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
										}
										if (!Local_165.f_3)
										{
											Local_165.f_3 = 1;
											Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
											Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
											Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4);
											Local_175.f_13++;
											Local_174.f_15 = 1;
											Local_174.f_4 = -562306862;
										}
										Local_165.f_2 = 1;
									}
									else
									{
										if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
										{
											if (Local_174.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_174.f_4 = -1851302466;
										if (!Local_165.f_3)
										{
											func_205((Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3));
											Local_165.f_3 = 1;
											Local_175.f_14++;
										}
										Local_165.f_2 = 1;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
										}
									}
									if (!Local_165.f_2)
									{
										Local_165.f_2 = 1;
										Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
										Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
										Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * 2);
									}
									if (!Local_165.f_3)
									{
										Local_165.f_3 = 1;
										Local_175.f_3 = (Local_175.f_3 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
										Local_174.f_6 = (Local_174.f_6 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
										Local_175.f_13++;
										Local_174.f_15 = 1;
										Local_174.f_14 = (Local_174.f_14 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 * 2);
										Local_174.f_4 = -562306862;
									}
								}
								else
								{
									if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
									{
										if (Local_174.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_174.f_4 = -1851302466;
									if (!Local_165.f_3)
									{
										func_205((Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3));
										Local_165.f_3 = 1;
										Local_175.f_14++;
									}
									Local_165.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar31 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar31 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar31 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar31 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar31 = true;
									}
									if (bVar31)
									{
										if (Local_174.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 1), Local_174.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_174.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_174.f_4 = -1851302466;
								if (!Local_165.f_3)
								{
									func_205((Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 + Local_164[unk_0x460153A63B9477BC() /*9*/].f_3));
									Local_165.f_3 = 1;
									Local_175.f_14++;
								}
								Local_165.f_2 = 1;
							}
							iVar28 = func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0);
							if (!Local_165.f_4)
							{
								if (func_96(iVar28) > 0)
								{
									Local_175.f_3 = (Local_175.f_3 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * func_96(iVar28)));
									Local_174.f_6 = (Local_174.f_6 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * func_96(iVar28)));
									Local_175.f_13++;
									Local_174.f_15 = 1;
									Local_174.f_14 = (Local_174.f_14 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_165.f_4 = 1;
							}
						}
						else
						{
							if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 >= 0)
							{
								Local_174.f_4 = 686661968;
							}
							if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
							{
								if (Local_174.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_165.f_3)
							{
								func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_3);
								Local_165.f_3 = 1;
								Local_175.f_14++;
							}
							Local_165.f_4 = 1;
							Local_165.f_2 = 1;
						}
					}
					else
					{
						Local_165.f_2 = 1;
						Local_165.f_3 = 1;
						Local_165.f_4 = 1;
					}
					iVar28 = func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0);
					if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 > 0)
					{
						Local_174.f_21 = 1;
						if (func_23(iVar28) > 0)
						{
							if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0)
							{
								if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0), Local_174.f_14);
									}
								}
							}
							if (!Local_165.f_6)
							{
								Local_165.f_6 = 1;
								Local_175.f_3 = (Local_175.f_3 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 * func_23(iVar28))));
								Local_174.f_6 = (Local_174.f_6 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 * func_23(iVar28))));
								Local_175.f_13++;
								Local_174.f_15 = 1;
								Local_174.f_14 = (Local_174.f_14 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 + (Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 * func_23(iVar28))));
								Local_174.f_4 = -562306862;
							}
						}
						else
						{
							if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0)
							{
								Local_174.f_4 = -1851302466;
								if ((((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && !bLocal_183) && !bLocal_184) && !bLocal_179)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_165.f_6)
							{
								func_205(Local_164[unk_0x460153A63B9477BC() /*9*/].f_5);
								Local_165.f_6 = 1;
								if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 <= 0)
								{
									Local_175.f_14++;
								}
							}
						}
					}
					else
					{
						Local_165.f_6 = 1;
					}
				}
				else
				{
					if (!Local_122.f_5[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2])
					{
					}
					if (Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] <= 0)
					{
					}
					if (!unk_0xCE990E643CD9D0E5(Local_122.f_20[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2], func_197(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1)))
					{
					}
					if (((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6)
					{
						if (Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] <= 0)
						{
							Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 = 0;
							Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 = 0;
							Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 = 0;
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_98(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_99(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_100(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_403();
		iVar1 = (Global_262145.f_26468 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_403() - Global_1696910);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1696910 = (Global_1696910 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2462183 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26476)
				{
					Global_2462182 = 1;
				}
				else if (iVar4 >= Global_262145.f_26475)
				{
					Global_2462183 = 1;
				}
			}
			Var5 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x982EAC40778C4B0A(-1) + unk_0x043DDE27C7AA3445());
			Var5.f_6 = Global_1696910;
			unk_0xBE75FF31A3167DE9(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26472)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26472);
		func_109();
		Global_2462183 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(joaat("MPPLY_CASINO_CHIPS_WONTIM"), unk_0x5A002C4821A13338());
}

int func_111()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_112(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26469)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_329(unk_0x460153A63B9477BC()))
	{
		return Global_262145.f_26264;
	}
	return Global_262145.f_26263;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(joaat("MPPLY_CASINO_CHIPS_PURTIM"), unk_0x5A002C4821A13338());
}

int func_118()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_119()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_120()
{
	if (unk_0xCE990E643CD9D0E5(Global_1696949, 6))
	{
		unk_0xBE20AB8238688965(&Global_1696949, 9);
		func_371(&Global_1696952, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		unk_0xBE20AB8238688965(&Global_1696949, 1);
	}
}

bool func_122()
{
	return (unk_0xCE990E643CD9D0E5(Global_1696949, 6) || unk_0xCE990E643CD9D0E5(Global_1696949, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0xBE20AB8238688965(&Global_1696949, 6);
	Global_1696950 = iParam0;
	Global_1696951 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					unk_0xA6292C176D37A114(func_129(func_142()));
					if (func_146(iParam1))
					{
						unk_0xFD1477B29C5CAB48(iVar0, iParam2);
					}
					else
					{
						unk_0xA1ADC53367E34B7C(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 0))
	{
		if (func_146(iParam1))
		{
			unk_0xFD1477B29C5CAB48(iVar0, iParam2);
		}
		else
		{
			unk_0xA1ADC53367E34B7C(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_126(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_137()) || unk_0x701B05C16EF4F48E())
		{
			if (func_136(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_133(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_135(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_134();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_134()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_135(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	return Global_1312763;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_137()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4264051[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4264051[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4264051[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x9ED721597A55C9F9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_137()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4264051[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4264051[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x4BEB563BB33B9937())
		{
			unk_0x2ABDF07188759AF4();
		}
	}
	if (bVar0 || unk_0x2B083CB3B730204F(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = uParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26468 - func_403());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8686B1F0487AE4B9())
	{
		if (unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x043DDE27C7AA3445() + unk_0x982EAC40778C4B0A(-1));
		}
	}
	else if (unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5C556DABD4C01559();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()
{
	if (func_148())
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(unk_0x460153A63B9477BC());
}

char* func_149()
{
	if (func_148())
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_418(unk_0x460153A63B9477BC()) || func_385(Local_165.f_18) == 2) || func_385(Local_165.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (unk_0x344C570D6F8700DF(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (unk_0x344C570D6F8700DF(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x344C570D6F8700DF(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (unk_0x344C570D6F8700DF(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_418(unk_0x460153A63B9477BC()) || func_385(Local_165.f_18) == 2) || func_385(Local_165.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (unk_0x344C570D6F8700DF(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (unk_0x344C570D6F8700DF(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_152(3, iVar0);
		Global_1378744.f_2775[iVar0] = uParam0;
		StringCopy(&(Global_1378744.f_2775.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_2775.f_183[iVar0] = iParam3;
		Global_1378744.f_2775.f_172[iVar0] = iParam2;
		Global_1378744.f_2775.f_205[iVar0] = iParam4;
		Global_1378744.f_2775.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_2775.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_2775.f_420[iVar0] = iParam7;
		Global_1378744.f_2775.f_453[iVar0] = iParam8;
		Global_1378744.f_2775.f_431[iVar0] = iParam9;
		Global_1378744.f_2775.f_442[iVar0] = iParam10;
		Global_1378744.f_2775.f_464[iVar0] = iParam11;
		Global_1378744.f_2775.f_475[iVar0] = iParam12;
		Global_1378744.f_2775.f_486[iVar0] = iParam13;
		Global_1378744.f_2775.f_497[iVar0] = iParam14;
	}
}

void func_152(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_154(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_403();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696910 - func_403());
			if (iParam1 == 1)
			{
				Global_2462182 = 1;
			}
			else if (iVar2 >= Global_262145.f_26477)
			{
				Global_2462183 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1696910 = (Global_1696910 - iVar2);
			Var3 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x982EAC40778C4B0A(-1) + unk_0x043DDE27C7AA3445());
			Var3.f_6 = Global_1696910;
			Var3.f_7 = iParam5;
			unk_0xBE75FF31A3167DE9(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (func_334())
	{
		return 0;
	}
	iVar0 = func_403();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_158(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_152(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0)
{
	if ((Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 2 || Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 == 3) || func_418(unk_0x460153A63B9477BC()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_161(int iParam0)
{
	Local_165.f_797 = iParam0;
}

void func_162()
{
	char* sVar0;
	int iVar1;
	
	unk_0x779660A9E5364C4D(2, 209, 1);
	unk_0x26A60F42A1132477(2, 209);
	if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
	{
		if ((unk_0x275A6259432E6B3C(2, 209) && !unk_0xB9C0D9B37277621D(2, 210)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 0))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			unk_0xBE20AB8238688965(&(Local_165.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x494D5FF88119CDC0(sVar0, false);
		if (func_297(0, -1, 0) && unk_0xC7F5A2E99D75A65C(sVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 4))
			{
				func_296(0, 0);
				func_294(1, sVar0, sVar0);
				func_293("TCP_HANDS");
				func_180(1, 2, 2, 2, 1);
				func_179(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_175(iVar1, "TCP_HAND1", 0, 1, 0, 0);
				func_175(iVar1, "TCP_10", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_8", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				func_175(iVar1, "TCP_HAND2", 0, 1, 0, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(58, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				func_175(iVar1, "TCP_HAND3", 0, 1, 0, 0);
				func_175(iVar1, "TCP_2", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_4", 1, 1, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				func_175(iVar1, "TCP_HAND4", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_Q", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				func_175(iVar1, "TCP_HAND5", 0, 1, 0, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				func_175(iVar1, "TCP_HAND6", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(56, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_292(-1, 1, 1);
				unk_0xBE20AB8238688965(&(Local_165.f_20), 4);
			}
			func_262(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x275A6259432E6B3C(2, 202))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_259(1, -1);
			unk_0x2DDA2C702A92866E(sVar0);
			iLocal_178 = 1;
			Local_165.f_20 = 0;
			unk_0xBE20AB8238688965(&(Local_165.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22550.f_5224 >= 256)
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
	Global_22550.f_4433[Global_22550.f_5224] = iParam0;
	Global_22550.f_5224++;
	Global_22550.f_2124[Global_22550.f_5742 /*5*/][Global_22550.f_5743] = 4;
	Global_22550.f_5743++;
	if (Global_22550.f_5743 >= Global_22550.f_5741)
	{
		fVar0 = func_172();
		if (Global_22550.f_5075[Global_22550.f_5219] && Global_22550.f_5743 == Global_22550.f_5741)
		{
			func_165(26, 1, 0, &fVar1, &fVar2, 0);
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
			fVar3 = func_164();
			if (fVar3 > Global_22550.f_5745[Global_22550.f_5218])
			{
				Global_22550.f_5745[Global_22550.f_5218] = fVar3;
			}
		}
	}
}

float func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
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
			if (func_165(Global_22550.f_4433[((Global_22550.f_5224 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
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

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_171(iParam0), 64);
	StringCopy(&cVar1, func_168(iParam0, bParam1), 64);
	if (unk_0x856D5567211886A2(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x9DD549AAA043F83A(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_167())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_167())
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
		Var7.x = (Var7.x * (func_166(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_166(iParam0) / fVar4));
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

float func_166(int iParam0)
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

int func_167()
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

var func_168(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_170(unk_0x460153A63B9477BC()) };
			if (unk_0x716812D32AF6C4C0(&Var2, &uVar1))
			{
				return func_169(&uVar1);
			}
		}
		else
		{
			return func_169(&(Global_22550.f_7029[iParam0 /*16*/]));
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

var func_169(var uParam0)
{
	return uParam0;
}

struct<13> func_170(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

char* func_171(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_170(unk_0x460153A63B9477BC()) };
			unk_0x716812D32AF6C4C0(&Var1, &uVar0);
			return func_169(&uVar0);
		}
		else
		{
			return func_169(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_172()
{
	float fVar0;
	float fVar1;
	float fVar2;
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
	func_173(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_165(Global_22550.f_4433[((Global_22550.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_174(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_174(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_175(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_178(Global_22550.f_5218, 1);
	}
	else
	{
		func_178(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_177(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_176(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
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

float func_176(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_177(char* sParam0)
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
	func_173(0, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	return unk_0x842CB5919E31EB1F(1);
}

void func_178(int iParam0, bool bParam1)
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

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_181()
{
	char* sVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_165.f_20, 2))
	{
		unk_0xD2459066EA58CE43(&(Local_165.f_20), 2);
	}
	unk_0x779660A9E5364C4D(2, 210, 1);
	unk_0x26A60F42A1132477(2, 210);
	if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 0))
	{
		if ((unk_0x275A6259432E6B3C(2, 210) && !unk_0xB9C0D9B37277621D(2, 209)) && !unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			unk_0xBE20AB8238688965(&(Local_165.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x494D5FF88119CDC0(sVar0, false);
		if (func_297(0, -1, 0) && unk_0xC7F5A2E99D75A65C(sVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_165.f_20, 1))
			{
				func_296(0, 0);
				func_294(1, sVar0, sVar0);
				func_293("TCP_RULES");
				func_185(1, iLocal_178, 6);
				func_184(1, 1, 1, 1, 1);
				func_292(-1, 1, 1);
				func_291(func_183(iLocal_178), 0, 0);
				func_290(func_182(iLocal_178));
				unk_0xBE20AB8238688965(&(Local_165.f_20), 1);
			}
			func_262(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x275A6259432E6B3C(2, 202))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_259(1, -1);
			unk_0x2DDA2C702A92866E(sVar0);
			iLocal_178 = 1;
			Local_165.f_20 = 0;
			unk_0xBE20AB8238688965(&(Local_165.f_20), 2);
		}
		else if (unk_0x275A6259432E6B3C(2, 190))
		{
			iLocal_178++;
			if (iLocal_178 > 6)
			{
				iLocal_178 = 1;
			}
			unk_0xD2459066EA58CE43(&(Local_165.f_20), 1);
		}
		else if (unk_0x275A6259432E6B3C(2, 189))
		{
			iLocal_178 = (iLocal_178 - 1);
			if (iLocal_178 < 1)
			{
				iLocal_178 = 6;
			}
			unk_0xD2459066EA58CE43(&(Local_165.f_20), 1);
		}
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5075[0] = iParam0;
	Global_22550.f_5075[1] = iParam1;
	Global_22550.f_5075[2] = iParam2;
	Global_22550.f_5075[3] = iParam3;
	Global_22550.f_5075[4] = iParam4;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	Global_22550.f_5735 = iParam0;
	Global_22550.f_5736 = iParam1;
	Global_22550.f_5737 = iParam2;
}

void func_186(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x628AF533B14EF310(2))
	{
		*uParam2 = 0;
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(false);
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(*uParam0, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
		}
		func_193(uParam2);
	}
	if (Global_1315735 < 2)
	{
		func_192(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x95EF219D38B20CFF(*uParam0))
		{
			*uParam0 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		}
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			unk_0x903663B04BCCB2FB(*uParam0, "CLEAR_ALL");
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xCE990E643CD9D0E5(uParam2->f_689, iVar0))
				{
					unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					if (!unk_0xCE990E643CD9D0E5(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_191(unk_0xED026A379B794F61(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_191(unk_0xED026A379B794F61(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_191(unk_0x32F8D6499042A233(iVar4, iVar5, true));
					}
					if (unk_0xCE990E643CD9D0E5(uParam2->f_686, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x7899A951E85F4B28(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xCE990E643CD9D0E5(uParam2->f_687, iVar0))
							{
								unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x2042E9CA4306F725();
					}
					else if (unk_0xCE990E643CD9D0E5(uParam2->f_688, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0x9EFD301E3BE8324E(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x2042E9CA4306F725();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (unk_0xCE990E643CD9D0E5(uParam2->f_691, iVar0))
						{
							unk_0xF1B28F753235CE2A(true);
							unk_0xAD291B8F75D737AD(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							unk_0xF1B28F753235CE2A(false);
							unk_0xAD291B8F75D737AD(361);
						}
					}
					unk_0xE1FDD153F5858534();
				}
				else
				{
					unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					func_191(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0x7BCC91F3C1CF24E8(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_191(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (unk_0xCE990E643CD9D0E5(uParam2->f_686, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x7899A951E85F4B28(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xCE990E643CD9D0E5(uParam2->f_687, iVar0))
							{
								unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x2042E9CA4306F725();
					}
					else if (unk_0xCE990E643CD9D0E5(uParam2->f_688, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0x9EFD301E3BE8324E(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x2042E9CA4306F725();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						unk_0xF1B28F753235CE2A(false);
						unk_0xAD291B8F75D737AD(361);
					}
					unk_0xE1FDD153F5858534();
				}
				iVar0++;
			}
			unk_0x830F007E19C63E14(*uParam0, "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE(uParam2->f_699);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAD291B8F75D737AD(0);
			unk_0xE1FDD153F5858534();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_189(*uParam0, uParam1);
	}
	func_188();
}

void func_188()
{
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
}

void func_189(int iParam0, var uParam1)
{
	unk_0x37FC7E88C7659D33(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_190(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_191(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_192(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_193(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_194(var uParam0)
{
	return uParam0->f_692;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_196()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_198(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0xBE20AB8238688965(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	unk_0xBE20AB8238688965(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_199(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_200(var uParam0)
{
	func_201(uParam0);
	uParam0->f_692 = 1;
}

void func_201(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_202(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (unk_0x344C570D6F8700DF(0, 8))
			{
				case 0:
					Local_165.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_165.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_165.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_165.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_165.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_165.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_165.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_165.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x344C570D6F8700DF(0, 13))
		{
			case 0:
				Local_165.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_165.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_165.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_165.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_165.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_165.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_165.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_165.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_165.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_165.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_165.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_165.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_165.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_165.f_796;
}

int func_203()
{
	if (func_204() == 0)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	return Global_1312485.f_18;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26471)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26471);
		func_109();
		Global_2462183 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 - iParam0));
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

int func_207()
{
	if ((((Local_165.f_2 && Local_165.f_3) && Local_165.f_4) && Local_165.f_6) && (!unk_0xCE990E643CD9D0E5(Local_165.f_22, 9) && Local_174.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (unk_0xC739CCA778931489() != func_209())
	{
		return unk_0xDBFD8BF43C56A525(unk_0x9019589211A13B02(unk_0xC739CCA778931489()));
	}
	return 0;
}

int func_209()
{
	return -1;
}

void func_210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	
	if (!unk_0x22D6FB6153F774D3(2, 207))
	{
		if (bLocal_184)
		{
			func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_184 = false;
	}
	if (!unk_0x22D6FB6153F774D3(2, 208))
	{
		if (bLocal_183)
		{
			func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_183 = false;
	}
	if ((((Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 >= 0 && !unk_0xDFAB5E5CBE16E8B1()) && !func_338()) && !unk_0x06EBE4F22EC30D45()) && Local_122.f_576[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2] < 12)
	{
		if (Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] > 0 && (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4) || unk_0xCE990E643CD9D0E5(Local_122.f_20[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2], func_197(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1))))
		{
			if ((((unk_0x22D6FB6153F774D3(2, 207) && !unk_0x22D6FB6153F774D3(2, 208)) && !bLocal_183) && !func_72(&uLocal_185)) && !unk_0x40397A9A17EEC1C5(Local_165.f_13))
			{
				if (!bLocal_184)
				{
					if (unk_0xF7B3A1430308F92B(0) == 4)
					{
						bLocal_179 = true;
					}
					func_301(unk_0x460153A63B9477BC(), 0, 0, 0);
					bLocal_184 = true;
				}
			}
		}
		else
		{
			if (bLocal_184)
			{
				func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
			}
			bLocal_184 = false;
		}
		if (Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((unk_0x22D6FB6153F774D3(2, 208) && !unk_0x22D6FB6153F774D3(2, 207)) && !bLocal_184) && !func_72(&uLocal_185)) && !unk_0x40397A9A17EEC1C5(Local_165.f_13))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					func_301(unk_0x460153A63B9477BC(), 0, 0, 0);
				}
				bLocal_183 = true;
			}
		}
		else
		{
			if (bLocal_183)
			{
				func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
			}
			bLocal_183 = false;
		}
	}
	else
	{
		if (bLocal_184 || bLocal_183)
		{
			func_301(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_184 = false;
		bLocal_183 = false;
	}
	if (bLocal_183 || bLocal_184)
	{
		unk_0xEE0C30F080302B85(1);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 166, true);
		}
		if (!unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x17E478571720218F("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x40397A9A17EEC1C5(Local_165.f_13))
		{
			Local_165.f_13 = unk_0x7CD2F129A4A837A8(26379945, 1);
			unk_0x3FD8029C7A771A0E(Local_165.f_13, func_222(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), func_221(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), func_220(bLocal_183), 0, 1, 1, 2);
			unk_0x2311A669433389E8(Local_165.f_13, "HAND_SHAKE", 0.03f);
			unk_0x3ED9330214992278(true, false, 3000, true, 0, 0);
		}
		else if (bLocal_183)
		{
			if (Local_122.f_5[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_122.f_389[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_336("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = unk_0x9CF655D210CC30DC(Local_165.f_13);
			fVar1 = 50f;
			fVar1 = func_219();
			fVar0 = func_217(fVar0, fVar1, 0.2f, 4);
			unk_0x3FD8029C7A771A0E(Local_165.f_13, func_222(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), func_221(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_184)
		{
			if (bLocal_179)
			{
				fVar2 = unk_0x9CF655D210CC30DC(Local_165.f_13);
				fVar3 = 50f;
				Var4 = { unk_0x64F296BB45631A29(Local_165.f_13, 2) };
				Var5 = { 0f, 0f, 0f };
				Var6 = { -38.1166f, -0.0930717f, -102.613f };
				Var7 = { unk_0xC29BFC65584F2213(Local_165.f_13) };
				Var8 = { 0f, 0f, 0f };
				Var9 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var9 = { func_216(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1) };
				Var6 = { func_215(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1) };
				fVar3 = func_219();
				if (Var6.f_2 < 0f)
				{
					Var6.f_2 = (Var6.f_2 + 360f);
				}
				Var5 = { func_213(Var4, Var6, 0.35f, 4) };
				Var8 = { func_212(Var7, Var9, 0.35f, 4) };
				if (Var5.f_2 > 180f)
				{
					Var5.f_2 = (Var5.f_2 - 360f);
				}
				else if (Var5.f_2 < -180f)
				{
					Var5.f_2 = (Var5.f_2 + 360f);
				}
				if (func_211(Var4, Var6, 10f, 0) && func_211(Var7, Var9, 0.1f, 0))
				{
					fVar2 = func_217(fVar2, fVar3, 0.35f, 4);
				}
				unk_0x3FD8029C7A771A0E(Local_165.f_13, Var8, Var5, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar10 = unk_0x9CF655D210CC30DC(Local_165.f_13);
				fVar11 = 50f;
				fVar11 = func_219();
				fVar10 = func_217(fVar10, fVar11, 0.35f, 4);
				unk_0x3FD8029C7A771A0E(Local_165.f_13, func_222(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), func_221(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1, Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, bLocal_183), fVar10, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x40397A9A17EEC1C5(Local_165.f_13))
		{
			unk_0xEE0C30F080302B85(1);
			if (!func_72(&uLocal_185) && bLocal_179)
			{
				func_73(&uLocal_185, 0, 0);
				unk_0x0A794A8277A63161("PokerCamTransition", 0, 0);
			}
			else if (func_71(&uLocal_185, 100, 0) || !bLocal_179)
			{
				unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
				unk_0xB8B0F7C8C1548C5B(Local_165.f_13, 0);
				unk_0xD289B55B6AADBA10(1);
				func_69(&uLocal_185);
				bLocal_179 = false;
			}
		}
	}
	if (bLocal_184 || bLocal_179)
	{
		if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4) || unk_0xCE990E643CD9D0E5(Local_122.f_20[Local_164[unk_0x460153A63B9477BC() /*9*/].f_2], func_197(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_211(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

Vector3 func_212(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.x = func_217(Param0.x, Param1.x, fParam2, iParam3);
	Var0.f_1 = func_217(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_217(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_213(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.x = func_214(Param0.x, Param1.x, fParam2, iParam3);
	Var0.f_1 = func_214(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_214(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_214(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x0D77CDCF403AEBD2((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_217(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_215(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_232(iParam0) };
	Var1 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

Vector3 func_216(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_232(iParam0) };
	return unk_0x1BAE5C94E38E44FE(func_362(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_217(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_218((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_217(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_217(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_218(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_219()
{
	if (bLocal_183)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_220(bool bParam0)
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_179)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_221(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_179)
	{
		return unk_0x1DB2F48A1F5B2CD3(2);
	}
	else
	{
		return func_215(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_179)
	{
		return unk_0x0F1DDC797C100E7F();
	}
	else
	{
		return func_216(iParam0);
	}
	return unk_0x1BAE5C94E38E44FE(func_76(iParam1), func_75(iParam1), Var0);
}

void func_223(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_224(int iParam0)
{
	if (Local_122.f_576[iParam0] == 2)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/].f_6, 0))
		{
			Local_165.f_799 = { Local_122.f_168[iParam0 /*55*/] };
			unk_0xBE20AB8238688965(&(Local_164[unk_0x460153A63B9477BC() /*9*/].f_6), 0);
		}
	}
	else if (Local_122.f_576[iParam0] > 2 && unk_0xCE990E643CD9D0E5(Local_164[unk_0x460153A63B9477BC() /*9*/].f_6, 0))
	{
		if (Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] > 0)
		{
			if (Local_165.f_854 != Local_122.f_410[unk_0x460153A63B9477BC() /*5*/])
			{
				Local_165.f_854 = { Local_122.f_410[unk_0x460153A63B9477BC() /*5*/] };
			}
			else
			{
				if (Local_165.f_854.f_1[iLocal_182] != Local_122.f_410[unk_0x460153A63B9477BC() /*5*/].f_1[iLocal_182])
				{
					iLocal_181 = 0;
					iLocal_182 = 0;
					if (Global_262145.f_26109)
					{
						unk_0xF84B58C7E1A243F6(&Local_174);
					}
					func_380(1);
					unk_0xD289B55B6AADBA10(1);
					return 1;
				}
				iLocal_182++;
				if (iLocal_182 >= Local_165.f_854)
				{
					iLocal_182 = 0;
				}
			}
		}
		if (Local_122.f_168[iParam0 /*55*/].f_2[iLocal_181] != Local_165.f_799.f_2[iLocal_181])
		{
			iLocal_181 = 0;
			iLocal_182 = 0;
			if (Global_262145.f_26109)
			{
				unk_0xF84B58C7E1A243F6(&Local_174);
			}
			func_380(1);
			unk_0xD289B55B6AADBA10(1);
			return 1;
		}
		iLocal_181++;
		if (iLocal_181 >= 52)
		{
			iLocal_181 = 0;
		}
	}
	return 0;
}

void func_225()
{
	int iVar0;
	
	iVar0 = func_385(Local_165.f_18);
	if (iVar0 < 32)
	{
		unk_0xBE20AB8238688965(&(Local_165.f_33), iVar0);
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_412())
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 != func_412())
	{
		return func_325(iVar0);
	}
	return 0;
}

int func_227(int iParam0)
{
	if (iParam0 != func_412())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_412();
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_334())
		{
			func_228(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_165.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_165.f_794), 0, 0);
	}
}

int func_229()
{
	int iVar0;
	
	iVar0 = func_385(Local_165.f_18);
	if (iVar0 < 32)
	{
		return unk_0xCE990E643CD9D0E5(Local_165.f_33, iVar0);
	}
	return 0;
}

char* func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_231()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_232(int iParam0)
{
	int iVar0;
	
	if (Local_165.f_26 == 1)
	{
		if (func_413() != func_412())
		{
			iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, func_233(Global_2425869[func_413() /*443*/].f_441), 0, 0, 0);
		}
	}
	else if (func_385(iParam0) == 0 || func_385(iParam0) == 1)
	{
		iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
	}
	if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xEE37CF67E6E839EA(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1444980172;
			break;
		
		case 2:
			return 1152516847;
			break;
		
		case 3:
			return -1282908006;
			break;
		
		case 4:
			return -1744066143;
			break;
	}
	return joaat("vw_prop_casino_3cardpoker_01b");
}

var func_234(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD78F5800B90C4843(func_231(), func_230(iParam1), func_362(iParam0), func_232(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_235(int iParam0, struct<3> Param1, bool bParam2)
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

Vector3 func_236(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD7D25254A712E758(func_231(), func_230(iParam1), func_362(iParam0), func_232(iParam0), 0.01f, 2) };
	return Var0;
}

int func_237()
{
	unk_0x131ED02492676000(func_45());
	unk_0x131ED02492676000(func_78());
	unk_0x131ED02492676000(func_92());
	unk_0x131ED02492676000(func_231());
	if (((unk_0xC614DDE265D18415(func_45()) && unk_0xC614DDE265D18415(func_78())) && unk_0xC614DDE265D18415(func_92())) && unk_0xC614DDE265D18415(func_231()))
	{
		return 1;
	}
	return 0;
}

int func_238()
{
	if (func_71(&(Local_165.f_792), 3500, 0))
	{
		func_69(&(Local_165.f_792));
		return 1;
	}
	return 0;
}

bool func_239(int iParam0)
{
	if (Local_122.f_117[iParam0] == func_412())
	{
		return 0;
	}
	return Local_122.f_117[iParam0] != unk_0x460153A63B9477BC();
}

void func_240(int iParam0)
{
	Global_1696922 = unk_0x5A002C4821A13338();
	Global_1696940 = iParam0;
	if (!func_248())
	{
		func_245();
	}
	if (!func_244())
	{
		func_241();
	}
}

void func_241()
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_PX"), unk_0x5A002C4821A13338());
	func_243();
	func_242();
	Global_1696936 = 1;
	Global_1696931 = 0;
}

void func_242()
{
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), unk_0x5A002C4821A13338());
}

void func_243()
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_244()
{
	return Global_1696936;
}

void func_245()
{
	func_108(joaat("MPPLY_CASINO_GMBLNG_GD"), unk_0x5A002C4821A13338());
	func_247();
	func_246((unk_0x5A002C4821A13338() + 86400));
	Global_1696935 = 1;
}

void func_246(int iParam0)
{
	Global_1696930 = iParam0;
}

void func_247()
{
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), unk_0x5A002C4821A13338());
}

bool func_248()
{
	return func_112(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

bool func_249(int iParam0)
{
	return Local_122.f_117[iParam0] == unk_0x460153A63B9477BC();
}

void func_250()
{
	func_364(2);
	unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 185, false);
	func_340();
	func_301(unk_0x460153A63B9477BC(), 1, 0, 0);
	func_258();
	unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 3);
	func_251();
}

void func_251()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696940 != -1)
	{
		iVar0 = (unk_0x5A002C4821A13338() - Global_1696922);
		iVar1 = (unk_0x5A002C4821A13338() - Global_1696923);
		if (Global_1696923 == -1)
		{
			func_252(iVar0);
		}
		else
		{
			func_252(iVar1);
		}
		func_247();
		func_242();
		Global_1696922 = -1;
		Global_1696923 = -1;
		Global_1696940 = -1;
	}
}

void func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = func_257();
	Global_1696931 = (Global_1696931 + iParam0);
	func_253(iVar0, iParam0);
	func_242();
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = floor((to_float(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_256((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_112(iVar5);
		iVar0++;
	}
	iVar6 = func_255(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_254(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_256((iVar4 + iVar0));
		func_108(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_254(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = floor((to_float(iVar3) / 32f));
	iVar5 = ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (unk_0xCE990E643CD9D0E5(iParam3, iVar6))
			{
				unk_0xBE20AB8238688965(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0xD2459066EA58CE43(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_255(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = floor((to_float(iVar4) / 32f));
	iVar6 = ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0xBE20AB8238688965(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_256(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x856D5567211886A2(&cVar0);
}

int func_257()
{
	return func_112(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

void func_258()
{
	Global_2440049.f_1267.f_10 = 0;
}

void func_259(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_261(&iVar0, 0, iParam1))
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
		func_260(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_260(int iParam0)
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

int func_261(var uParam0, bool bParam1, int iParam2)
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

void func_262(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_261(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_286(0, bParam6))
	{
		return;
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_167())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_167())
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
			func_175(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_171(29), 64);
					StringCopy(&cVar64, func_168(29, 1), 64);
					if (unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_285(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_285(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (unk_0x856D5567211886A2(&(Global_22550.f_1)) != 0)
				{
					func_284();
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
					func_284();
					func_282((((Global_22547 + fParam5) - 0.00390625f) - func_283("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_284();
						func_282((((Global_22547 + fParam5) - 0.00390625f) - func_283("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
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
				func_285(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_165(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_281(fVar40);
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
				func_285(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_281(fVar40);
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
					func_165(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_280(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4768), func_168(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_165(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_281(fVar40);
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
				func_285(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_281(fVar40);
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
					func_165(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_280(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_171(Global_4269680.f_67), func_168(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_275(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_165(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_274(bVar32);
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
												if (func_165(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_165(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_280(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[(iVar22 + iVar28)]), func_168(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[(iVar22 + iVar28)]), func_168(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_273() && unk_0x7B70881748D166CD(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_173(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_165(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[(iVar22 + iVar14)]), func_168(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[(iVar22 + iVar14)]), func_168(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[(iVar22 + iVar14)]), func_168(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_274(bVar32);
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_272((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
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
										func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_274(bVar32);
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_173(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_271((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_165(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_280(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_280(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_280(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x177AA645FB4B3A38(func_171(Global_22550.f_4433[iVar22]), func_168(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_270(Global_22550.f_4433[iVar22])), (fVar37 * func_270(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_263(0);
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
		func_186(1);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_263(int iParam0)
{
	if (func_269())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_268(0))
		{
			func_264(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_264(int iParam0)
{
	if (func_269())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_267())
		{
			func_266(1, 1);
		}
		else
		{
			func_266(0, 0);
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
	if (!func_265())
	{
		Global_19681.f_1 = 3;
	}
}

int func_265()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_266(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_268(0))
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

bool func_267()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_268(int iParam0)
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

bool func_269()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

float func_270(int iParam0)
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

void func_271(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x5BC8B357341A4FEE(fParam3, iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

void func_272(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam4);
}

bool func_273()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_274(bool bParam0)
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

void func_275(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_261(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_286(bParam4, bParam8))
	{
		return;
	}
	if (func_278())
	{
		return;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_276(unk_0x460153A63B9477BC(), 0))
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
					func_191(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar2 /*4*/])) == unk_0x856D5567211886A2("PREV"))
					{
						func_191(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_190(&(Global_22550.f_4964[iVar1 /*4*/]));
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
				func_191(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_190(&(Global_4269680.f_16));
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

bool func_276(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_277(-1, 0) == 8;
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

int func_277(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

int func_278()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_279())
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

int func_279()
{
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_280(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_281(float fParam0)
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

void func_282(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x42710E9E08FA375A(iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

float func_283(char* sParam0, int iParam1, int iParam2)
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
	func_284();
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x842CB5919E31EB1F(1);
}

void func_284()
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

void func_285(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_286(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x87F0CB19476706C3() || (func_288(8, -1) && func_287() != 65)) || (unk_0xCFB49FF4012D7C68() != 0 && !bParam1)) || (unk_0x9CC4D06F5338CA6B() && !bParam0)) || unk_0x954BAB46FBB90036()) || Global_77093) || Global_22550.f_8416) || unk_0x06EBE4F22EC30D45()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_287()
{
	return Global_1312830;
}

bool func_288(int iParam0, int iParam1)
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

void func_289(int iParam0, char* sParam1, int iParam2)
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

void func_290(char* sParam0)
{
	if (Global_22550.f_4765 >= 3 || Global_22550.f_4762 >= 4)
	{
		return;
	}
	Global_22550.f_4696[Global_22550.f_4762] = 1;
	Global_22550.f_4762++;
	StringCopy(&(Global_22550.f_4713[Global_22550.f_4765 /*16*/]), sParam0, 64);
	Global_22550.f_4765++;
}

void func_291(char* sParam0, int iParam1, int iParam2)
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

void func_292(int iParam0, bool bParam1, int iParam2)
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

void func_293(char* sParam0)
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

void func_294(int iParam0, char* sParam1, char* sParam2)
{
	Global_22550 = iParam0;
	func_295(29, sParam1, sParam2);
}

void func_295(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22550.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22550.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_296(bool bParam0, bool bParam1)
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

bool func_297(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_261(&iVar0, 1, iParam1))
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
	bVar2 = func_298(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_298(var uParam0)
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

void func_299(int iParam0)
{
	Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 = iParam0;
	Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 = func_385(iParam0);
}

bool func_300()
{
	return Global_4265545 == 1;
}

void func_301(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x4F315B95B1461ED4())
		{
			unk_0xFF8E7A064055ECA6(false);
		}
	}
	if (func_310())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		iVar0 = iParam2;
		unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xFC559366953F62B3())
		{
			bVar1 = false;
		}
		if (!func_203())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x166E920FB00B2DBB(iParam0) && (unk_0x5A228A6A51E757C8(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xA59F96B50B97E63C(unk_0x1FA7B77001D60F9D(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x1FA7B77001D60F9D(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x25DDB354A40FFCDB())
				{
					unk_0x9675999D57D9F953(1);
				}
				else if (bVar14 || (!func_276(unk_0x460153A63B9477BC(), 0) && !func_309()))
				{
					unk_0x80250B8368A4E611(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x25DDB354A40FFCDB() && !bVar19)
					{
						unk_0x9675999D57D9F953(0);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_306(0, 0, 0);
					if (bVar25)
					{
						unk_0x701364DD9F501826();
					}
				}
				if (!func_305(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, true, 0);
					}
				}
				if (!unk_0xB77B1396EAA80D8F(iVar27))
				{
					if (!bVar21)
					{
						unk_0x6A8F948698B360B4(iVar27, false);
					}
					unk_0x7C47E49129337557(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x6A8F948698B360B4(iVar27, false);
				}
				unk_0x0DC39BE87E4C5599(iVar27, true);
				unk_0xBF70D1B666A353F5(iParam0, false);
				unk_0x330ACDACFF26728A(iParam0, 0);
				if (unk_0x36E2FC4B39D3018D(iVar27) && unk_0x51E339346E2220A4(iVar27))
				{
					unk_0x46468389F464E317(iVar27);
				}
				unk_0x4478D8ED4673EF14(iVar27, 1);
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) == 0)
				{
					func_304();
					func_303();
				}
				if (unk_0x5C6122477A723551())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xE9159DB182CF0841())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_305(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, !bVar15, 0);
					}
					if (!unk_0xB77B1396EAA80D8F(iVar27))
					{
						if (!bVar21)
						{
							unk_0x6A8F948698B360B4(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x7C47E49129337557(iVar27, true);
						}
					}
					if (func_302(Global_4456448.f_129348))
					{
						unk_0x6A8F948698B360B4(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xBF70D1B666A353F5(iParam0, false);
				}
				else
				{
					unk_0xBF70D1B666A353F5(iParam0, true);
				}
				unk_0x0DC39BE87E4C5599(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x5A898C4DF17FB664(iVar27) && !unk_0x47DBF174A0CB9D55(iVar27, false))
					{
						unk_0x2BB0EF9DE445EA13(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar28);
		}
	}
}

bool func_302(int iParam0)
{
	return iParam0 == 17;
}

void func_303()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_304()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_306(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xD0390A93AF3907B8(iParam1))
			{
				if (!unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), unk_0xE4400E48E081F17A(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_308();
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 1))
			{
				if (unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x80610B7EA03DE232(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xBE20AB8238688965(&(Global_2359302.f_67), 1);
			}
		}
		if (func_276(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x80B3C69DE260B92D(bParam0, iParam1, 1);
		}
		else
		{
			unk_0xE86692F29AFB9043(bParam0, iParam1);
		}
		unk_0x0F9CBC63296852FD(bParam0, iParam1);
		func_307(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBD9D9E72ABB288E4(iVar0, bParam1, 1);
	}
}

void func_308()
{
	int iVar0;
	
	if (!unk_0x509C03DADAEE0A94())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xF7B3A1430308F92B(iVar0);
				iVar0++;
			}
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 2);
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_309()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_310()
{
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_311()
{
	Global_2440049.f_1267.f_10 = 1;
}

void func_312(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_313(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_313(int iParam0)
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

int func_314(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_313(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 0;
	}
	if (func_268(0))
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

bool func_315(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

void func_316(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!*uParam0 == -1)
		{
			func_312(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_317(int iParam0)
{
	if (func_318(iParam0, 1))
	{
		return Global_1630317[func_327() /*595*/].f_11.f_423;
	}
	return -1;
}

bool func_318(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_319(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_412();
}

int func_319(int iParam0)
{
	if (iParam0 != func_412())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_412())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_320()
{
	if (((((((((func_336("TCP_USED") || func_336("CAS_MG_CBAN")) || func_336("CAS_MG_CTIME")) || func_323("CAS_MG_MEMB2", func_324(1))) || func_336("CAS_MG_SUITE2")) || func_336("CAS_MG_NOCHIPS3")) || func_336("CAS_MG_LOWCHIPS3")) || func_336("CAS_MG_NOCHIPS7")) || func_336("CAS_MG_LOWCHIPS7")) || func_336("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_321()
{
	if (!unk_0x6914A85D2E17013B(func_324(0), false, true, 0, -1, 0))
	{
		func_223("MAITRD_M_D0E", -1);
	}
	else if (func_325(unk_0x460153A63B9477BC()))
	{
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1678288.f_5, 31))
	{
	}
	else if (Global_4265545 != 0)
	{
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1678288.f_5), 30);
	}
}

void func_322(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_323(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_324(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_325(int iParam0)
{
	if (iParam0 == func_412())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 18);
}

bool func_326()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_369.f_1, 18);
}

int func_327()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_328(bool bParam0)
{
	return func_318(unk_0x460153A63B9477BC(), bParam0);
}

int func_329(int iParam0)
{
	if (iParam0 != func_412())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_330()
{
	if (func_333() <= 0)
	{
		return 0;
	}
	if (func_332() <= 0)
	{
		return 1;
	}
	if (func_331())
	{
		return 2;
	}
	return 3;
}

bool func_331()
{
	return Global_1696929 != 0;
}

int func_332()
{
	return (Global_262145.f_26471 + func_111());
}

int func_333()
{
	return (Global_262145.f_26472 - func_111());
}

bool func_334()
{
	return func_330() != 3;
}

void func_335(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_336(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_337(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x13FA75E7125B8A33(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_338()
{
	return unk_0xCFB49FF4012D7C68() != 0;
}

int func_339()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_340()
{
	if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 != -1)
	{
		Local_165.f_2 = 0;
		Local_165.f_3 = 0;
		Local_165.f_4 = 0;
		Local_165.f_6 = 0;
		Local_165.f_22 = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/] = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_6 = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_3 = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_5 = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_4 = 0;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 = -1;
		Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 = -1;
	}
}

bool func_341()
{
	return Global_2540384.f_6662;
}

int func_342()
{
	if (((func_343() != -1 && func_343() != 28) && func_343() != 17) && func_343() != 12)
	{
		return 1;
	}
	return 0;
}

int func_343()
{
	return Global_968397;
}

bool func_344()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_345()
{
	return Global_2451787.f_689;
}

int func_346(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = func_348(iParam0);
	iVar1 = func_347(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_3;
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_349()
{
	int iVar0;
	
	if (func_318(unk_0x460153A63B9477BC(), 1))
	{
		iVar0 = func_327();
		if (func_62(iVar0, 1, 1) && unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_354(unk_0x460153A63B9477BC(), 0) && func_352(unk_0x460153A63B9477BC())) || func_350(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	if (func_351(iParam0) != func_412())
	{
		return func_351(iParam0) == func_227(iParam0);
	}
	return 0;
}

int func_351(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_353(iParam0, 9);
	}
	return 0;
}

bool func_353(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_354(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_355()
{
	if (func_418(unk_0x460153A63B9477BC()) && func_413() != func_412())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_2425869[func_413() /*443*/].f_314.f_4, 0) || unk_0xCE990E643CD9D0E5(Global_1678288.f_6, 10)) || Global_2425869[func_413() /*443*/].f_441 != Global_1696914)
		{
			return 0;
		}
	}
	return 1;
}

bool func_356(int iParam0, struct<3> Param1, float fParam2)
{
	return func_357(unk_0x3E4D3CCC220BDFB1(iParam0, true), unk_0xEF7858F25585F853(iParam0), Param1, fParam2);
}

bool func_357(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0x1BAE5C94E38E44FE(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_358(func_359(Var0), func_359(Param2 - Param0));
	return unk_0x8B79DA7BA972578F(fVar1) <= fParam3;
}

float func_358(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_359(struct<3> Param0)
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

Vector3 func_360(int iParam0)
{
	if (Local_165.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_361(int iParam0, struct<3> Param1, float fParam2)
{
	return vdist2(unk_0x3E4D3CCC220BDFB1(iParam0, true), Param1) <= (fParam2 * fParam2);
}

Vector3 func_362(int iParam0)
{
	int iVar0;
	
	if (Local_165.f_26 == 1)
	{
		if (func_413() != func_412())
		{
			iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, func_233(Global_2425869[func_413() /*443*/].f_441), 0, 0, 0);
		}
	}
	else if (func_385(iParam0) == 0 || func_385(iParam0) == 1)
	{
		iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x5BBA0055476D633A(func_76(func_385(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
	}
	if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xEE37CF67E6E839EA(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_363(int iParam0)
{
	return Global_99007.f_350 == iParam0;
}

void func_364(int iParam0)
{
	Local_165.f_798 = iParam0;
}

void func_365(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_228(&(Local_164[iParam0 /*9*/]), 0);
	Local_164[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_366()
{
	int iVar0;
	
	if (Local_165.f_26 == 1)
	{
		if (!unk_0xAE06B9E39EBDE049(Local_165.f_34))
		{
			if (func_413() != func_412())
			{
				iVar0 = func_233(Global_2425869[func_413() /*443*/].f_441);
				unk_0x78FCB2E22C41B9D5(iVar0);
				if (!unk_0x7D167B9A0CCDA347(iVar0))
				{
					return 0;
				}
				Local_165.f_34 = unk_0x79CC07752E7432A1(iVar0, func_76(0), false, false, true);
				unk_0xCBF81D3222C77066(Local_165.f_34, func_76(0), 0, 0, 1);
				unk_0xE922BAA80E8F9324(Local_165.f_34, func_75(0));
				unk_0xEA7F43E3A860E22C(Local_165.f_34, func_367(func_413()));
				unk_0x6A8F948698B360B4(Local_165.f_34, true);
				unk_0x74528AC0906CBABE(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0)
{
	if (func_370(iParam0))
	{
		return 1;
	}
	else if (func_369(iParam0))
	{
		return 2;
	}
	else if (func_368(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_368(int iParam0)
{
	if (iParam0 != func_412())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_412())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_412())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 19);
	}
	return 0;
}

void func_371(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

int func_372()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_373(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_376(unk_0x460153A63B9477BC(), 1) || func_376(unk_0x460153A63B9477BC(), 2)) || func_375())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_376(unk_0x460153A63B9477BC(), 1) || func_376(unk_0x460153A63B9477BC(), 2)) || func_375())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_374())
			{
				func_228(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_374()
{
	if ((((func_376(unk_0x460153A63B9477BC(), 4) || func_376(unk_0x460153A63B9477BC(), 5)) || func_376(unk_0x460153A63B9477BC(), 6)) || func_376(unk_0x460153A63B9477BC(), 7)) || func_375())
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	if (func_71(&(Local_165.f_794), 3500, 0))
	{
		func_69(&(Local_165.f_794));
		return 1;
	}
	return 0;
}

bool func_376(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Local_122.f_600[iParam0], iVar0);
}

void func_377(int iParam0, int iParam1)
{
	Global_22411.f_9 = iParam0;
	Global_22411.f_10 = iParam1;
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		func_379(1);
		func_264(1);
	}
	if (!unk_0x689B0FFC8081E57F() && !unk_0xF0C12886E5C1B20E())
	{
		unk_0x7A242994FB80B8A6();
		unk_0xABAEEAE8870E046D(0);
		unk_0x78BD44DB7D1A8D59(1);
		unk_0x779660A9E5364C4D(2, 200, 1);
		unk_0x779660A9E5364C4D(2, 199, 1);
		unk_0x26A60F42A1132477(0, 200);
		unk_0x26A60F42A1132477(2, 200);
		unk_0x26A60F42A1132477(0, 199);
		unk_0x26A60F42A1132477(2, 199);
		unk_0x26A60F42A1132477(0, 201);
		unk_0x26A60F42A1132477(0, 202);
		unk_0x26A60F42A1132477(0, 187);
	}
}

void func_379(bool bParam0)
{
	if (bParam0)
	{
		if (func_344())
		{
			Global_2451787.f_40 = 1;
		}
	}
	else
	{
		Global_2451787.f_40 = 0;
	}
}

void func_380(bool bParam0)
{
	char* sVar0;
	
	if (Local_165.f_798 > 2 && unk_0xF7B3A1430308F92B(0) != 4)
	{
		if (((((!func_384() && !func_383()) && !func_382()) && !func_381()) && !func_86(unk_0x460153A63B9477BC())) && !unk_0x5C6122477A723551())
		{
			func_301(unk_0x460153A63B9477BC(), 1, 0, 0);
		}
		func_258();
	}
	if (Local_165.f_798 > 2)
	{
		func_258();
	}
	if (unk_0xCE990E643CD9D0E5(Local_165.f_20, 0) || unk_0xCE990E643CD9D0E5(Local_165.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_385(Local_165.f_18) == 2 || func_385(Local_165.f_18) == 3) || func_418(unk_0x460153A63B9477BC()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_259(1, -1);
		unk_0x2DDA2C702A92866E(sVar0);
		iLocal_178 = 1;
		Local_165.f_20 = 0;
	}
	if (unk_0x40397A9A17EEC1C5(Local_165.f_13))
	{
		unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
		unk_0xB8B0F7C8C1548C5B(Local_165.f_13, 0);
		bLocal_179 = false;
	}
	if (Local_165.f_31 != -1)
	{
		func_312(&(Local_165.f_31));
		Local_165.f_31 = -1;
	}
	if (bParam0)
	{
		if (unk_0xCE990E643CD9D0E5(Local_165.f_22, 4) && unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_92(), "cards_idle", 3))
		{
			Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), func_232(Local_164[unk_0x460153A63B9477BC() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
			unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
			unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 0, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 1, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			unk_0xF2ECD57210AAC2A6(unk_0x0EE5FAC7EF37F8A0(Local_122.f_68[func_41(Local_164[unk_0x460153A63B9477BC() /*9*/].f_2, 2, (Local_164[unk_0x460153A63B9477BC() /*9*/].f_1 - Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 * 4))]), Local_165.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			unk_0xB88AF19828BF16ED(Local_165.f_24);
			Local_165.f_7 = 1;
		}
		else
		{
			Local_165.f_24 = unk_0xAA579EC5104BFDA9(func_362(Local_165.f_18), func_232(Local_165.f_18), 2, false, false, 1065353216, 0, 1065353216);
			unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_165.f_24, func_231(), func_93(Local_165.f_18), 2f, -2f, 13, 16, 1148846080, 0);
			unk_0xB88AF19828BF16ED(Local_165.f_24);
		}
	}
	Local_165.f_15 = 0;
	Local_165.f_23 = 0;
	Local_165.f_22 = 0;
	Local_165.f_29 = 0;
	Local_164[unk_0x460153A63B9477BC() /*9*/].f_6 = 0;
	Local_165.f_1 = 0;
	Local_165.f_2 = 0;
	Local_165.f_3 = 0;
	Local_165.f_4 = 0;
	Local_165.f_6 = 0;
	Local_165.f_14 = 0;
	if (!bParam0)
	{
		func_340();
	}
	Local_175.f_4 = func_403();
	Local_175.f_5 = func_206(&uLocal_172, 0, 0);
	if (Local_165.f_798 > 2)
	{
		if (Global_262145.f_26115)
		{
			unk_0x8BF616AA18074FD2(&Local_175);
		}
	}
	if (!bParam0)
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 3);
	}
	if (bParam0 || Local_165.f_798 > 2)
	{
		func_251();
	}
	func_364(10);
	func_161(0);
}

int func_381()
{
	if (unk_0x7B70881748D166CD(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_382()
{
	return Global_1312896;
}

int func_383()
{
	if (func_204() == 3 || func_204() == 2)
	{
		return 1;
	}
	return 0;
}

int func_384()
{
	if (func_204() == 1 || func_204() == 4)
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_386()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_165.f_26)
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]);
			if (func_388(iVar1))
			{
				if (func_387(iVar0))
				{
					unk_0xA621A0534C11EC43(iVar1, false, 1);
				}
				else
				{
					unk_0xA621A0534C11EC43(iVar1, true, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_387(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 5) || unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 2))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 3))
	{
		if (Local_164[unk_0x460153A63B9477BC() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_388(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_389()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_165.f_26)
	{
		if (Global_2516406 != iVar0 && (Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC())))
		{
			if (!unk_0xAE06B9E39EBDE049(Local_165.f_35[iVar0]))
			{
				func_392(iVar0);
			}
			else if (unk_0x3D70CCF2C9B362CD(Local_122.f_50[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0])))
			{
				if (!iLocal_190[iVar0])
				{
					if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), 1691374422))
						{
							iLocal_191[iVar0] = 1;
						}
					}
					else
					{
						iLocal_191[iVar0] = 0;
					}
					if (((iLocal_191[iVar0] || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_122.f_576[iVar0] == 6) || Local_122.f_576[iVar0] == 7)
					{
						if (!unk_0x8E805E09B82CCE5F(Local_165.f_35[iVar0]))
						{
							unk_0x6A8F948698B360B4(Local_165.f_35[iVar0], false);
							unk_0xF8A652CE310FFC53(Local_165.f_35[iVar0], unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
						}
						iLocal_190[iVar0] = 1;
					}
				}
				else if ((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_45(), func_31(iVar0), 3) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), 152918166)) || ((Local_122.f_576[iVar0] < 5 && !unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (unk_0x8E805E09B82CCE5F(Local_165.f_35[iVar0]))
					{
						unk_0x1F8106DB8796859F(Local_165.f_35[iVar0], 1, true);
						unk_0xCBF81D3222C77066(Local_165.f_35[iVar0], func_391(iVar0), 0, 0, 1);
						unk_0xC82085403E46A869(Local_165.f_35[iVar0], func_390(iVar0), 2, 1);
						unk_0x6A8F948698B360B4(Local_165.f_35[iVar0], true);
					}
					iLocal_190[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_390(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD78F5800B90C4843(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_391(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD7D25254A712E758(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_392(int iParam0)
{
	int iVar0;
	
	if (Local_165.f_5)
	{
		iVar0 = joaat("vw_prop_vw_casino_cards_01");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_01");
	}
	unk_0x78FCB2E22C41B9D5(iVar0);
	if (!unk_0x7D167B9A0CCDA347(iVar0))
	{
		return;
	}
	unk_0x131ED02492676000(func_45());
	if (!unk_0xC614DDE265D18415(func_45()))
	{
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(Local_165.f_35[iParam0]))
	{
		Local_165.f_35[iParam0] = unk_0x6E52E47D436A2C77(iVar0, func_391(iParam0), false, false, true);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0xCBF81D3222C77066(Local_165.f_35[iParam0], func_391(iParam0), 0, 0, 1);
		unk_0xC82085403E46A869(Local_165.f_35[iParam0], func_390(iParam0), 2, 1);
		unk_0x6A8F948698B360B4(Local_165.f_35[iParam0], true);
		unk_0x1082C25039B168F8(func_45());
	}
}

void func_393()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	if (((func_363(1581559923) || func_363(272405600)) || func_418(unk_0x460153A63B9477BC())) && !func_402())
	{
		iLocal_177 = 1;
		if (!bLocal_176)
		{
			bLocal_176 = (func_407() && func_401());
		}
	}
	else
	{
		if (iLocal_177)
		{
			func_408();
			func_399();
			iLocal_177 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_165.f_26)
	{
		if (iVar0 != iLocal_180 && iVar0 != Local_164[unk_0x460153A63B9477BC() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_165.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar5 = Local_122.f_117[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0 || ((!func_363(1581559923) && !func_363(272405600)) && !func_418(unk_0x460153A63B9477BC())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, iVar2)]))
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_164[iVar5 /*9*/].f_3 > 0)
					{
						if (!unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 0)]))
						{
							if (func_397(Local_164[iVar5 /*9*/].f_3, bVar1) != 0)
							{
								Local_165.f_40[func_398(iVar0, iVar4, 0)] = unk_0x6E52E47D436A2C77(func_397(Local_164[iVar5 /*9*/].f_3, bVar1), unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								unk_0xCBF81D3222C77066(Local_165.f_40[func_398(iVar0, iVar4, 0)], unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xC82085403E46A869(Local_165.f_40[func_398(iVar0, iVar4, 0)], Var3 + func_395(Local_164[iVar5 /*9*/].f_4, 0, iVar4, bVar1), 2, 1);
								if (!unk_0x7BCC91F3C1CF24E8(func_394(Local_164[iVar5 /*9*/].f_3)))
								{
									unk_0x2DB2D4C3CB88500D(-1, func_394(Local_164[iVar5 /*9*/].f_3), Local_165.f_40[func_398(iVar0, iVar4, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 0)]) != 255)
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 0)]));
						}
					}
					else if (unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 0)]))
					{
						if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 0)]) > 0)
						{
							unk_0x4D0062B514A63E5E(Local_165.f_40[func_398(iVar0, iVar4, 0)], floor(func_217(to_float(unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 0)]));
						}
					}
					if (Local_164[iVar5 /*9*/].f_5 > 0)
					{
						if (!unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 1)]))
						{
							if (func_397(Local_164[iVar5 /*9*/].f_5, bVar1) != 0)
							{
								Local_165.f_40[func_398(iVar0, iVar4, 1)] = unk_0x6E52E47D436A2C77(func_397(Local_164[iVar5 /*9*/].f_5, bVar1), unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								unk_0xCBF81D3222C77066(Local_165.f_40[func_398(iVar0, iVar4, 1)], unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xC82085403E46A869(Local_165.f_40[func_398(iVar0, iVar4, 1)], Var3 + func_395(Local_164[iVar5 /*9*/].f_4, 1, iVar4, bVar1), 2, 1);
								if (!unk_0x7BCC91F3C1CF24E8(func_394(Local_164[iVar5 /*9*/].f_5)))
								{
									unk_0x2DB2D4C3CB88500D(-1, func_394(Local_164[iVar5 /*9*/].f_5), Local_165.f_40[func_398(iVar0, iVar4, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 1)]) != 255)
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 1)]));
						}
					}
					else if (unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 1)]))
					{
						if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 1)]) > 0)
						{
							unk_0x4D0062B514A63E5E(Local_165.f_40[func_398(iVar0, iVar4, 1)], floor(func_217(to_float(unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 1)]));
						}
					}
					if (Local_164[iVar5 /*9*/].f_4 > 0)
					{
						if (!unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 2)]))
						{
							if (func_397(Local_164[iVar5 /*9*/].f_4, bVar1) != 0)
							{
								Local_165.f_40[func_398(iVar0, iVar4, 2)] = unk_0x6E52E47D436A2C77(func_397(Local_164[iVar5 /*9*/].f_4, bVar1), unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								unk_0xCBF81D3222C77066(Local_165.f_40[func_398(iVar0, iVar4, 2)], unk_0x1BAE5C94E38E44FE(func_76(iVar0), Var3.f_2, func_396(Local_164[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), 0, 0, 1);
								unk_0xC82085403E46A869(Local_165.f_40[func_398(iVar0, iVar4, 2)], Var3 + func_395(Local_164[iVar5 /*9*/].f_4, 2, iVar4, bVar1), 2, 1);
								if (!unk_0x7BCC91F3C1CF24E8(func_394(Local_164[iVar5 /*9*/].f_4)))
								{
									unk_0x2DB2D4C3CB88500D(-1, func_394(Local_164[iVar5 /*9*/].f_4), Local_165.f_40[func_398(iVar0, iVar4, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 2)]) != 255)
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 2)]));
						}
					}
					else if (unk_0xAE06B9E39EBDE049(Local_165.f_40[func_398(iVar0, iVar4, 2)]))
					{
						if (unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 2)]) > 0)
						{
							unk_0x4D0062B514A63E5E(Local_165.f_40[func_398(iVar0, iVar4, 2)], floor(func_217(to_float(unk_0x75A784DE9819D6EC(Local_165.f_40[func_398(iVar0, iVar4, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0x315F7D8C33F0AB37(&(Local_165.f_40[func_398(iVar0, iVar4, 2)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_122.f_5[iVar0])
			{
				Local_165.f_8[iVar0] = 1;
			}
			else
			{
				Local_165.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_180++;
	if (iLocal_180 >= Local_165.f_26)
	{
		iLocal_180 = 0;
	}
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_396(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.f_2 = fVar0;
	}
	else
	{
		Var1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.f_2 = (Var1.f_2 + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_397(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_399()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_400(iVar0);
		unk_0x74528AC0906CBABE(iVar1);
		iVar0++;
	}
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_401()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_400(iVar0);
		unk_0x78FCB2E22C41B9D5(iVar1);
		if (!unk_0x7D167B9A0CCDA347(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_402()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288.f_6, 12);
}

int func_403()
{
	return func_404(8249, -1, 0);
}

int func_404(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_405(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_405(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_406()
{
	if (Local_165.f_26 == 1)
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_187))
		{
			if (func_413() != func_412())
			{
				iLocal_187 = unk_0x5BBA0055476D633A(func_76(0), 1f, func_233(Global_2425869[func_413() /*443*/].f_441), 0, 0, 0);
			}
		}
		else if (func_413() != func_412() && unk_0x03DB5C6AABF8DA46())
		{
			if (unk_0x97BAFB6812B7DB68(iLocal_187) != func_367(func_413()))
			{
				unk_0xEA7F43E3A860E22C(iLocal_187, func_367(func_413()));
			}
		}
	}
	else
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_188))
		{
			iLocal_188 = unk_0x5BBA0055476D633A(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
		}
		else if (unk_0x97BAFB6812B7DB68(iLocal_188) != 3)
		{
			unk_0xEA7F43E3A860E22C(iLocal_188, 3);
		}
		if (!unk_0xAE06B9E39EBDE049(iLocal_189))
		{
			iLocal_189 = unk_0x5BBA0055476D633A(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
		}
		else if (unk_0x97BAFB6812B7DB68(iLocal_189) != 3)
		{
			unk_0xEA7F43E3A860E22C(iLocal_189, 3);
		}
	}
}

int func_407()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_165.f_5);
		unk_0x78FCB2E22C41B9D5(iVar2);
		if (!unk_0x7D167B9A0CCDA347(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_408()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_165.f_5);
		unk_0x74528AC0906CBABE(iVar2);
		iVar0++;
	}
}

int func_409()
{
	if (unk_0x25DDB354A40FFCDB() && unk_0xAFF96FDC3971E7EA())
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	return func_411(unk_0x460153A63B9477BC());
}

int func_411(int iParam0)
{
	return unk_0x039D1DD18D3EA3F3(Global_2425869[iParam0 /*443*/].f_314.f_3, 28, 31);
}

int func_412()
{
	return -1;
}

int func_413()
{
	return func_414(unk_0x460153A63B9477BC());
}

int func_414(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_412())
	{
		return iParam0;
	}
	if (func_416(iParam0) != -1)
	{
		iVar0 = func_415(func_416(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_318(iParam0, 0))
			{
				return func_227(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_412();
		}
		return Global_2425869[iParam0 /*443*/].f_314.f_9;
	}
	return func_412();
}

int func_415(int iParam0)
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

int func_416(int iParam0)
{
	if (iParam0 != func_412())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == unk_0x460153A63B9477BC()) && func_62(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_417(int iParam0)
{
	if (iParam0 != func_412() && func_62(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_412())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_415(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_412())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_415(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_420()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288.f_3, 2);
}

void func_421()
{
	if (Local_165.f_798 > 2)
	{
		if (Global_262145.f_26109)
		{
			unk_0xF84B58C7E1A243F6(&Local_174);
		}
	}
	if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
	{
		unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Table_Games");
	}
	if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_380(0);
	func_408();
	func_399();
	func_424();
	func_423();
	if (unk_0xAE06B9E39EBDE049(Local_165.f_34))
	{
		unk_0x315F7D8C33F0AB37(&(Local_165.f_34));
	}
	if (Local_165.f_798 > 0)
	{
		unk_0x1082C25039B168F8(func_45());
		unk_0x1082C25039B168F8(func_78());
		unk_0x1082C25039B168F8(func_92());
		unk_0x1082C25039B168F8(func_231());
	}
	Global_1696912 = 0;
	func_422();
}

void func_422()
{
	unk_0xD39E529EBE5DB04F();
}

void func_423()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAE06B9E39EBDE049(Local_165.f_35[iVar0]))
		{
			if (unk_0xB77B1396EAA80D8F(Local_165.f_35[iVar0]))
			{
				unk_0x1F8106DB8796859F(Local_165.f_35[iVar0], 1, true);
			}
			unk_0x315F7D8C33F0AB37(&(Local_165.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_424()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xAE06B9E39EBDE049(Local_165.f_40[iVar1]))
		{
			unk_0x315F7D8C33F0AB37(&(Local_165.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_425()
{
	var uVar0;
	
	func_433(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_432())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_431())
	{
		return 1;
	}
	if (func_430(159))
	{
		if (!func_429())
		{
			return 1;
		}
	}
	if (func_430(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_426() != 0)
	{
		if (unk_0x7B70881748D166CD(func_426()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_426()
{
	switch (func_428())
	{
		case 0:
			return func_427();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_427()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_428()
{
	return Global_30968;
}

bool func_429()
{
	return Global_2451787.f_696;
}

int func_430(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_431()
{
	return Global_2462250;
}

bool func_432()
{
	return Global_2451787.f_691;
}

void func_433(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_434(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_434(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, false);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_435(iVar2, &bVar3))
						{
							unk_0xADCDA8AF77C0D19D(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_435(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_436()
{
	int iVar0;
	
	if (Global_1696905)
	{
		Global_1696905 = 0;
	}
	if (func_418(unk_0x460153A63B9477BC()) && func_413() != func_412())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[func_413() /*443*/].f_314.f_4, 4))
		{
			Local_165.f_5 = 1;
		}
		Global_1696914 = Global_2425869[func_413() /*443*/].f_441;
	}
	while (!(Global_2516406 != -1 || func_418(unk_0x460153A63B9477BC())))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			func_421();
		}
		if (func_425())
		{
			func_421();
		}
		wait(0);
	}
	iVar0 = -1;
	if (func_418(unk_0x460153A63B9477BC()))
	{
		iVar0 = func_440();
	}
	unk_0xA88557896B79E30D(32, 0, iVar0);
	func_438(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_122, 633);
	unk_0xBB96A3ECD45D0317(&Local_164, 289);
	if (func_418(unk_0x460153A63B9477BC()))
	{
		while (!unk_0xF8E99C596E84AFF3(15))
		{
			wait(0);
		}
		Local_165.f_26 = 1;
		unk_0xC1E7BB775EF0FA2E(1);
		unk_0x1C53116039CA9439(15);
	}
	else
	{
		while (!unk_0xF8E99C596E84AFF3(45))
		{
			wait(0);
		}
		unk_0xC1E7BB775EF0FA2E(3);
		unk_0x1C53116039CA9439(45);
	}
	if (!func_437())
	{
		func_421();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
	}
	else
	{
		func_421();
	}
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (func_418(unk_0x460153A63B9477BC()))
		{
			Local_122.f_15[0] = unk_0x344C570D6F8700DF(0, 14);
		}
		else
		{
			Local_122.f_15[0] = Global_2516424[0];
			Local_122.f_15[1] = Global_2516424[1];
			Local_122.f_15[2] = Global_2516424[2];
			Local_122.f_15[3] = Global_2516424[3];
		}
	}
	Global_1696912 = 1;
}

int func_437()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_432())
		{
			return 0;
		}
		if (func_430(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_438(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_422();
			}
			else
			{
				return 0;
			}
		}
		if (!func_439())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_422();
					}
					else
					{
						return 0;
					}
				}
				if (func_432())
				{
					if (!bParam2)
					{
						func_422();
					}
					else
					{
						return 0;
					}
				}
				if (func_430(157))
				{
					if (!bParam2)
					{
						func_422();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_422();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_422();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_422();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_439()
{
	return Global_1312872;
}

int func_440()
{
	var uVar0;
	
	uVar0 = Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_7;
	return uVar0;
}

