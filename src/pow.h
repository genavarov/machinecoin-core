// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Machinecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MACHINECOIN_POW_H
#define MACHINECOIN_POW_H

#include "consensus/params.h"

#include <stdint.h>

class CBlockHeader;
class CBlockIndex;
class uint256;

unsigned int GetNextWorkRequired(const CBlockIndex* pindexLast, const CBlockHeader *pblock, const Consensus::Params&); // Machinecoin: Select retargeting
unsigned int GetNextWorkRequired_V1(const CBlockIndex* pindexLast, const CBlockHeader *pblock, const Consensus::Params&); // Machinecoin: Standard retargeting (V1)
unsigned int GetNextWorkRequired_V2(const CBlockIndex* pindexLast, const CBlockHeader *pblock, const Consensus::Params&); // Machinecoin: Digishield retargeting (V2)
//unsigned int GetNextWorkRequired_V3(const CBlockIndex* pindexLast, const CBlockHeader *pblock, const Consensus::Params&); // Machinecoin: Retargeting to support the PoW change phase (V3)
unsigned int CalculateNextWorkRequired(const CBlockIndex* pindexLast, int64_t nFirstBlockTime, const Consensus::Params&); // Machinecoin: Select retargeting
unsigned int CalculateNextWorkRequired_V1(const CBlockIndex* pindexLast, int64_t nFirstBlockTime, const Consensus::Params&); // Machinecoin: Standard retargeting (V1)
unsigned int CalculateNextWorkRequired_V2(const CBlockIndex* pindexLast, int64_t nFirstBlockTime, const Consensus::Params&); // Machinecoin: Digishield retargeting (V2)
//unsigned int CalculateNextWorkRequired_V3(const CBlockIndex* pindexLast, int64_t nFirstBlockTime, const Consensus::Params&); // Machinecoin: Retargeting to support the PoW change phase (V3)

/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWork(uint256 hash, unsigned int nBits, const Consensus::Params&);

#endif // MACHINECOIN_POW_H
