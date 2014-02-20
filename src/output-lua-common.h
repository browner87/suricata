/* Copyright (C) 2014 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Victor Julien <victor@inliniac.net>
 */

#ifndef __OUTPUT_LUA_COMMON_H__
#define __OUTPUT_LUA_COMMON_H__

#ifdef HAVE_LUA

void LuaPrintStack(lua_State *state);

Packet *LuaStateGetPacket(lua_State *luastate);
void *LuaStateGetTX(lua_State *luastate);
int LuaCallbackError(lua_State *luastate, const char *msg);
int LuaReturnStringBuffer(lua_State *luastate, const uint8_t *input, size_t input_len);
const char *LuaGetStringArgument(lua_State *luastate, int argc);

#endif /* HAVE_LUA */

#endif /* __OUTPUT_LUA_COMMON_H__ */