/***************************************************************************
                          doctrackvideo.cpp  -  description
                             -------------------
    begin                : Fri Apr 12 2002
    copyright            : (C) 2002 by Jason Wood
    email                : jasonwood@blueyonder.co.uk
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "doctrackvideo.h"

DocTrackVideo::DocTrackVideo()
{
}

DocTrackVideo::~DocTrackVideo()
{
}

/** Returns true if the specified clip can be added to this track, false otherwise. */
bool DocTrackVideo::canAddClip(DocClipBase * clip)
{
	return false;
}
