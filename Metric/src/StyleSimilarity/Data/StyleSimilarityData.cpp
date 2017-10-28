//============================================================================
//
// This file is part of the Style Similarity project.
//
// Copyright (c) 2015 - Zhaoliang Lun (author of the code) / UMass-Amherst
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this software.  If not, see <http://www.gnu.org/licenses/>.
//
//============================================================================

#include "StyleSimilarityData.h"
#include "Feature/FeatureAsset.h"

#include <fstream>

using namespace std;
using namespace StyleSimilarity;

StyleSimilarityData::StyleSimilarityData() {
	mpSourceFeatures = 0;
	mpTargetFeatures = 0;
}

StyleSimilarityData::~StyleSimilarityData() {
	if (mpSourceFeatures) delete mpSourceFeatures;
	if (mpTargetFeatures) delete mpTargetFeatures;
}