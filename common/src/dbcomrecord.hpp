/*
 * =====================================================================================
 *
 *       Filename: dbcomrecord.hpp
 *        Created: 07/28/2017 23:03:43
 *  Last Modified: 08/06/2017 17:26:32
 *
 *    Description: split from dbcom.hpp
 *                 don't include dbcomid.hpp in this header file
 *
 *        Version: 1.0
 *       Revision: none
 *       Compiler: gcc
 *
 *         Author: ANHONG
 *          Email: anhonghe@gmail.com
 *   Organization: USTC
 *
 * =====================================================================================
 */

#pragma once
#include <cstdint>
#include "itemrecord.hpp"
#include "magicrecord.hpp"
#include "monsterrecord.hpp"

const ItemRecord &DBCOM_ITEMRECORD(uint32_t);
const ItemRecord &DBCOM_ITEMRECORD(const char *);

const MagicRecord &DBCOM_MAGICRECORD(uint32_t);
const MagicRecord &DBCOM_MAGICRECORD(const char *);

const MonsterRecord &DBCOM_MONSTERRECORD(uint32_t);
const MonsterRecord &DBCOM_MONSTERRECORD(const char *);
