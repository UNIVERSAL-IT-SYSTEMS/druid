/*
 * SerialEnumeratorMac.h -- Mac serial port enumerator, totally untested.
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

#ifndef SERIALENUMERATORMAC_H_
#define SERIALENUMERATORMAC_H_

#include "libDruid/SerialEnumeratorBase.h"

namespace DRUID {

class SerialEnumeratorMac : public SerialEnumeratorBase  {
public:
	SerialEnumeratorMac();
	virtual ~SerialEnumeratorMac();

	virtual PortNameList listPorts();

};

} /* namespace DRUID */
#endif /* SERIALENUMERATORMAC_H_ */
