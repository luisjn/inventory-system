﻿// 


#include "Items/Components/Inv_ItemComponent.h"


UInv_ItemComponent::UInv_ItemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PickupMessage = FString("F - Pick Up");
}


