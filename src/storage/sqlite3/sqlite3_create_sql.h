/*MT*
    
    MediaTomb - http://www.mediatomb.cc/
    
    sqlite3_create_sql.h - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.cc>,
                       Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>
    
    Copyright (C) 2006-2010 Gena Batyan <bgeradz@mediatomb.cc>,
                            Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>,
                            Leonhard Wimmer <leo@mediatomb.cc>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
    
    $Id$
*/

/// \file sqlite3_create_sql.h

#ifdef HAVE_SQLITE3

#ifndef __SQLITE3_CREATE_SQL_H__
#define __SQLITE3_CREATE_SQL_H__
#define SL3_CREATE_SQL_INFLATED_SIZE 3283
#define SL3_CREATE_SQL_DEFLATED_SIZE 814

/* begin binary data: */
const unsigned char sqlite3_create_sql[] = /* 814 */
{0x78,0x9C,0xB5,0x56,0x5B,0x6F,0xDA,0x30,0x14,0x7E,0xE7,0x57,0x58,0x79,0x21
,0x95,0xD8,0x04,0x55,0x2B,0x6D,0xEA,0x53,0x0A,0x6E,0x15,0x8D,0x86,0x0E,0xC2
,0xB4,0x3D,0x59,0x26,0x31,0xE0,0x91,0x9B,0x1C,0x07,0x95,0x7F,0x5F,0x3B,0xCE
,0x95,0x84,0x90,0x4D,0xAD,0x84,0x10,0x9C,0xBB,0x3F,0x7F,0xE7,0x1C,0x3F,0xC2
,0x67,0xD3,0x02,0xF6,0xD2,0xB0,0x56,0xC6,0xD4,0x36,0x17,0xD6,0xC3,0x60,0xBA
,0x84,0x86,0x0D,0x81,0x6D,0x3C,0xCE,0x21,0xD0,0x7C,0x8E,0x1C,0x37,0x46,0xE1
,0xE6,0x2F,0x71,0xB8,0x06,0xF4,0x01,0x00,0x1A,0x75,0x35,0x40,0x03,0x4E,0x76
,0x84,0x81,0x88,0x51,0x1F,0xB3,0x13,0x38,0x90,0xD3,0x48,0xEA,0x18,0xD9,0xA2
,0xAA,0xDE,0x25,0x5B,0x9C,0x78,0x1C,0x58,0xEB,0xF9,0x3C,0x35,0x88,0x30,0x23
,0x01,0xAF,0xD9,0x58,0x0B,0x3B,0xD5,0x17,0xC6,0xC3,0xF1,0x30,0xB5,0x55,0x59
,0x11,0x3F,0x45,0x44,0x03,0x9C,0x06,0x27,0xE1,0x01,0x92,0x20,0xA6,0xBB,0x80
,0xB8,0x85,0x5B,0x6A,0x9A,0x44,0x41,0x84,0x1C,0x0F,0xC7,0xB1,0x06,0x8E,0x98
,0x39,0x7B,0xCC,0xF4,0x6F,0xE3,0x9B,0x66,0x7E,0xD7,0x41,0x9C,0x72,0x8F,0x94
,0x66,0xB7,0xF7,0xF7,0x2D,0x76,0x5E,0xE8,0x60,0x4E,0xC3,0x40,0x24,0x26,0x6F
,0xFC,0xB2,0x1E,0xED,0x71,0xBC,0x2F,0xCF,0x52,0x54,0xD7,0x70,0xF0,0x09,0xC7
,0x2E,0xE6,0xF8,0x52,0x40,0x9C,0xBC,0x75,0xA9,0x19,0x89,0xC3,0x84,0x39,0x24
,0xBE,0x64,0x90,0x44,0xC2,0x9D,0xF4,0x03,0xD6,0xA7,0x3E,0xC9,0x60,0xCD,0x51
,0xB8,0x6B,0x03,0x6B,0xEB,0xE1,0x5D,0xDC,0x72,0xB8,0x66,0xE0,0x89,0x0A,0xCC
,0x19,0x76,0x0E,0x28,0x48,0xFC,0x0D,0x61,0x1D,0x24,0x88,0x09,0x3B,0x52,0x47
,0x15,0xDB,0x79,0x0D,0xD3,0x85,0xB5,0x12,0xEC,0x34,0x2D,0x1B,0x68,0x25,0x0F
,0x11,0xDD,0x6C,0x0F,0x68,0xA2,0x81,0xA7,0xC5,0x12,0x9A,0xCF,0x16,0xF8,0x01
,0xFF,0x00,0x3D,0xE7,0xDE,0x0D,0x58,0xC2,0x27,0xB8,0x84,0xD6,0x14,0xAE,0xAA
,0x5E,0x82,0xBD,0x5A,0xAA,0x5E,0x58,0x60,0x06,0xE7,0x50,0x90,0x7C,0x6A,0xAC
,0xA6,0xC6,0x0C,0x4A,0xC9,0xFA,0x75,0x66,0x94,0x92,0x6B,0xB9,0x6F,0xCF,0x73
,0x97,0xB4,0xFE,0x88,0xF4,0x83,0x9B,0x87,0x81,0x69,0xAD,0xE0,0xD2,0x06,0x22
,0xFD,0xA2,0xD1,0x86,0xBF,0x8C,0xF9,0x1A,0xAE,0xF4,0x2F,0x93,0x91,0x42,0x0A
,0xC8,0x5F,0xE3,0xFC,0x4F,0x9F,0xEF,0xC2,0xF8,0x7B,0x55,0xDE,0x2F,0xED,0xB8
,0x9A,0x55,0x7C,0x86,0x4A,0xFF,0xD5,0x09,0x03,0x8E,0x69,0x40,0xD8,0x50,0xC8
,0x96,0x61,0xC8,0x87,0x9F,0x59,0xC5,0xA4,0x12,0xE4,0x52,0x11,0xAF,0x53,0x30
,0xA3,0x4C,0x88,0x43,0x76,0xFA,0xFF,0x62,0x5A,0x27,0x22,0x76,0x38,0x3D,0x0A
,0x06,0x73,0xE2,0xF7,0x18,0x8B,0xD2,0x5A,0xCE,0x92,0x1A,0xD9,0x6B,0x03,0x2C
,0xE6,0xA2,0x7B,0x3B,0x0C,0xAA,0x6C,0x6C,0x96,0x70,0xA1,0x23,0x1A,0x74,0x3C
,0x1F,0xE7,0xFF,0xC4,0xC8,0x06,0x0E,0xF2,0xB4,0x2C,0xC0,0x1E,0x8A,0x09,0x17
,0xE3,0x79,0x97,0x01,0x21,0x0E,0x5D,0x9F,0x2B,0x15,0x34,0xEA,0x87,0x3E,0x62
,0x2F,0xB9,0x74,0xE8,0xB6,0x1E,0x68,0x26,0xCC,0xC8,0x30,0x74,0x37,0xE8,0x48
,0x58,0x2C,0x40,0x96,0xF7,0x7E,0x37,0x6C,0x2B,0x17,0x27,0x3C,0x8C,0x1D,0x1C
,0xF4,0xB8,0x2F,0x01,0x50,0xF7,0x1A,0x93,0x71,0x90,0x47,0x8E,0xC4,0x2B,0xCB
,0x9F,0x8C,0xCF,0xEF,0x54,0x1A,0xF9,0xA1,0x4B,0x3A,0x6C,0x04,0x3B,0x13,0x51
,0xF7,0xF1,0xEA,0x86,0xDB,0x53,0xD7,0x25,0xC1,0x35,0xAB,0x14,0x21,0x01,0x6B
,0x9F,0x8D,0x24,0xB6,0x25,0x97,0xE5,0xD1,0x2D,0x25,0x6E,0x1F,0x87,0x48,0x22
,0x1C,0x73,0x31,0xE8,0x3A,0xCA,0x68,0x2C,0x9B,0x6B,0x9B,0x34,0xC2,0x7C,0x2F
,0xC0,0xBE,0xB8,0xD8,0x78,0x98,0x38,0x7B,0x59,0x60,0x8F,0x94,0x6A,0x0D,0x9D
,0xF5,0x4A,0x7E,0xEF,0xE9,0x8D,0xD6,0x1B,0x24,0xBB,0xE7,0xCF,0x6C,0x92,0x72
,0xEF,0x5F,0x65,0x9D,0xEA,0xE4,0x96,0x05,0xAE,0x70,0x62,0xA1,0xB8,0x00,0x7E
,0x42,0x01,0xF6,0xBB,0x26,0x45,0x69,0x98,0xB5,0x57,0x0A,0x6B,0xC7,0x2C,0xC9
,0x2B,0x14,0xA9,0xB7,0x87,0xE6,0x0C,0xC9,0x8A,0xFA,0x78,0x8C,0x4C,0x6B,0x06
,0x7F,0x83,0x5A,0x24,0xA4,0x76,0xB8,0x74,0xAB,0xC9,0x75,0x25,0xEF,0xF6,0x2D
,0x76,0x70,0xD3,0xBD,0x50,0x8D,0x2A,0x6F,0xCA,0x51,0xFE,0x16,0x6C,0x09,0x5B
,0x31,0x6B,0x46,0xAB,0x28,0x5B,0x5C,0x8B,0x97,0xA1,0x4A,0xDA,0x74,0xAF,0x3D
,0x1D,0x47,0x45,0x69,0x2D,0xA1,0xAA,0xCF,0xA9,0x66,0x9C,0xAA,0xB6,0xC5,0xF9
,0x7C,0x58,0x22,0x39,0x7E,0x55,0x90,0x73,0x95,0x2E,0x54,0x65,0x84,0xB5,0x65
,0xFE,0x5C,0x57,0x02,0x15,0xFD,0xA3,0xBA,0x25,0x8B,0x91,0x4B,0x75,0x25,0xED
,0xBE,0x9A,0xF2,0xC1,0xD7,0x3C,0x46,0xA9,0x6B,0x89,0x51,0x72,0x53,0xD1,0x30
,0x73,0xCF,0xC5,0x7A,0x26,0x96,0x9E,0x8B,0x97,0x17,0xD3,0x7E,0x18,0xBC,0x03
,0x50,0x33,0xFC,0xCE};
/* end binary data. size = 814 bytes */

#endif // __SQLITE3_CREATE_SQL_H__

#endif // HAVE_SQLITE3
