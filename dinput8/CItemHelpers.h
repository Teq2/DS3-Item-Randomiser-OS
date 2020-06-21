#pragma once

struct EquipParamProtector;
struct EquipParamWeapon;
struct EquipParamGoods;
struct EquipParamAccessory;

enum ParamTableType { EquipParamWeaponTable, EquipParamProtectorTable, EquipParamAccessoryTable, EquipParamGoodsTable};

class CItemHelpers {
    typedef void(*ParamFunc)(void*, int);

public:
    EquipParamWeapon * GetEquipParamWeapon(int itemId);
    EquipParamProtector * GetEquipParamProtector(int itemId);
    EquipParamAccessory * GetEquipParamAccessory(int itemId);
    EquipParamGoods * GetEquipParamGoods(int itemId);
    bool IsWeaponFullyUpgradable(int itemId);
    bool IsWeaponInfusable(int itemId);
    bool IsCatalyst(int itemId);
    bool IsRing(int itemId);

private:
    const ParamFunc GetEquipParamWeaponInternal { (ParamFunc)0x140E33420 };
    const ParamFunc GetEquipParamProtectorInternal{ (ParamFunc)0x140E2C980 };
    const ParamFunc GetEquipParamAccessoryInternal{ (ParamFunc)0x140E16A50 };
    const ParamFunc GetEquipParamGoodsInternal{ (ParamFunc)0x140E22270 };

    void* ReversedGetParams(unsigned int itemId, ParamTableType tableId);
};

#pragma region EquipParam structs

struct EquipParamAccessory {
    int	refId0;
    int	sfxVariationId;
    float	weight;
    int	behaviorId;
    int	basicPrice;
    int	sellValue;
    int	sortId;
    int	qwcId;
    short	equipModelId;
    short	iconId;
    short	shopLv;
    short	trophySGradeId;
    short	trophySeqId;
    unsigned char	equipModelCategory;
    unsigned char	equipModelGender;
    unsigned char	accessoryCategory;
    unsigned char	refCategory;
    unsigned char	spEffectCategory;
    int	vagrantItemLotId;
    int	vagrantBonusEneDropItemLotId;
    int	vagrantItemEneDropItemLotId;
    bool	IsDeposit : 1;
    bool	IsEquipOutBrake : 1;
    bool	disableMultiDropShare : 1;
    bool	IsDiscard : 1;
    bool	IsBool : 1;
    bool	res1 : 1;
    bool	res2 : 1;
    bool	res3 : 1;
    int	Costvalue;
    short	RingCompatibilityId;
    unsigned char	VowId;
    unsigned char	AchievementID;
    int	refId1;
    int	refId2;
    int	refId3;
    int	refId4;
};

