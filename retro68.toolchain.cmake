#   Copyright 2012 Wolfgang Thaller.
#
#   This file is part of Retro68.
#
#   Retro68 is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   Retro68 is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with Retro68.  If not, see <http://www.gnu.org/licenses/>.

set( CMAKE_SYSTEM_NAME Retro68 )
set( CMAKE_SYSTEM_VERSION 1)

set( RETRO68_ROOT "" CACHE PATH "path to root of Retro68 Toolchain" )
set( CMAKE_INSTALL_PREFIX "${RETRO68_ROOT}/m68k-unknown-elf/" CACHE PATH "installation prefix" )

set( MAKE_APPL "${RETRO68_ROOT}/bin/MakeAPPL" )

set( CMAKE_C_COMPILER "${RETRO68_ROOT}/bin/m68k-unknown-elf-gcc" )
set( CMAKE_CXX_COMPILER "${RETRO68_ROOT}/bin/m68k-unknown-elf-g++" )

