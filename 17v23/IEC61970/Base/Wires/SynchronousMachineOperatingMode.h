///////////////////////////////////////////////////////////
//  SynchronousMachineOperatingMode.h
//  Implementation of the Class SynchronousMachineOperatingMode
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINEOPERATINGMODE_H
#define SYNCHRONOUSMACHINEOPERATINGMODE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Synchronous machine operating mode.
			 */
			enum class SynchronousMachineOperatingMode
			{
				 _undef = -1, 	generator,
				condenser,
				motor
			};

		}

	}

}
#endif // SYNCHRONOUSMACHINEOPERATINGMODE_H