struct EquipParamGoods
{
    int	refId1;
    int	sfxVariationId;
    float	weight;
    int	fragmentNum;
    int	sellValue;
    int	replaceItemId;
    int	behaviorId;
    int	sortId;
    int	qwcId;
    int	yesNoDialogMessageId;
    int	magicId;
    short	iconId;
    short	modelId;
    short	shopLv;
    short	compTrophySedId;
    short	trophySeqId;
    short	maxNum;
    unsigned char	consumeHeroPoint;
    unsigned char	overDexterity;
    unsigned char	goodsType;
    unsigned char	refCategory;
    unsigned char	spEffectCategory;
    unsigned char	goodsCategory;
    unsigned char	goodsUseAnim;
    unsigned char	opmeMenuType;
    unsigned char	useLimitCategory;
    unsigned char	replaceCategory;
    bool	vowType0 : 1;
    bool	vowType1 : 1;
    bool	vowType2 : 1;
    bool	vowType3 : 1;
    bool	vowType4 : 1;
    bool	vowType5 : 1;
    bool	vowType6 : 1;
    bool	vowType7 : 1;
    bool	vowType8 : 1;
    bool	vowType9 : 1;
    bool	vowType10 : 1;
    bool	vowType11 : 1;
    bool	vowType12 : 1;
    bool	vowType13 : 1;
    bool	vowType14 : 1;
    bool	vowType15 : 1;
    bool	enable_live : 1;
    bool	enable_gray : 1;
    bool	enable_white : 1;
    bool	enable_black : 1;
    bool	enable_multi : 1;
    bool	disable_offline : 1;
    bool	isEquip : 1;
    bool	isConsume : 1;
    bool	isAutoEquip : 1;
    bool	isEstablishment : 1;
    bool	isOnlyOne : 1;
    bool	isDrop : 1;
    bool	isDeposit : 1;
    bool	isDisableHand : 1;
    bool	isTravelItem : 1;
    bool	isSuppleItem : 1;
    bool	isFullSuppleItem : 1;
    bool	isEnhance : 1;
    bool	isFixItem : 1;
    bool	disableMutliDropShare : 1;
    bool	disableUseAtColiseum : 1;
    bool	disableUseAtOutofColiseum : 1;
    bool	useBulletMaxNum : 1;
    bool	useHpCureMaxNum : 1;
    bool	isAutoReplenish : 1;
    bool	canMultiUse : 1;
    bool	isGuestDrop : 1;
    bool	isEnchantLeftHand : 1;
    bool	isApplySpecialEffect : 1;
    bool	Unk1 : 1;
    bool	Unk2 : 1;
    bool	Unk3 : 1;
    int	refId2;
    int	reinforceParamWeapon;
    int	VagrantItemLotId;
    int	VagrantBonusEneDropItemLotId;
    int	vagrantItemeneDropItemLotId;
    int	refVirtualWepId;
    int	replaceItemId_BySpEffect;
    int	replaceTriggerSpEffectId;
    bool	isLoadOfCinder : 1;
    bool	isPlayRegion1 : 1;
    bool	isLadder : 1;
    bool	isMultiPlay : 1;
    bool	useSelected : 1;
    bool	Unk4 : 1;
    bool	isPlayRegion2 : 1;
    bool	isNetPenalized : 1;
    unsigned char	SuppleItemType;
    unsigned char	menuAdhocType;
    unsigned char	drop_ON_OFF;
    short	maxRepNum;
    unsigned char	invadeType;
    int	shopId;
    short	fpConsume;
    short	useLimitCategory2;
};

