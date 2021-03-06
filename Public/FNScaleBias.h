// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FN.h"
#include "CoreMinimal.h"

/**
*
*/
class SANDBOXGAME_API FNScaleBias: public FN
{
public:
	FNScaleBias(FN* sourceModule, float scale, float bias);
	~FNScaleBias();
	void setBias(float bias);
	void setScale(float scale);
	void setSourceModule(FN* sourceModule);
	float getNoise(double x, double y, double z);
	float getNoise(double x, double y);

private:
	float fn_scale;
	float fn_bias;
	FN* fn_sourceModule;
};
