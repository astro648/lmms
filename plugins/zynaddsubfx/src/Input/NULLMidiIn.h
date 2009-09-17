/*
  ZynAddSubFX - a software synthesizer

  NULLMidiIn.h - a dummy Midi port
  Copyright (C) 2002-2005 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2 or later) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

#ifndef NULL_MIDI_IN_H
#define NULL_MIDI_IN_H

#include "MidiIn.h"


/**a dummy Midi port*/
class NULLMidiIn:public MidiIn
{
public:
    /**Dummy Constructor
     * \todo see if the default constructor would work here*/
    NULLMidiIn();
    /**Dummy Destructor
     * \todo see if the default destructor would work here*/
    ~NULLMidiIn();
    /**Get the midi command,channel and parameters
     * It returns MidiNull because it is a dummy driver
     */
    void getmidicmd(MidiCmdType &cmdtype,unsigned char &cmdchan,int *cmdparams);

private:
};

#endif

