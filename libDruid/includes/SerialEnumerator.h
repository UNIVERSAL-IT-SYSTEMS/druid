/*
 * SerialEnumerator.h -- typedefs for platform-dependent enumerators
 *
 *	Druid4Arduino Copyright (C) 2013 Pat Deegan, psychogenic.com
 *	http://flyingcarsandstuff.com/projects/druid4arduino/
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SERIALENUMERATOR_H_
#define SERIALENUMERATOR_H_

#include "ExternalIncludes.h"

#include "SerialEnumeratorLinux.h"
#include "SerialEnumeratorMac.h"
#include "SerialEnumeratorWindows.h"

namespace DRUID {

#ifdef PLATFORM_LINUX
typedef SerialEnumeratorLinux SerialEnumerator;
#endif


#ifdef PLATFORM_MAC
typedef SerialEnumeratorMac SerialEnumerator;
#endif


#ifdef PLATFORM_WINDOWS
typedef SerialEnumeratorWindows SerialEnumerator;
#endif


}
#endif /* SERIALENUMERATOR_H_ */
