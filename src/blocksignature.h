// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2020 The GHOST_PRISM developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GHOST_PRISM_BLOCKSIGNATURE_H
#define GHOST_PRISM_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //GHOST_PRISM_BLOCKSIGNATURE_H
