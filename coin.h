// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"dnsseed.litecoinz.org", "dnsseed.litecoinz.info", ""};
static const std::string testnet_seeds[] = {"dnsseed-testnet.litecoinz.org", "dnsseed-testnet.litecoinz.info", ""};

static const int mainnet_port = 29333;
static const int testnet_port = 39333;

static unsigned char pchMessageStart[4] = { 0xd8, 0xcf, 0xcd, 0x93 };
static unsigned char pchMessageStart_testnet[4] = { 0xfe, 0x90, 0x86, 0x5d };

#endif // __INCLUDED_COIN_H__
