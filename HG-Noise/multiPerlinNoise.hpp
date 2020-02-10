//
//  multiPerlinNoise.hpp
//  HG-Noise
//
//  Created by Tobias Pflüger on 24.12.19.
//  Copyright © 2019 Tobias Pflüger. All rights reserved.
//

#ifndef multiPerlinNoise_hpp
#define multiPerlinNoise_hpp

#include <stdio.h>
#include <vector>
#include <memory>

#include "perlinNoise.hpp"

namespace hg {
    class MultiPerlinNoise: public PerlinNoise {
    public:
        MultiPerlinNoise();
        
        std::vector<std::unique_ptr<PerlinNoise>> perlinNoises;
        
        float octaveNoise(float x, float y);
    };
};

#endif /* multiPerlinNoise_hpp */
