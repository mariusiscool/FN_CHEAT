#pragma once
#include <Windows.h>

#define OFFSET_UWORLD 0x11781328

namespace Offsets {
	uintptr_t PastePolice = 0x1337;


	uintptr_t GameInstance = 0x1d0;
	uintptr_t LocalPlayers = 0x38;
	uintptr_t PlayerController = 0x30;
	uintptr_t LocalPawn = 0x338;
	uintptr_t PlayerState = 0x2B0;
	uintptr_t RootComponent = 0x198;
	uintptr_t Persistentlevel = 0x30;
	uintptr_t TeamIndex = 0x10E0;
	uintptr_t AcotrCount = 0xA8;
	uintptr_t AAcotrs = 0xA0;
	uintptr_t Mesh = 0x318;
	uintptr_t RelativeLocation = 0x120;
	uintptr_t CurrentActor = 0x8;
	uintptr_t Velocity = 0x168;
	uintptr_t ComponentToWorld = 0x230;
	uintptr_t BoneArray = 0x608;
	uintptr_t bIsDying = 0x758;
	uintptr_t bIsDBNO = 0x93a;
}

namespace W2S {
	uintptr_t chain69 = 0xA8;
	uintptr_t chain699 = 0x7E8;
	uintptr_t chain = 0x70;
	uintptr_t chain1 = 0x98;
	uintptr_t chain2 = 0x140;
	uintptr_t vDelta = 0x10;
	uintptr_t zoom = 0x580;
}