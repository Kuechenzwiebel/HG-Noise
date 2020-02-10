//
//  multiPerlinNoise.cpp
//  HG-Noise
//
//  Created by Tobias Pflüger on 24.12.19.
//  Copyright © 2019 Tobias Pflüger. All rights reserved.
//

#include "multiPerlinNoise.hpp"

namespace hg {
    MultiPerlinNoise::MultiPerlinNoise():
    PerlinNoise(0) {
        
    }

    float MultiPerlinNoise::octaveNoise(float x, float y) {
        float sum = 0.0f;
        
        for(int i = 0; i < perlinNoises.size(); i++)
            sum += perlinNoises[i]->octaveNoise(x, y);
        
        return sum;
    }
};