struct EquipParamProtector {
    int	sortId;
    int	wanderingEquipId;
    int	vagrantItemLotId;
    int	vagrantBonuseneDropItemLotId;
    int	vagrantItemEneDropItemLotId;
    int	fixPrice;
    int	basicPrice;
    int	sellValue;
    float	weight;
    int	residentSpEffectId1;
    int	residentSpEffectId2;
    int	residentSpEffectId3;
    int	materialSetId;
    float	partsDamageRate;
    float	correctSARecover;
    int	originEquipPro1;
    int	originEquipPro2;
    int	originEquipPro3;
    int	originEquipPro4;
    int	originEquipPro5;
    int	originEquipPro6;
    int	originEquipPro7;
    int	originEquipPro8;
    int	originEquipPro9;
    int	originEquipPro10;
    int	originEquipPro11;
    int	originEquipPro12;
    int	originEquipPro13;
    int	originEquipPro14;
    int	originEquipPro15;
    int	originEquipPro16;
    float	faceScaleM_ScaleX;
    float	faceScaleM_ScaleZ;
    float	faceScaleM_MaxX;
    float	faceScaleM_MaxZ;
    float	faceScaleF_ScaleX;
    float	faceScaleF_ScaleZ;
    float	faceScaleF_MaxX;
    float	faceScaleF_MaxZ;
    int	qwcId;
    short	equipModelID;
    short	iconIdM;
    short	iconIdF;
    short	Knockback;
    short	KnockbackBounceRate;
    short	durability;
    short	durabilityMax;
    short	saDurability;
    short	defFlickPower;
    short	defensePhys;
    short	defenseMagic;
    short	defenseFire;
    short	defenseThunder;
    short	defenseSlash;
    short	defenseBlow;
    short	defenseThrust;
    short	resistPoison;
    short	resistToxic;
    short	resistBlood;
    short	resistCurse;
    short	reinforceTypeId;
    short	compTrophySedId;
    short	shopLv;
    unsigned char	knockbackParamId;
    unsigned char	FlickDamageCutRate;
    unsigned char	equipModelCategory;
    unsigned char	equipModelGender;
    unsigned char	protectorCategory;
    unsigned char	defenseMaterial;
    unsigned char	defenseMaterialSfx;
    unsigned char	partsDmgType;
    unsigned char	defenseMaterial_Weak;
    unsigned char	defenseMaterialSfx_Weak;
    bool	isDeposit:1;
    bool	headEquip:1;
    bool	bodyEquip:1;
    bool	armEquip:1;
    bool	legEquip:1;
    bool	useFaceScale:1;
    bool	InvisibleFlag00:1;
    bool	InvisibleFlag01:1;
    bool	InvisibleFlag02:1;
    bool	InvisibleFlag03:1;
    bool	InvisibleFlag04:1;
    bool	InvisibleFlag05:1;
    bool	InvisibleFlag06:1;
    bool	InvisibleFlag07:1;
    bool	InvisibleFlag08:1;
    bool	InvisibleFlag09:1;
    bool	InvisibleFlag10:1;
    bool	InvisibleFlag11:1;
    bool	InvisibleFlag12:1;
    bool	InvisibleFlag13:1;
    bool	InvisibleFlag14:1;
    bool	InvisibleFlag15:1;
    bool	InvisibleFlag16:1;
    bool	InvisibleFlag17:1;
    bool	InvisibleFlag18:1;
    bool	InvisibleFlag19:1;
    bool	InvisibleFlag20:1;
    bool	InvisibleFlag21:1;
    bool	InvisibleFlag22:1;
    bool	InvisibleFlag23:1;
    bool	InvisibleFlag24:1;
    bool	InvisibleFlag25:1;
    bool	InvisibleFlag26:1;
    bool	InvisibleFlag27:1;
    bool	InvisibleFlag28:1;
    bool	InvisibleFlag29:1;
    bool	InvisibleFlag30:1;
    bool	InvisibleFlag31:1;
    bool	InvisibleFlag32:1;
    bool	InvisibleFlag33:1;
    bool	InvisibleFlag34:1;
    bool	InvisibleFlag35:1;
    bool	InvisibleFlag36:1;
    bool	InvisibleFlag37:1;
    bool	InvisibleFlag38:1;
    bool	InvisibleFlag39:1;
    bool	InvisibleFlag40:1;
    bool	InvisibleFlag41:1;
    bool	InvisibleFlag42:1;
    bool	InvisibleFlag43:1;
    bool	InvisibleFlag44:1;
    bool	InvisibleFlag45:1;
    bool	InvisibleFlag46:1;
    bool	InvisibleFlag47:1;
    bool	disableMultiDropShare:1;
    bool	simpleModelForDlc1:1;
    bool	isGuestDrop0:1;
    bool	isGuestDrop1:1;
    bool	simpleModelForDlc2:1;
    bool	Unk1:1;
    bool	Unk2:1;
    bool	Unk3:1;
    bool	Unk4:1;
    bool	Unk5:1;
    float	PhysDamageCutRate;
    float	SlashDamageCutRate;
    float	StrikeDamageCutRate;
    float	ThrustDamageCutRate;
    float	MagicDamageCutRate;
    float	FireDamageCutRate;
    float	ThunderDamageCutRate;
    unsigned short	MaterialId0;
    unsigned short	MaterialId1;
    unsigned short	MaterialId2;
    unsigned short	MaterialId3;
    unsigned short	MaterialId4;
    unsigned short	MaterialId5;
    unsigned short	MaterialId6;
    unsigned short	MaterialId7;
    int	protectorCategoryId;
    float	Poise;
    float	DarkDamageCutRate;
    short	defenseDark;
    unsigned char	Unk6;
    unsigned char	Unk7;
    int	Unk8;
    int	UpperArmId;
    int	Unk9;
    short	resistFrost;
    unsigned char	Mask00;
    unsigned char	Mask01;
    unsigned char	Mask02;
    unsigned char	Mask03;
    unsigned char	Mask04;
    unsigned char	Mask05;
    unsigned char	Mask06;
    unsigned char	Mask07;
    unsigned char	Mask08;
    unsigned char	Mask09;
    unsigned char	Mask10;
    unsigned char	Mask11;
    unsigned char	Mask12;
    unsigned char	Mask13;
    unsigned char	Mask14;
    unsigned char	Mask15;
    unsigned char	Mask16;
    unsigned char	Mask17;
    unsigned char	Mask18;
    unsigned char	Mask19;
    unsigned char	Mask20;
    unsigned char	Mask21;
    unsigned char	Mask22;
    unsigned char	Mask23;
    unsigned char	Mask24;
    unsigned char	Mask25;
    unsigned char	Mask26;
    unsigned char	Mask27;
    unsigned char	Mask28;
    unsigned char	Mask29;
    unsigned char	Mask30;
    unsigned char	Mask31;
    unsigned char	Mask32;
    unsigned char	Mask33;
    unsigned char	Mask34;
    unsigned char	Mask35;
    unsigned char	Mask36;
    unsigned char	Mask37;
    unsigned char	Mask38;
    unsigned char	Mask39;
    unsigned char	Mask40;
    unsigned char	Mask41;
    unsigned char	Mask42;
    unsigned char	Mask43;
    unsigned char	Mask44;
    unsigned char	Mask45;
    unsigned char	Mask46;
    unsigned char	Mask47;
    unsigned char	Mask48;
    unsigned char	Mask49;
    unsigned char	Mask50;
    unsigned char	Mask51;
    unsigned char	Mask52;
    unsigned char	Mask53;
    unsigned char	Mask54;
    unsigned char	Mask55;
    unsigned char	Mask56;
    unsigned char	Mask57;
    unsigned char	Mask58;
    unsigned char	Mask59;
    unsigned char	Mask60;
    unsigned char	Mask61;
    unsigned char	Mask62;
    unsigned char	Mask63;
    unsigned char	Mask64;
    unsigned char	Mask65;
    unsigned char	Mask66;
    unsigned char	Mask67;
    unsigned char	Mask68;
    unsigned char	Mask69;
    unsigned char	Mask70;
    unsigned char	Mask71;
    unsigned char	Mask72;
    unsigned char	Mask73;
    unsigned char	Mask74;
    unsigned char	Mask75;
    unsigned char	Mask76;
    unsigned char	Mask77;
    unsigned char	Mask78;
    unsigned char	Mask79;
    unsigned char	Mask80;
    unsigned char	Mask81;
    unsigned char	Mask82;
    unsigned char	Mask83;
    unsigned char	Mask84;
    unsigned char	Mask85;
    unsigned char	Mask86;
    unsigned char	Mask87;
    unsigned char	Mask88;
    unsigned char	Mask89;
    unsigned char	Mask90;
    unsigned char	Mask91;
    unsigned char	Mask92;
    unsigned char	Mask93;
    unsigned char	Mask94;
    unsigned char	Mask95;
    unsigned char	Mask96;
    unsigned char	Mask97;
};

