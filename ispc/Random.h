#pragma once

#include "Vec3.h"

typedef RNGState Random;

static inline float Uniform(Random& rng)
{
	return frandom(&rng);
}

static inline Vec3 RandomInUnitDisk(Random& rng)
{
	for (;;)
	{
		const Vec3 p = { 2 * Uniform(rng) - 1, 2 * Uniform(rng) - 1, 0 };
		if (SquaredLength(p) < 1)
		{
			return p;
		}
	}
}

static inline Vec3 RandomInUnitSphere(Random& rng)
{
	for (;;)
	{
		const Vec3 p = { 2 * Uniform(rng) - 1, 2 * Uniform(rng) - 1, 2 * Uniform(rng) - 1 };
		if (SquaredLength(p) < 1)
		{
			return p;
		}
	}
}
