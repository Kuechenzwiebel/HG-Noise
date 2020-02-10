//
//  perlinNoise.hpp
//  HG-Noise
//
//  Created by Tobias Pflüger on 24.12.19.
//  Copyright © 2019 Tobias Pflüger. All rights reserved.
//

#ifndef perlinNoise_hpp
#define perlinNoise_hpp

#include <stdio.h>
#include <vector>

#include "sivPerlinNoise.hpp"

namespace hg {
    class PerlinNoise {
    public:
        PerlinNoise(unsigned int seed);
        
        virtual float octaveNoise(float x, float y);
        
        float frequency;
        float multiplier;
        int octaves;
        unsigned int seed;
        float offset;
        
    private:
        siv::PerlinNoise perlinNoise;
    };
};

#endif /* perlinNoise_hpp */