struct EquipParamWeapon {
    int	behaviorVariationId;
    int	sortId;
    int	wanderingEquipId;
    float	weight;
    float	weaponWeightRate;
    int	fixPrice;
    int	basicPrice;
    int	sellValue;
    float	correctStrength;
    float	correctAgility;
    float	corretMagic;
    float	corretFaith;
    float	physGuardCutRate;
    float	magGuardCutRate;
    float	fireGuardCutRate;
    float	thunGuardCutRate;
    int	spEffectBehaviorId0;
    int	spEffectBehaviorId1;
    int	spEffectBehaviorId2;
    int	residentSpEffectId0;
    int	residentSpEffectId1;
    int	residentSpEffectId2;
    int	materialSetId;
    int	originEquipWep0;
    int	originEquipWep1;
    int	originEquipWep2;
    int	originEquipWep3;
    int	originEquipWep4;
    int	originEquipWep5;
    int	originEquipWep6;
    int	originEquipWep7;
    int	originEquipWep8;
    int	originEquipWep9;
    int	originEquipWep10;
    int	originEquipWep11;
    int	originEquipWep12;
    int	originEquipWep13;
    int	originEquipWep14;
    int	originEquipWep15;
    float	antiDemonDamageRate;
    float	antUndeadDamageRate;
    float	antHollowDamageRate;
    float	antAbyssalDamageRate;
    int	vagrantItemLotId;
    int	vagrantBonusEneDropItemLotId;
    int	vagrantItemEneDropItemLotId;
    short	equipModelId;
    short	iconId;
    short	durability;
    short	durailityMax;
    short	attackThrowEscape;
    short	parryDamageLife;
    short	atkBasePhysics;
    short	atkBaseMagic;
    short	atkBaseFire;
    short	atkBaseThunder;
    short	atkBaseStamina;
    short	saWeaponDamage;
    short	saDurability;
    short	guardAngle;
    short	staminaGuardDef;
    short	reinforceTypeId;    // 46 * 4 + 15 * 2 offset
    short	trophySGradeId;
    short	trophySeqId;
    short	throwAtkRate;
    short	bowDistRate;
    unsigned char	equipModelCategory;
    unsigned char	equipModelGender;
    unsigned char	weaponCategory;
    unsigned char	wepmotionCategory;
    unsigned char	guardmotionCategory;
    unsigned char	atkMaterial;
    unsigned char	defMaterial;
    unsigned char	defSfxMaterial;
    unsigned char	correctType;
    unsigned char	spAttribute;
    short	spAtkCategory;
    unsigned char	wepmotionOneHandId;
    unsigned char	wepmotionBothHandId;
    unsigned char	properStrength;
    unsigned char	properAgility;
    unsigned char	properMagic;
    unsigned char	properFaith;
    unsigned char	overStrength;
    unsigned char	attackBaseParry;
    unsigned char	defenseBaseParry;
    unsigned char	guardBaseRepel;
    unsigned char	attackBaseRepel;
    unsigned char	guardCutCancelRate;
    unsigned char	guardLevel;
    unsigned char	slashGuardCutRate;
    unsigned char	blowGuardCutRate;
    unsigned char	thrustGuardCutRate;
    unsigned char	poisonGuardResist;
    unsigned char	toxicGuardResist;
    unsigned char	bloodGuardResist;
    unsigned char	curseGuardResist;
    unsigned char	isDurabilityDivergence;
    bool	rightHandEquipable:1;
    bool	leftHandEquipable:1;
    bool	bothHandEquipable:1;
    bool	arrowSlotEquipable:1;
    bool	boltSlotEquipable:1;
    bool	enableGuard:1;
    bool	enableParry:1;
    bool	enableMagic:1;
    bool	enablePyromancy:1;
    bool	enableMiracle:1;
    bool	enableVowMagic:1;
    bool	isNormalAttackType:1;
    bool	isBlowAttackType:1;
    bool	isSlashAttackType:1;
    bool	isThrustAttackType:1;
    bool	isEnhance:1;
    bool	isLuckCorrect:1;
    bool	isCustom:1;
    bool	disableBaseChangeReset:1;
    bool	disableRepair:1;
    bool	isDarkHand:1;
    bool	simpleModelForDlc:1;
    bool	ubyteLanternWep:1;
    bool	isVersusGhostWep:1;
    bool	baseChangeCategory:1;
    bool	isDragonSlayer:1;
    bool	isDeposit:1;
    bool	disableMultiDropShare:1;
    bool	Bool1:1;
    bool	Bool2:1;
    bool	DisableShoot:1;
    bool	EnableRepository:1;
    bool	DisableMultiDropShare2:1;
    bool	IsDiscard:1;
    bool	IsDrop:1;
    bool	Bool3:1;
    bool	Bool4:1;
    bool	Bool5:1;
    bool	Bool6:1;
    bool	Bool7:1;
    unsigned char	Unk6;
    unsigned char	Unk7;
    unsigned char	Unk8;
    unsigned char	Unk9;
    unsigned char	Unk10;
    unsigned char	Unk11;
    int	Group0_AtkVfxId;
    int	Group0_DummyPolyId0;
    int	Group0_DummyPolyId1;
    int	Group1_AtkVfxId;
    int	Group1_DummyPolyId0;
    int	Group1_DummyPolyId1;
    int	Group2_AtkVfxId;
    int	Group2_DummyPolyId0;
    int	Group2_DummyPolyId1;
    int	Group3_AtkVfxId;
    int	Group3_DummyPolyId0;
    int	Group3_DummyPolyId1;
    int	Group4_AtkVfxId;
    int	Group4_DummyPolyId0;
    int	Group4_DummyPolyId1;
    int	Group5_AtkVfxId;
    int	Group5_DummyPolyId0;
    int	Group5_DummyPolyId1;
    int	Group6_AtkVfxId;
    int	Group6_DummyPolyId0;
    int	Group6_DummyPolyId1;
    int	Group7_AtkVfxId;
    int	Group7_DummyPolyId0;
    int	Group7_DummyPolyId1;
    short	materialVal0;
    short	materialVal1;
    int	wepAbsorpPosId;
    float	Unk12;
    bool	Unk13:1;
    bool	Unk14:1;
    bool	IsAutoEquip:1;
    bool	Unk16:1;
    bool	Unk17:1;
    bool	Unk18:1;
    bool	Unk19:1;
    bool	Unk20:1;
    unsigned char	Unk21;
    unsigned char	Unk22;
    unsigned char	Unk23;
    float	Unk24;
    float	Unk25;
    float	darkGuardCutRate;
    short	atkBaseDark;
    unsigned char	Unk26;
    unsigned char	AtkThrowEscapeA;
    int	swordArt_ActId;
    unsigned char	AtkThrowEscapeB;
    unsigned char	Unk30;
    unsigned char	Unk31;
    unsigned char	MenuAdhoc;
    int	swordArtId;
    float	correctLuck;
    int	reinforceWeaponId;
    short	Unk34;
    short	displayTypeId;
    float	CalcCorrectVal0;
    float	CalcCorrectVal1;
    float	CalcCorrectVal2;
    float	CalcCorrectVal3;
    float	CalcCorrectVal4;
    float	CalcCorrectVal5;
    float	CalcCorrectVal6;
    float	CalcCorrectVal7;
    float	CalcCorrectVal8;
    float	CalcCorrectVal9;
    float	CalcCorrectVal10;
    int	weaponVfx0;
    int	weaponVfx1;
    int	weaponVfx2;
    int	weaponVfx3;
    int	weaponVfx4;
    int	weaponVfx5;
    int	weaponVfx6;
    int	weaponVfx7;
    float	StaminaConsumeRate;
    float	Unk48;
    float	Unk49;
    float	Unk50;
    float	Unk51;
    float	Unk52;
    float	Unk53;
    float	Unk54;
    float	Unk55;
    int	Unk56;
    int	Unk57;
    int	Unk58;
    int	Unk59;
    int	Unk60;
    int	attackElementCorrectId;
    int	shopPrice;
    unsigned char	Unk62;
    unsigned char	MaxNum;
    bool	WepSpMask0:1;
    bool	WepSpMask1:1;
    bool	WepSpMask2:1;
    bool	WepSpMask3:1;
    bool	WepSpMask4:1;
    bool	WepSpMask5:1;
    bool	WepSpMask6:1;
    bool	WepSpMask7:1;
    unsigned char	Unk65;
    int	Unk66;
    short	SpEff9600;
};

#pragma endregion

