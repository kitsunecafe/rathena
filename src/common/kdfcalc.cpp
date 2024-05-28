// Copyright (c) Rowan Vixen - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#include "kdfcalc.hpp"

#include <sodium.h>
#include <cstring>

int kdf_derive(const char * const password, char out[KEY_LEN]) {
    return crypto_pwhash_str(
        out, password, strlen(password),
        OPS_LIMIT, MEM_LIMIT
	);
}

int kdf_verify(const char * const password, const char hash[KEY_LEN]) {
    return crypto_pwhash_str_verify(hash, password, strlen(password));
}

