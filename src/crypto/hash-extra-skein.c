// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2017 XDN-project developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <stddef.h>
#include <stdint.h>

#include "hash-ops.h"
#include "skein.h"

void hash_extra_skein(const void *data, size_t length, char *hash) {
  assert(SKEIN_SUCCESS == skein_hash(8 * HASH_SIZE, data, 8 * length, (uint8_t*)hash));
}
