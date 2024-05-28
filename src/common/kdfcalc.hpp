// Copyright (c) Rowan Vixen - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef KDFCALC_HPP
#define KDFCALC_HPP

#include <sodium.h>
#define KEY_LEN crypto_pwhash_STRBYTES
#define OPS_LIMIT crypto_pwhash_OPSLIMIT_SENSITIVE
#define MEM_LIMIT crypto_pwhash_MEMLIMIT_SENSITIVE

int kdf_derive(const char * const password, char out[KEY_LEN]);

int kdf_verify(const char * const password, const char hash[KEY_LEN]);
#endif /* KDFCALC_HPP */

