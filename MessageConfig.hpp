/**********************************************************************************************************************
 * Bukhtagram                                                                                                         *
 *                                                                                                                    *
 * Author: Bukhta Mykyta                                                                                              *
 *                                                                                                                    *
 * Copyright ©2023 Bukhta Mykyta                                                                                      *
 *                                                                                                                    *
 * This software is distributed under the following license:                                                          *
 *                                                                                                                    *
 * 1. This code may not be modified, redistributed, or used to create derivative works.                               *
 * 2. Any use of this code for commercial purposes is prohibited without prior written permission of the author.      *
 * 3. The author is not liable for any damages caused by the use of this software.                                    *
 * 4. Copies of this license or references to it must be included in all copies or significant parts of the software. *
 *                                                                                                                    *
 * For permission for commercial use, contact the author at the following address: nikita.bukhta.dev@gmail.com.       *
 **********************************************************************************************************************                                                                                                                    *
 */

#ifndef BUKHTAGRAM_MESSENGERCOMMON_MESSAGECONFIG_HPP
#define BUKHTAGRAM_MESSENGERCOMMON_MESSAGECONFIG_HPP

#include <inttypes.h>

namespace bukhtagram {

const uint16_t MAX_MESSAGE_LENGTH = 2048;
//                                                          sender + receiver     message type;
const uint16_t STANDART_BUFFER_SIZE = MAX_MESSAGE_LENGTH + sizeof(uint64_t) * 2 + sizeof(uint8_t);

}   // !bukhtagram;

#endif  // !BUKHTAGRAM_MESSENGERCOMMON_MESSAGECONFIG_HPP;