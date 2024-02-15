#pragma once

#include "GameTypes.h"
#include "GameReferences.h"

template <typename FormT, typename DataT>
class IHandlerFunctor
{
public:
	virtual ~IHandlerFunctor();
	virtual	UInt8	Process(FormT * form, DataT unk04); // pure
	
	BSIntrusiveRefCounted refCount;
};

template<>
class IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~IHandlerFunctor();
	virtual	UInt8	Process(Actor * form, UInt32 unk04); // pure

	template<class T, UInt32 type, UInt32 slot>
	UInt8	ProcessAction(Actor * form, UInt32 unk04);
};

// All member functions below are merely the original vtbl function address
class WeaponRightSwingHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~WeaponRightSwingHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(WeaponRightSwingHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9BD0, Actor * form, UInt32 unk04);
};

class WeaponLeftSwingHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~WeaponLeftSwingHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(WeaponLeftSwingHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9C60, Actor * form, UInt32 unk04);
};

class RightHandSpellFireHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~RightHandSpellFireHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(RightHandSpellFireHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9E20, Actor * form, UInt32 unk04);
};

class LeftHandSpellFireHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~LeftHandSpellFireHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(LeftHandSpellFireHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9DD0, Actor * form, UInt32 unk04);
};

class RightHandSpellCastHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~RightHandSpellCastHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(RightHandSpellCastHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9FE0, Actor * form, UInt32 unk04);
};

class LeftHandSpellCastHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~LeftHandSpellCastHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(LeftHandSpellCastHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9F90, Actor * form, UInt32 unk04);
};

class VoiceSpellCastHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~VoiceSpellCastHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(VoiceSpellCastHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BA030, Actor * form, UInt32 unk04);
};

class VoiceSpellFireHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~VoiceSpellFireHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(VoiceSpellFireHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007B9E70, Actor * form, UInt32 unk04);
};

class BowDrawnHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~BowDrawnHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(BowDrawnHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BB290, Actor * form, UInt32 unk04);
};

class BowReleaseHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~BowReleaseHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(BowReleaseHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BB2B0, Actor * form, UInt32 unk04);
};

class WeaponBeginDrawRightHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~WeaponBeginDrawRightHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(WeaponBeginDrawRightHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BA0C0, Actor * form, UInt32 unk04);
};

class WeaponBeginSheatheRightHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~WeaponBeginSheatheRightHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(WeaponBeginSheatheRightHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BA170, Actor * form, UInt32 unk04);
};

class RightHandWeaponDrawHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~RightHandWeaponDrawHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(RightHandWeaponDrawHandler);
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BA1E0, Actor * form, UInt32 unk04);
};

class RightHandWeaponSheatheHandler : public IHandlerFunctor<Actor, UInt32>
{
public:
	virtual ~RightHandWeaponSheatheHandler();
	virtual	UInt8	Process(Actor * form, UInt32 unk04);

	MEMBER_FN_PREFIX(RightHandWeaponSheatheHandler);
	// ??_7RightHandWeaponSheatheHandler@@6B@ + 8
	DEFINE_MEMBER_FN(Process_Origin, UInt8, 0x007BA340, Actor * form, UInt32 unk04);
};
