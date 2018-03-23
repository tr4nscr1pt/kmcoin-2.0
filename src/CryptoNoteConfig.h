// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

namespace CryptoNote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;

const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 112;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW         = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

// MONEY_SUPPLY - total number coins to be generated

const uint64_t MONEY_SUPPLY                                  = UINT64_C(5244674407370950);
const uint64_t TAIL_EMISSION_REWARD                          = 100000000;
const size_t CRYPTONOTE_COIN_VERSION                          = 1;

const unsigned EMISSION_SPEED_FACTOR                         = 21;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const uint8_t ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION = 0;
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX                 = 0;
const size_t ZAWY_DIFFICULTY_V2                          = 1;
//const size_t ZAWY_DIFFICULTY_V3                          = 0;
//const size_t ZAWY_DIFFICULTY_V4                          = 0;



const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;

const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 1000000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 1000000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 100000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 8;
const uint64_t MINIMUM_FEE                                   = UINT64_C(1000000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(1000000);

const uint64_t DIFFICULTY_TARGET                             = 90; // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = 17; // blocks
const size_t   DIFFICULTY_WINDOW_V1                          = 960;
const size_t   DIFFICULTY_WINDOW_V2                          = 17;
const size_t   DIFFICULTY_CUT                                = 0;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = 60;
const size_t   DIFFICULTY_CUT_V2                             = 0;
const size_t   DIFFICULTY_LAG                                = 0;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = 15;
const size_t   DIFFICULTY_LAG_V2                             = 0;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 1000000;

const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                                = 143000;
const uint32_t UPGRADE_HEIGHT_V3                                = 94967294;

const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");


const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]			     = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "kmcoin";

const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  200;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  15505;
const int      RPC_DEFAULT_PORT                              =  16606;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 32 * 1024 * 1024; // 32 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115";

const char* const SEED_NODES[] = { 

 "81.4.122.43:15505",
 "81.4.103.152:15505",
 "185.52.2.184:15505",
 "185.52.2.182:15505",
 "77.78.203.86:15505",
 "185.34.216.59:15505"


};
   
 struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
   
 
  {10000, "d75a9b3425c4cdc5c0a22c8b58cc198ed7cc01286b4ae881bce8900c6a9a89b4"},
  {25000, "e5d239870c0cda75a63c2699a05e31b3eac24d20e08102bb6727cac9b0af8b8a"},
  {35000, "a8f6ce17a4d5646caabf04b7bf19f0d4c32ad56d0864f17038e8d5318960c06e"},
  {45000, "926e3972d07e19b0e89a34e00f8b01a66031feab2e5846445ac2967d7e4dc8be"},
  {55000, "3b930af21a9737460f4acbf504432c3130514ac799231d3881ebbc4999d8599f"},
  {65000, "50341c3a9671107c8334cd604cb10113e7ff704ec104976434fdcc0bfad1df18"},
  {75000, "f98992f277d265a1a4c23dff2fcc0a77d18f12e5586a877fdb99460b79e1e30f"},
  {85000, "7e15a426362954a800b87d369159c142d696fe9baa34aa2c465c8308f882d72d"},
  {95000, "b13c0193e7bcb83e8fb7e14368058c0b701a2850272310c7524f9bc12b78ed14"},
  {100000, "ac26b06a8f79eac347e1ba3b18336dfed80574b723a946b559d2598e01d61e16"},
 {105000, "14e034a18da29c4a4d2b44d0c7edc2c711dc5a18ee7a73be5028576f865ae7a1"},
 {110000, "68f1706b094e3da4ed8611cdbdc88c1f7d9728ed3e322ac27b30d7e5092dc2a5"},
 {113300, "c1be9a090bfdc09e402169dd24db5c11ad6a4728e149252f06da44462634ee03"},
{113500, "c70dccfa5414efa17fe0343e4495e880c57dd31a01652f72ef874feeac8e2588"},
{117000, "5a9e046bda1f20893027eabad9fe52e5e2b07ee71d3f833f9f2aea01fe7b866e"},
{120500, "ac3b5a3fd83a958ccf2b2748ff88be891a969d6263f4bea5f44f5055cfb2d79d"},
{125500, "2b0ed2e07e611ba667ef1e8b9d333547b1b7be2c9141b22075e56145931951a7"},
{130000, "857c67320a6bab89c9a0e8073701992d579d1925a5a863ccb8cb93853edae7c2"},
{135000, "3c18b7f228b773c8ef06ca7c4092e1ea7a33cc8a9bc5dee6e795e76935d4970c"},
{136200, "223ccec1fbe5e617cb0f9f83a7fa00bd64160b9eb178762a00e34f7457659f6c"}  



};


} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
